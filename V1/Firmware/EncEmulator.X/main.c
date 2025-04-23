#include "mcc_generated_files/system/system.h"
#include <util/delay.h>

volatile uint16_t CntLed=0;

void TCA0_IsrUserCb(void)
{
    ENC_A_SetLow();
    ENC_A_SetDigitalOutput();
    _delay_us(1);
    ENC_B_SetLow();
    ENC_B_SetDigitalOutput();
    CntLed++;
    ENC_A_SetDigitalInput();
    ENC_A_SetHigh();
    _delay_us(1);
    ENC_B_SetDigitalInput();
    ENC_B_SetHigh();
}

void SetPulsePeriod(uint32_t rpm)
{
    /*
     60000000us--> rpm*2000 xung
     period <-- 1 xung
     period=60000000/(rpm*2000)=30000/rpm (us)
     ==> Half period Hp=15000/rpm
     TAC0_TICK_PER_US=24
     count of Hp=(TAC0_TICK_PER_US*15000/rpm)-1=360000/rpm-1
     */
    TCA0_Stop();
    LED_SetLow();

    if(rpm>0)
    {
        uint32_t freq, tmp=(360000/rpm)-1;

        if(tmp<65536)
        {
            TCA0_PeriodSet((uint16_t) (tmp));
            tmp+=1;
            tmp/=24;
            freq=500000/tmp;

            printf("\r\n\r\nSet speed=%ld rpm", rpm);
            printf(", Freq=%ld Hz", freq);
            TCA0_Start();
            return;
        }

        printf("\r\n\r\nSpeed=%ld rpm is too slow", rpm);
    }

    printf("\r\nPulse generator stop");
}

int main(void)
{
    uint8_t next=0;
    uint32_t newSpeed=1000;

    SYSTEM_Initialize();
    TCA0_OverflowCallbackRegister(TCA0_IsrUserCb);
    printf("\r\nENCODER 2000 PPM EMULATOR ");
    printf("\r\nDefault speed=%ld rpm\r\n", newSpeed);
    SetPulsePeriod(newSpeed);

    while(1)
    {
        if(CntLed<32768)
            LED_SetLow();
        else
            LED_SetHigh();

        while(USART1_IsRxReady())
        {
            uint8_t c=USART1_Read();

            putchar(c);

            switch(next)
            {
                case 0:
                    if((c=='S')||(c=='s'))
                        next=1;
                    break;

                case 1:
                    if(c=='=')
                    {
                        newSpeed=0;
                        next=2;
                    }
                    else
                        next=254;
                    break;

                case 2:
                    if((c>='0')&&(c<='9'))
                    {
                        newSpeed*=10;
                        newSpeed+=(c-'0');
                    }
                    else if(c=='\r')
                    {
                        if(newSpeed<=3000)
                        {
                            SetPulsePeriod(newSpeed);
                            printf("\r\nOk\r\n");
                        }
                        else
                        {
                            printf("\r\nNew speed=%ld rpm > 3000rpm", newSpeed);
                            printf("\r\nError\r\n");
                        }

                        next=0;
                    }
                    else
                        next=254;
                    break;

                case 255:
                default:
                    if(c=='\r')
                    {
                        next=0;
                        printf("\r\nError\r\n");
                    }
                    break;
            }
        }


    }
}