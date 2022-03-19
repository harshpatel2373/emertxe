/*
 * name: harsh dineshkumar patel
 * date: 30/12/2021
 * description:A03 - Implement multiple patterns on LEDs controlled by switches
 */
#include <xc.h>
#include "main.h"
#include "digital_keypad.h"

#pragma config WDTE = OFF

static void init_config(void) {
    /*To keep all LEDS OFF initially*/
    LED_ARRAY1 = OFF;
    
    /*To configure PORTD as output PORT*/
    LED_ARRAY1_DDR = 0x00; 
    
    /* Initializing digital keypad */
    init_digital_keypad();

}

void run_train ( int flag )
{
	/*	
	 *	direction_flag :
	 *    1 = Left to right
	 *	  0 = Right to left
	 *  set_on_flag :
	 *    1 = Start turning Led on
	 *    0 = Start turning Led off
	 *	intially :
	 *	  All led are off
	 * 	  direction_flag = 1
	 *	  set_on_flag = 1
	 */
	static int direction_flag ;
	static	int set_on_flag ;
	if ( flag )
	{
		direction_flag = 0 ;
		set_on_flag  = 1;
		LED_ARRAY1 = 0;
	}
	if ( LED_ARRAY1 == 0 )
	{
		set_on_flag = 1;
		direction_flag = !direction_flag ;
	}
	if( LED_ARRAY1 == 255 )
		set_on_flag = 0;
	if( direction_flag )
		LED_ARRAY1 = (set_on_flag) ? (LED_ARRAY1 << 1) | 1 : LED_ARRAY1 << 1 ;
	else
		LED_ARRAY1 = (set_on_flag) ? (LED_ARRAY1 >> 1) | 0x80 : LED_ARRAY1 >> 1 ;
}

// function t run when SWITCH1 is pressed
void left_right_train ( int flag )
{
	/*	
	 *  set_on_flag :
	 *    1 = Start turning Led on
	 *    0 = Start turning Led off
	 *	intially :
	 *	  All led are off
	 *	  set_on_flag = 1
	 */
	static	int set_on_flag;
	if ( flag )
	{
		set_on_flag  = 1;
		LED_ARRAY1 = 0;
	}
	if ( LED_ARRAY1 == 0 )
		set_on_flag = 1;
	if( LED_ARRAY1 == 255 )
		set_on_flag = 0;
	LED_ARRAY1 = (set_on_flag) ? (LED_ARRAY1 << 1) | 1 : LED_ARRAY1 << 1 ;
}

// function t run when SWITCH1 is pressed
void alternate_nibble ( int flag )
{
	if ( flag )
		LED_ARRAY1 = 0x0F;

	LED_ARRAY1 = ~LED_ARRAY1 ; //toggling led
}

// function t run when SWITCH1 is pressed
void alernate_led ( int flag )
{
	if ( flag )
		LED_ARRAY1 = 0xAA;

	LED_ARRAY1 = ~LED_ARRAY1 ; //toggling led
}

void main(void)
{
	init_config();
	int flag = 1;
    int mode = 1;
	unsigned char key  ;
	unsigned char cur_key = SW1 ;
	unsigned int wait = 50000 ;
	while (1)
	{
        key = read_digital_keypad(STATE);
		
		if ( key != ALL_RELEASED && cur_key != key )
		{
			
			cur_key = key ;
			flag = 1 ;
			wait = 50000 ;
		}
		if ( !wait-- )
		{
            
            
            wait += 50000;
			switch( cur_key )
			{ 
				case SW1 :
					run_train(flag);
					break;
				case SW2 :
					left_right_train(flag);
					break;
				case SW3 :
					alernate_led(flag);
					break;
				case SW4 :
					alternate_nibble(flag);
					break;
				default :
					LED_ARRAY1 = OFF;
					break;
			}
            
			flag = 0 ;
		}
	}
}