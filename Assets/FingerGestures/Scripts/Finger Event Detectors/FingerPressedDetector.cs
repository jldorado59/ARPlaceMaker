using UnityEngine;
using System.Collections;

public class FingerPressedEvent : FingerEvent 
{

}

[AddComponentMenu( "FingerGestures/Finger Events/Finger Pressed Detector" )]
public class FingerPressedDetector : FingerEventDetector<FingerPressedEvent>
{
    public event FingerEventHandler OnFingerPressed;
    public string MessageName = "OnFingerPressed";    
    
    protected override void ProcessFinger( FingerGestures.Finger finger )
    {
        if( finger.IsDown && finger.WasDown)
        {
            FingerPressedEvent e = GetEvent( finger.Index );
            e.Name = MessageName;
            UpdateSelection( e );

            if( OnFingerPressed != null )
                OnFingerPressed( e );

            TrySendMessage( e );
        }
    }
}
