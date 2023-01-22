using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction.Input;
using CurvedUI;
using UnityEngine.UI;
using UnityEngine.XR;
using System.IO;



public class PointerManager : MonoBehaviour
{

    //customRay
    #pragma warning disable 0649
        [SerializeField]
        CurvedUISettings mySettings;
        [SerializeField]
        Transform pivot;
        [SerializeField]
        float sensitivity = 0.1f;
        Vector2 lastMouse;
        // Vector3 lastMouse;
        [SerializeField]
        GameObject MouseController;
    #pragma warning restore 0649    


    //customRay laser
    #pragma warning disable 0649
        [SerializeField]
        Transform LaserBeamTransform;
        [SerializeField]
        Transform LaserBeamDot;
        [SerializeField]
        bool hideWhenNotAimingAtCanvas = false;
    #pragma warning restore 0649    


    public HandRef rightHandReference;
    public GameObject customRaycastGO;
    public GameObject handPointer;
    public PointerInputToggle toggle;
    public GameObject HandGO; 
    public GameObject LaserBeam;
    public GameObject RightController;
    public GameObject CursorCameraFollower;
    bool inputBoolChanged;
    public RaycastHit hit;


    //eyetracking
    public GameObject arrow;
    OVREyeGaze eyeGaze;
    Quaternion eyeQuaternion;

    public Toggle EyeToggle;
    public Toggle HandToggle;
    public Toggle MouseToggle;
    public Toggle CursorToggle;
    public Toggle LaserToggle;
    public bool rightAltBool;
    public Button ResetButton;
    public Button DebugButton;





    // Start is called before the first frame update
    void Start()
    {

        XRSettings.eyeTextureResolutionScale = 1.5f;

        lastMouse = CurvedUIInputModule.MousePosition;
        // eyeGaze = GetComponent<OVREyeGaze>();
        
        if (Application.isEditor)
        {
            MouseToggle.isOn = true;
        }else{
            // EyeToggle.isOn = true;  //removed for Quest 2
            HandToggle.isOn = true;
            Debug.Log("Hands Activated");
            
        }


        //create saves dir if not exist
        if(!Directory.Exists(Path.Combine(Application.persistentDataPath, "saves"))){
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "saves"));
            Debug.Log("creating folder: " + Path.Combine(Application.persistentDataPath, "saves"));
        }




        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.RightAlt))
        {

            rightAltBool = true;

        }else {
            rightAltBool = false;
        }




        // if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha0))
        // {

        //     ResetCursorPosition();

        // }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha1))
        {

            EyeToggle.isOn = !EyeToggle.isOn;

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha2))
        {

            HandToggle.isOn = !HandToggle.isOn;

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha3))
        {

            MouseToggle.isOn = !MouseToggle.isOn;

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha4))
        {

            CursorToggle.isOn = !CursorToggle.isOn;

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha5))
        {

            LaserToggle.isOn = !LaserToggle.isOn;

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha6))
        {
            DebugButton.Select();
        }



        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.Alpha7))
        {

            ResetButton.Select();

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.RightArrow))
        {

            eyeQuaternion = new Quaternion(eyeQuaternion.x + 0.001f ,eyeQuaternion.y,eyeQuaternion.z, eyeQuaternion.w);
            Debug.Log(eyeQuaternion);

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.UpArrow))
        {

            eyeQuaternion = new Quaternion(eyeQuaternion.x ,eyeQuaternion.y + 0.001f,eyeQuaternion.z, eyeQuaternion.w);
            Debug.Log(eyeQuaternion);

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.LeftArrow))
        {

            eyeQuaternion = new Quaternion(eyeQuaternion.x - 0.001f ,eyeQuaternion.y,eyeQuaternion.z, eyeQuaternion.w);
            Debug.Log(eyeQuaternion);

        }

        if(Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.DownArrow))
        {

            eyeQuaternion = new Quaternion(eyeQuaternion.x ,eyeQuaternion.y - 0.001f,eyeQuaternion.z, eyeQuaternion.w);
            Debug.Log(eyeQuaternion);

        }






        /// <summary>
        /// A simple script to make the pointer follow mouse movement and pass the control ray to canvsa
        /// </summary>

        //pass ray and button state to CurvedUIInputModule
        // var myRay = new Ray(MouseController.transform.position, MouseController.transform.forward);
        var myRay = new Ray(customRaycastGO.transform.position, customRaycastGO.transform.forward);
        CurvedUIInputModule.CustomControllerRay = myRay;
            



        /// <summary>
        /// This class contains code that controls the visuals (only!) of the laser pointer.
        /// </summary>

            //get direction of the controller
           // Ray myRay = new Ray(this.transform.position, this.transform.forward);


            //make laser beam hit stuff it points at.
            
            if(LaserBeamTransform && LaserBeamDot) {
                //change the laser's length depending on where it hits
                float length = 10;

                //RaycastHit hit;
                if (Physics.Raycast(myRay, out hit, length, CurvedUIInputModule.Instance.RaycastLayerMask))
                {

                    // Debug.Log(hit.collider.gameObject.tag);

                    //get focusedGO
                    if(hit.collider.gameObject && Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.W)){

                        hit.collider.gameObject.BroadcastMessage("DestroyThisGO");

                    }

                    //get focusedGO
                    // if(hit.collider.gameObject != null && CurvedUIInputModule.CustomControllerButtonState == true){
                    //     hitGO = hit.collider.gameObject; //set hitGO to the gameobject that was hit
                    // }
                    
                    // length = Vector3.Distance(hit.point, customRaycastGO.transform.position);

                    //Find if we hit a canvas
                    CurvedUISettings cuiSettings = hit.collider.GetComponentInParent<CurvedUISettings>();
                    if (cuiSettings != null)
                    {
                        //find if there are any canvas objects we're pointing at. we only want transforms with graphics to block the pointer. (that are drawn by canvas => depth not -1)
                        int selectablesUnderPointer = cuiSettings.GetObjectsUnderPointer().FindAll(x => x != null && x.GetComponent<Graphic>() != null && x.GetComponent<Graphic>().depth != -1).Count;

                        // length = selectablesUnderPointer == 0 ? 10000 : Vector3.Distance(hit.point, customRaycastGO.transform.position);
                    }
                    else if (hideWhenNotAimingAtCanvas) length = 0;
                }
                else if (hideWhenNotAimingAtCanvas) length = 0;


                //set the leangth of the beam
                LaserBeamTransform.localScale = LaserBeamTransform.localScale.ModifyZ(length);
            }


        // Debug.Log(eyeGaze.Confidence); //removed for Quest 2

        if(EyeToggle.isOn){
            // CurvedUIInputModule.CustomControllerButtonState = Input.GetKeyDown(KeyCode.RightAlt); //causes error
            CurvedUIInputModule.CustomControllerButtonState = rightAltBool;
            // customRaycastGO.transform.SetParent(CursorCameraFollower.transform); //causes error
            customRaycastGO.transform.rotation = new Quaternion(eyeGaze.transform.rotation.x + eyeQuaternion.x, eyeGaze.transform.rotation.y + eyeQuaternion.y, eyeGaze.transform.rotation.z + eyeQuaternion.z, eyeGaze.transform.rotation.w + eyeQuaternion.w);

        }


        if(HandToggle.isOn){
            if (OVRPlugin.GetHandTrackingEnabled()){
                ResetCursorPosition();
                customRaycastGO.transform.localPosition = Vector3.zero;
                customRaycastGO.transform.localEulerAngles = Vector3.zero;
                CurvedUIInputModule.CustomControllerButtonState = rightHandReference.GetIndexFingerIsPinching();
                HandGO.SetActive(true);
                customRaycastGO.transform.SetParent(handPointer.transform);

            }else{
                ResetCursorPosition();
                CurvedUIInputModule.CustomControllerButtonState = OVRInput.Get(OVRInput.Button.One);
                customRaycastGO.transform.SetParent(RightController.transform);
            }
        }



        if(MouseToggle.isOn){
            CurvedUIInputModule.CustomControllerButtonState = Input.GetMouseButton(0);
            customRaycastGO.transform.SetParent(CursorCameraFollower.transform);

            //find mouse delta
            Vector3 mouseDelta = CurvedUIInputModule.MousePosition - lastMouse;
            lastMouse = CurvedUIInputModule.MousePosition;

            //adjust transform angle
            pivot.localEulerAngles += new Vector3(-mouseDelta.y, mouseDelta.x, 0) * sensitivity;
        
        }
            
                
        LaserBeam.SetActive(LaserToggle.isOn);
        LaserBeamDot.gameObject.SetActive(!CursorToggle.isOn);

            
        
    }


    public void ResetCursorPosition(){
        customRaycastGO.transform.localPosition = Vector3.zero;
        customRaycastGO.transform.localEulerAngles = Vector3.zero;

        // LaserBeamDot.transform.localPosition = Vector3.zero;
        LaserBeamDot.transform.localEulerAngles = Vector3.zero;
    }



}
