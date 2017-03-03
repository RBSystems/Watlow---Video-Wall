#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_keypad_enter_delay.h"

FUNCTION_MAIN( S2_keypad_enter_delay );
EVENT_HANDLER( S2_keypad_enter_delay );
DEFINE_ENTRYPOINT( S2_keypad_enter_delay );

DEFINE_INDEPENDENT_EVENTHANDLER( S2_keypad_enter_delay, 00000 /*enter_in*/ )

    {
    /* Begin local function variable declarations */
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_keypad_enter_delay ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 92 );
    Delay ( Nvram->S2_keypad_enter_delay.__PAUSE) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 93 );
    Pulse ( INSTANCE_PTR( S2_keypad_enter_delay ) , 200, __S2_keypad_enter_delay_ENTER_OUT_DIG_OUTPUT ) ; 
    
    S2_keypad_enter_delay_Exit__Event_0:
    /* Begin Free local function variables */
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_keypad_enter_delay, 00001 /*one*/ )

    {
    /* Begin local function variable declarations */
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_keypad_enter_delay ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 100 );
    if ( GetDigitalInput( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_ONE_DIG_INPUT )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 102 );
        Nvram->S2_keypad_enter_delay.__PAUSE = (2 * GetIntegerParameter( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_TIME_BTWN_CHARS_INTEGER_PARAMETER ) ); 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 104 );
        if ( GetDigitalInput( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_TWO_DIG_INPUT )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 106 );
            Nvram->S2_keypad_enter_delay.__PAUSE = (4 * GetIntegerParameter( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_TIME_BTWN_CHARS_INTEGER_PARAMETER ) ); 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 108 );
            if ( GetDigitalInput( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_THREE_DIG_INPUT )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 110 );
                Nvram->S2_keypad_enter_delay.__PAUSE = (6 * GetIntegerParameter( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_TIME_BTWN_CHARS_INTEGER_PARAMETER ) ); 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 112 );
                if ( GetDigitalInput( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_FOUR_DIG_INPUT )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 114 );
                    Nvram->S2_keypad_enter_delay.__PAUSE = (8 * GetIntegerParameter( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_TIME_BTWN_CHARS_INTEGER_PARAMETER ) ); 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 116 );
                    if ( GetDigitalInput( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_FIVE_DIG_INPUT )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_keypad_enter_delay ), 118 );
                        Nvram->S2_keypad_enter_delay.__PAUSE = (10 * GetIntegerParameter( INSTANCE_PTR( S2_keypad_enter_delay ), __S2_keypad_enter_delay_TIME_BTWN_CHARS_INTEGER_PARAMETER ) ); 
                        } 
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_keypad_enter_delay_Exit__Event_1:
    /* Begin Free local function variables */
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}


/********************************************************************************
  Constructor
********************************************************************************/

/********************************************************************************
  Destructor
********************************************************************************/

/********************************************************************************
  static void ProcessDigitalEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessDigitalEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_keypad_enter_delay_ENTER_IN_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_keypad_enter_delay, 00000 /*enter_in*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
                
            }
            break;
            
        case __S2_keypad_enter_delay_ONE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_keypad_enter_delay, 00001 /*one*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
                
            }
            break;
            
        case __S2_keypad_enter_delay_TWO_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_keypad_enter_delay, 00001 /*two*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
                
            }
            break;
            
        case __S2_keypad_enter_delay_THREE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_keypad_enter_delay, 00001 /*three*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
                
            }
            break;
            
        case __S2_keypad_enter_delay_FOUR_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_keypad_enter_delay, 00001 /*four*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
                
            }
            break;
            
        case __S2_keypad_enter_delay_FIVE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_keypad_enter_delay, 00001 /*five*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessAnalogEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessAnalogEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_keypad_enter_delay ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketConnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketConnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_keypad_enter_delay ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketStatusEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketStatusEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_keypad_enter_delay ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_keypad_enter_delay )
********************************************************************************/
EVENT_HANDLER( S2_keypad_enter_delay )
    {
    SAVE_GLOBAL_POINTERS ;
    switch ( Signal->Type )
        {
        case e_SIGNAL_TYPE_DIGITAL :
            ProcessDigitalEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_ANALOG :
            ProcessAnalogEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STRING :
            ProcessStringEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_CONNECT :
            ProcessSocketConnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_DISCONNECT :
            ProcessSocketDisconnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_RECEIVE :
            ProcessSocketReceiveEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STATUS :
            ProcessSocketStatusEvent( Signal );
            break ;
        }
        
    RESTORE_GLOBAL_POINTERS ;
    
    }
    
/********************************************************************************
  FUNCTION_MAIN( S2_keypad_enter_delay )
********************************************************************************/
FUNCTION_MAIN( S2_keypad_enter_delay )
{
    SAVE_GLOBAL_POINTERS ;
    
    SET_INSTANCE_POINTER ( S2_keypad_enter_delay );
    
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_keypad_enter_delay, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    
    S2_keypad_enter_delay_Exit__MAIN:
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
