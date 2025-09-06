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
        if(Tick_Check(&tk, 100))
        {
            prv=BTN_GetValue();
            Tick_Reset(tk);

            if(prv==0)
                return 1;
        }
    }

    return 0;
}

static void SixStepGen(void)
{
    static uint8_t sector=1;

    PWM_UH_SetLow();
    PWM_VH_SetLow();
    PWM_WH_SetLow();

    PWM_UL_SetLow();
    PWM_VL_SetLow();
    PWM_WL_SetLow();

    switch(sector)
    {
        default:
        case 1: // 0 (360)-60 degrees
            sector=2;
            printf("\r\n[+][ ].[ ][ ].[ ][-]");
            PWM_UH_SetHigh();
            PWM_WL_SetHigh();
            break;

        case 2: // 60-120 degrees
            sector=3;
            printf("\r\n[ ][ ].[+][ ].[ ][-]");
            PWM_VH_SetHigh();
            PWM_WL_SetHigh();
            break;

        case 3: // 120-180 degrees
            sector=4;
            printf("\r\n[ ][-].[+][ ].[ ][ ]");
            PWM_UL_SetHigh();
            PWM_VH_SetHigh();
            break;

        case 4: // 180-240 degrees
            sector=5;
            printf("\r\n[ ][-].[ ][ ].[+][ ]");
            PWM_UL_SetHigh();
            PWM_WH_SetHigh();
            break;

        case 5: // 240-300 degrees
            sector=6;
            printf("\r\n[ ][ ].[ ][-].[+][ ]");
            PWM_VL_SetHigh();
            PWM_WH_SetHigh();
            break;

        case 6: // 300-360(0) degrees
            sector=1;
            printf("\r\n[+][ ].[ ][-].[ ][ ]");
            PWM_UH_SetHigh();
            PWM_VL_SetHigh();
            break;
    }
}

int main(void)
{
    uint32_t TkLed, TkPrd;

    SYSTEM_Initialize();
    TMR0_OverflowCallbackRegister(BaseTmrCallback);
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    TkPrd=500; // 500ms
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
            SixStepGen();
        }
    }
}
