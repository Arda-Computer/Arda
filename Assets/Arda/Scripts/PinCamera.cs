using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.UI;

public class PinCamera : MonoBehaviour
{
    
    public GameObject CameraFollower;
    public Toggle PinToggle;



    public void PinTheCamera(){
        if (PinToggle.isOn){
            CameraFollower.GetComponent<PositionConstraint>().enabled = false;
        }
        else{
            
            CameraFollower.GetComponent<PositionConstraint>().enabled = true;
        }

    }
}
