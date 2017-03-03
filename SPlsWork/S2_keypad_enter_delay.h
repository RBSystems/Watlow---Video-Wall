#ifndef __S2_KEYPAD_ENTER_DELAY_H__
#define __S2_KEYPAD_ENTER_DELAY_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_keypad_enter_delay_ENTER_IN_DIG_INPUT 0
#define __S2_keypad_enter_delay_ONE_DIG_INPUT 1
#define __S2_keypad_enter_delay_TWO_DIG_INPUT 2
#define __S2_keypad_enter_delay_THREE_DIG_INPUT 3
#define __S2_keypad_enter_delay_FOUR_DIG_INPUT 4
#define __S2_keypad_enter_delay_FIVE_DIG_INPUT 5


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_keypad_enter_delay_ENTER_OUT_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_keypad_enter_delay_TIME_BTWN_CHARS_INTEGER_PARAMETER 10
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_keypad_enter_delay )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_keypad_enter_delay )
{
   unsigned short __PAUSE;
};



#endif //__S2_KEYPAD_ENTER_DELAY_H__

