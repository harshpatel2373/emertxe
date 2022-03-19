/*
 * name : harsh dineshkumar patel
 * date : 19/01/2022
 * description : A06 - Implement a point brightness control
 */

#include <xc.h>
#include "timers.h"
#include "digital_keypad.h"


#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
extern int flag;

void init_config(void) {
    TRISD = 0;
    PORTD = 0;
    init_digital_keypad();
    init_timer0();
    
    GIE = 1;
    
}


void main(void) {
    init_config();
    static unsigned long int period = 100, loop_counter = 0, wait = 0, duty_cycle = 10;
    unsigned char key;
    
    while (1) 
    {
        /*checking if timer 0 interupt flag is 0*/
        if (TMR0IE == 0)
            duty_cycle = 10;
        
        /*reading key pressed*/
        key = read_digital_keypad(LEVEL);
        
        if (wait-- == 0)
        {

            wait = 1000;

            if (key == SW1)
            {
                /*changing duty cycle to 100 on key press*/
                  duty_cycle=100;
                  
                  TMR0IE = 1;
                  
            }
            
        }
        
        if (loop_counter < duty_cycle)
        {
            RD0 = 1;
        }
        else if (loop_counter > duty_cycle)
        {
            RD0 = 0;
        }
        if(loop_counter++ == period)
        {
            loop_counter = 0;
        }
        
    }
}
