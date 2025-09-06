/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RB4 aliases
#define PWM_WL_TRIS                 TRISBbits.TRISB4
#define PWM_WL_LAT                  LATBbits.LATB4
#define PWM_WL_PORT                 PORTBbits.RB4
#define PWM_WL_WPU                  WPUBbits.WPUB4
#define PWM_WL_OD                   ODCONBbits.ODCB4
#define PWM_WL_ANS                  ANSELBbits.ANSB4
#define PWM_WL_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define PWM_WL_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define PWM_WL_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define PWM_WL_GetValue()           PORTBbits.RB4
#define PWM_WL_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define PWM_WL_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define PWM_WL_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define PWM_WL_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define PWM_WL_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define PWM_WL_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define PWM_WL_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define PWM_WL_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define PWM_UH_TRIS                 TRISBbits.TRISB5
#define PWM_UH_LAT                  LATBbits.LATB5
#define PWM_UH_PORT                 PORTBbits.RB5
#define PWM_UH_WPU                  WPUBbits.WPUB5
#define PWM_UH_OD                   ODCONBbits.ODCB5
#define PWM_UH_ANS                  ANSELBbits.ANSB5
#define PWM_UH_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define PWM_UH_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define PWM_UH_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define PWM_UH_GetValue()           PORTBbits.RB5
#define PWM_UH_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define PWM_UH_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define PWM_UH_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define PWM_UH_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define PWM_UH_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define PWM_UH_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define PWM_UH_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define PWM_UH_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define PWM_VL_TRIS                 TRISBbits.TRISB6
#define PWM_VL_LAT                  LATBbits.LATB6
#define PWM_VL_PORT                 PORTBbits.RB6
#define PWM_VL_WPU                  WPUBbits.WPUB6
#define PWM_VL_OD                   ODCONBbits.ODCB6
#define PWM_VL_ANS                  ANSELBbits.ANSB6
#define PWM_VL_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define PWM_VL_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define PWM_VL_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define PWM_VL_GetValue()           PORTBbits.RB6
#define PWM_VL_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define PWM_VL_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define PWM_VL_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define PWM_VL_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define PWM_VL_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define PWM_VL_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define PWM_VL_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define PWM_VL_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define PWM_VH_TRIS                 TRISBbits.TRISB7
#define PWM_VH_LAT                  LATBbits.LATB7
#define PWM_VH_PORT                 PORTBbits.RB7
#define PWM_VH_WPU                  WPUBbits.WPUB7
#define PWM_VH_OD                   ODCONBbits.ODCB7
#define PWM_VH_ANS                  ANSELBbits.ANSB7
#define PWM_VH_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define PWM_VH_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define PWM_VH_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define PWM_VH_GetValue()           PORTBbits.RB7
#define PWM_VH_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define PWM_VH_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define PWM_VH_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define PWM_VH_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define PWM_VH_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define PWM_VH_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define PWM_VH_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define PWM_VH_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC2 aliases
#define LED0_TRIS                 TRISCbits.TRISC2
#define LED0_LAT                  LATCbits.LATC2
#define LED0_PORT                 PORTCbits.RC2
#define LED0_WPU                  WPUCbits.WPUC2
#define LED0_OD                   ODCONCbits.ODCC2
#define LED0_ANS                  ANSELCbits.ANSC2
#define LED0_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED0_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED0_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED0_GetValue()           PORTCbits.RC2
#define LED0_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED0_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define BTN_TRIS                 TRISCbits.TRISC3
#define BTN_LAT                  LATCbits.LATC3
#define BTN_PORT                 PORTCbits.RC3
#define BTN_WPU                  WPUCbits.WPUC3
#define BTN_OD                   ODCONCbits.ODCC3
#define BTN_ANS                  ANSELCbits.ANSC3
#define BTN_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define BTN_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define BTN_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define BTN_GetValue()           PORTCbits.RC3
#define BTN_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define BTN_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define BTN_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define BTN_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define BTN_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define BTN_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define BTN_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define BTN_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define DBG_TX_TRIS                 TRISCbits.TRISC4
#define DBG_TX_LAT                  LATCbits.LATC4
#define DBG_TX_PORT                 PORTCbits.RC4
#define DBG_TX_WPU                  WPUCbits.WPUC4
#define DBG_TX_OD                   ODCONCbits.ODCC4
#define DBG_TX_ANS                  ANSELCbits.ANSC4
#define DBG_TX_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define DBG_TX_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define DBG_TX_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define DBG_TX_GetValue()           PORTCbits.RC4
#define DBG_TX_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define DBG_TX_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define DBG_TX_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define DBG_TX_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define DBG_TX_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define DBG_TX_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define DBG_TX_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define DBG_TX_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
// get/set IO_RC5 aliases
#define DBG_RX_TRIS                 TRISCbits.TRISC5
#define DBG_RX_LAT                  LATCbits.LATC5
#define DBG_RX_PORT                 PORTCbits.RC5
#define DBG_RX_WPU                  WPUCbits.WPUC5
#define DBG_RX_OD                   ODCONCbits.ODCC5
#define DBG_RX_ANS                  ANSELCbits.ANSC5
#define DBG_RX_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define DBG_RX_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define DBG_RX_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define DBG_RX_GetValue()           PORTCbits.RC5
#define DBG_RX_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define DBG_RX_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define DBG_RX_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define DBG_RX_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define DBG_RX_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define DBG_RX_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define DBG_RX_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define DBG_RX_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
// get/set IO_RC6 aliases
#define PWM_UL_TRIS                 TRISCbits.TRISC6
#define PWM_UL_LAT                  LATCbits.LATC6
#define PWM_UL_PORT                 PORTCbits.RC6
#define PWM_UL_WPU                  WPUCbits.WPUC6
#define PWM_UL_OD                   ODCONCbits.ODCC6
#define PWM_UL_ANS                  ANSELCbits.ANSC6
#define PWM_UL_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define PWM_UL_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define PWM_UL_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define PWM_UL_GetValue()           PORTCbits.RC6
#define PWM_UL_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define PWM_UL_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define PWM_UL_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define PWM_UL_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define PWM_UL_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define PWM_UL_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define PWM_UL_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define PWM_UL_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
#define PWM_WH_TRIS                 TRISCbits.TRISC7
#define PWM_WH_LAT                  LATCbits.LATC7
#define PWM_WH_PORT                 PORTCbits.RC7
#define PWM_WH_WPU                  WPUCbits.WPUC7
#define PWM_WH_OD                   ODCONCbits.ODCC7
#define PWM_WH_ANS                  ANSELCbits.ANSC7
#define PWM_WH_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define PWM_WH_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define PWM_WH_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define PWM_WH_GetValue()           PORTCbits.RC7
#define PWM_WH_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define PWM_WH_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define PWM_WH_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define PWM_WH_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define PWM_WH_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define PWM_WH_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define PWM_WH_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define PWM_WH_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/