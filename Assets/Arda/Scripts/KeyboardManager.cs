using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView.Demos;
using Vuplex.WebView;
using TMPro;



public class KeyboardManager : MonoBehaviour
{

    HardwareKeyboardListener _hardwareKeyboardListener;
    public CanvasWebViewPrefab _focusedPrefab; //this is the window that is 'focused' which is to say, its the one that was most recently clicked on (anywhere in the top-level canvas)
    [SerializeField] private PointerManager pointerManager;



    // Start is called before the first frame update
    void Start()
    {

        _setupKeyboards();
        
    }

    // Update is called once per frame
    void Update()
    {
        if(pointerManager.hit.collider != null){
            _focusedPrefab = pointerManager.hit.collider.transform.GetComponentInChildren<CanvasWebViewPrefab>(); //add the CanvasWebViewPrefab in question to be the focused window
        }

        //testing characters
        //  foreach(KeyCode vKey in System.Enum.GetValues(typeof(KeyCode))){
        //      if(Input.GetKey(vKey)){
        //      Debug.Log(vKey);
                 
        //      }
        //  }
        
        
    }
    
     public void _setupKeyboards() {

            // Send keys from the hardware (USB or Bluetooth) keyboard to the webview.
            // Use separate KeyDown() and KeyUp() methods if the webview supports
            // it, otherwise just use IWebView.SendKey().
            // https://developer.vuplex.com/webview/IWithKeyDownAndUp
            _hardwareKeyboardListener = HardwareKeyboardListener.Instantiate();
            _hardwareKeyboardListener.KeyDownReceived += (sender, eventArgs) => {

                if(_focusedPrefab != null){

                    _focusedPrefab.WebView.SendKey(eventArgs.Value);

                }
                


            };
        }
}

