#include "mcc_generated_files/system/system.h"

static volatile uint32_t SysTickCnt=0;

#define TICK_PER_MS     1
#define Tick_Get()      SysTickCnt
#define Tick_Reset(tk)  tk=SysTickCnt

static void BaseTmrCallback(void)
{
    SysTickCnt++;
}

static bool Tick_Check(uint32_t *pTk, uint32_t ms)
{
    uint32_t tk=*pTk;

    if((Tick_Get()-tk)>=(ms*TICK_PER_MS))
    {
        Tick_Reset(*pTk);
        return 1;
    }

    return 0;
}

static bool Button_Ispressed(void)
{
    static bool prv=1;
    static uint32_t tk=0;

    if(prv!=BTN_GetValue())
    {
        if(Tick_Check(tk, 100))
        {
            prv=BTN_GetValue();
            Tick_Reset(tk);

            if(prv==0)
                return 1;
        }
    }

    return 0;
}

int main(void)
{
    uint32_t TkLed, TkPrd;

    SYSTEM_Initialize();
    TMR0_OverflowCallbackRegister(BaseTmrCallback);
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    TkPrd=50; // 50ms
    Tick_Reset(TkLed);
    printf("\r\nIPM TEST\r\n");

    while(1)
    {
        if(Button_Ispressed())
        {
            TkPrd+=50;
            
            if(TkPrd>1000)
                TkPrd=50;
            
            printf("\r\nSet period=%ld (ms)", TkPrd);
        }

        if(Tick_Check(&TkLed, TkPrd))
        {
            CLRWDT();
            LED0_Toggle();
        }
    }
}
