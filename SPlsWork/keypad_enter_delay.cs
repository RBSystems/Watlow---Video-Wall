using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_KEYPAD_ENTER_DELAY
{
    public class UserModuleClass_KEYPAD_ENTER_DELAY : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        Crestron.Logos.SplusObjects.DigitalInput ENTER_IN;
        Crestron.Logos.SplusObjects.DigitalInput ONE;
        Crestron.Logos.SplusObjects.DigitalInput TWO;
        Crestron.Logos.SplusObjects.DigitalInput THREE;
        Crestron.Logos.SplusObjects.DigitalInput FOUR;
        Crestron.Logos.SplusObjects.DigitalInput FIVE;
        Crestron.Logos.SplusObjects.DigitalOutput ENTER_OUT;
        UShortParameter TIME_BTWN_CHARS;
        object ENTER_IN_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 92;
                Functions.Delay (  (int) ( _SplusNVRAM.PAUSE ) ) ; 
                __context__.SourceCodeLine = 93;
                Functions.Pulse ( 200, ENTER_OUT ) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object ONE_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 100;
            if ( Functions.TestForTrue  ( ( ONE  .Value)  ) ) 
                { 
                __context__.SourceCodeLine = 102;
                _SplusNVRAM.PAUSE = (ushort) ( (2 * TIME_BTWN_CHARS  .Value) ) ; 
                } 
            
            else 
                {
                __context__.SourceCodeLine = 104;
                if ( Functions.TestForTrue  ( ( TWO  .Value)  ) ) 
                    { 
                    __context__.SourceCodeLine = 106;
                    _SplusNVRAM.PAUSE = (ushort) ( (4 * TIME_BTWN_CHARS  .Value) ) ; 
                    } 
                
                else 
                    {
                    __context__.SourceCodeLine = 108;
                    if ( Functions.TestForTrue  ( ( THREE  .Value)  ) ) 
                        { 
                        __context__.SourceCodeLine = 110;
                        _SplusNVRAM.PAUSE = (ushort) ( (6 * TIME_BTWN_CHARS  .Value) ) ; 
                        } 
                    
                    else 
                        {
                        __context__.SourceCodeLine = 112;
                        if ( Functions.TestForTrue  ( ( FOUR  .Value)  ) ) 
                            { 
                            __context__.SourceCodeLine = 114;
                            _SplusNVRAM.PAUSE = (ushort) ( (8 * TIME_BTWN_CHARS  .Value) ) ; 
                            } 
                        
                        else 
                            {
                            __context__.SourceCodeLine = 116;
                            if ( Functions.TestForTrue  ( ( FIVE  .Value)  ) ) 
                                { 
                                __context__.SourceCodeLine = 118;
                                _SplusNVRAM.PAUSE = (ushort) ( (10 * TIME_BTWN_CHARS  .Value) ) ; 
                                } 
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    

public override void LogosSplusInitialize()
{
    SocketInfo __socketinfo__ = new SocketInfo( 1, this );
    InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
    _SplusNVRAM = new SplusNVRAM( this );
    
    ENTER_IN = new Crestron.Logos.SplusObjects.DigitalInput( ENTER_IN__DigitalInput__, this );
    m_DigitalInputList.Add( ENTER_IN__DigitalInput__, ENTER_IN );
    
    ONE = new Crestron.Logos.SplusObjects.DigitalInput( ONE__DigitalInput__, this );
    m_DigitalInputList.Add( ONE__DigitalInput__, ONE );
    
    TWO = new Crestron.Logos.SplusObjects.DigitalInput( TWO__DigitalInput__, this );
    m_DigitalInputList.Add( TWO__DigitalInput__, TWO );
    
    THREE = new Crestron.Logos.SplusObjects.DigitalInput( THREE__DigitalInput__, this );
    m_DigitalInputList.Add( THREE__DigitalInput__, THREE );
    
    FOUR = new Crestron.Logos.SplusObjects.DigitalInput( FOUR__DigitalInput__, this );
    m_DigitalInputList.Add( FOUR__DigitalInput__, FOUR );
    
    FIVE = new Crestron.Logos.SplusObjects.DigitalInput( FIVE__DigitalInput__, this );
    m_DigitalInputList.Add( FIVE__DigitalInput__, FIVE );
    
    ENTER_OUT = new Crestron.Logos.SplusObjects.DigitalOutput( ENTER_OUT__DigitalOutput__, this );
    m_DigitalOutputList.Add( ENTER_OUT__DigitalOutput__, ENTER_OUT );
    
    TIME_BTWN_CHARS = new UShortParameter( TIME_BTWN_CHARS__Parameter__, this );
    m_ParameterList.Add( TIME_BTWN_CHARS__Parameter__, TIME_BTWN_CHARS );
    
    
    ENTER_IN.OnDigitalPush.Add( new InputChangeHandlerWrapper( ENTER_IN_OnPush_0, false ) );
    ONE.OnDigitalPush.Add( new InputChangeHandlerWrapper( ONE_OnPush_1, false ) );
    TWO.OnDigitalPush.Add( new InputChangeHandlerWrapper( ONE_OnPush_1, false ) );
    THREE.OnDigitalPush.Add( new InputChangeHandlerWrapper( ONE_OnPush_1, false ) );
    FOUR.OnDigitalPush.Add( new InputChangeHandlerWrapper( ONE_OnPush_1, false ) );
    FIVE.OnDigitalPush.Add( new InputChangeHandlerWrapper( ONE_OnPush_1, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_KEYPAD_ENTER_DELAY ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint ENTER_IN__DigitalInput__ = 0;
const uint ONE__DigitalInput__ = 1;
const uint TWO__DigitalInput__ = 2;
const uint THREE__DigitalInput__ = 3;
const uint FOUR__DigitalInput__ = 4;
const uint FIVE__DigitalInput__ = 5;
const uint ENTER_OUT__DigitalOutput__ = 0;
const uint TIME_BTWN_CHARS__Parameter__ = 10;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    [SplusStructAttribute(0, false, true)]
            public ushort PAUSE = 0;
            
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
