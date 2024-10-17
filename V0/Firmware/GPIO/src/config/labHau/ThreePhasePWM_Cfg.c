#include "Motors/ThreePhasePWM.h"

static void SetFreq(uint32_t fpwm)
{

}

static void SetDutyU(uint16_t duty)
{

}

static void SetDutyV(uint16_t duty)
{

}

static void SetDutyW(uint16_t duty)
{

}

static void SetDuty3P(uint16_t dutyU, uint16_t dutyV, uint16_t dutyW)
{

}

threephase_pwm_t Pwm3PCxt={
    .SetFreq=SetFreq,
    .SetDutyU=SetDutyU,
    .SetDutyU=SetDutyV,
    .SetDutyU=SetDutyW,
    .SetDuty3P=SetDuty3P
};
