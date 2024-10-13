#include "Motors/SixStep.h"
#include "config/default/peripheral/tmr1/plib_tmr1.h"

static void TmrStart(void)
{
    TMR1=0x0; // clear counter register
    IFS0CLR=_IFS0_T1IF_MASK; // clear timer interrupt flag
    IEC0SET=_IEC0_T1IE_MASK; // enable timer interrupt
    T1CONSET=_T1CON_ON_MASK; // enable timer module
}

static void TmrStop(void)
{
    T1CONCLR=_T1CON_ON_MASK; // disable timer module
    IEC0CLR=_IEC0_T1IE_MASK; // disable timer interrupt
}

static void TmrSetPeriod(uint16_t ms)
{
    uint32_t tmp;
    // Tick_per_ms=Frequency/1000;
    // TmrPeriod=ms*Tick_per_ms;
    // TmrPeriod=ms*Frequency/1000;
    tmp=TMR1_FrequencyGet();
    tmp*=ms;
    tmp/=1000;
    TMR1_PeriodSet((uint16_t) tmp);
}

static void TMR1_Callback_Handler(uint32_t status, uintptr_t context)
{
    SixStep_Stop();
    T1CONCLR=_T1CON_ON_MASK; // disable timer module
    IEC0CLR=_IEC0_T1IE_MASK; // disable timer interrupt
}

static void TmrSetCallbackHandler(void)
{
    TMR1_CallbackRegister(TMR1_Callback_Handler, (uintptr_t) NULL);
}

sixstep_deadtmr_t DeadTmrCxt={
    .Start=TmrStart,
    .Stop=TmrStop,
    .SetPeriod=TmrSetPeriod,
    .SetCallbackHandler=TmrSetCallbackHandler
};