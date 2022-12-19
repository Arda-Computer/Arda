using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Vuplex.WebView;
using Vuplex.WebView.Demos;


public class SpotlightSearch : MonoBehaviour
{
    [SerializeField] GameObject windowPrefab;
	CanvasWebViewPrefab canvasPrefab;
    HardwareKeyboardListener _hardwareKeyboardListener;
    bool activateBool;
    public TMP_Text Text;




    // Start is called before the first frame update
    void Start()
    {
        //start method when pressed
        //  this.gameObject.GetComponent<TMP_InputField>().onSubmit.AddListener(CustomOnSubmit);
        _setupKeyboards();


    }
    

    public void CustomOnSubmit(string msg)
    {

        //if pressed enter specfically
        // if (Input.GetKeyDown(KeyCode.Return)){


            //check if domain extention && doesnt contain any spaces
            if(!msg.Contains(" ") && (msg.Contains(".com") || msg.Contains(".co.uk") || msg.Contains(".org") || msg.Contains(".xyz") || msg.Contains(".ooo") || msg.Contains(".co") || msg.Contains(".ru") || msg.Contains(".uk") || msg.Contains(".in") || msg.Contains(".net") || msg.Contains(".ir")|| msg.Contains(".us")|| msg.Contains(".blog")|| msg.Contains(".de")|| msg.Contains(".cn")) ){


                foreach (GameObject Room in GameObject.FindGameObjectsWithTag("Room"))
                {
                    //Instantiate new window group with startingURL in active room
                    if(Room.GetComponent<RoomState>().isActive){
                        Instantiate(windowPrefab, Room.transform).GetComponentInChildren<CanvasWebViewPrefab>().InitialUrl = msg;
                    }   
                }
            }else{

                //do a google search (non-API)
                foreach (GameObject Room in GameObject.FindGameObjectsWithTag("Room"))
                {
                    if(Room.GetComponent<RoomState>().isActive){
                        Instantiate(windowPrefab, Room.transform).GetComponentInChildren<CanvasWebViewPrefab>().InitialUrl = "https://www.google.com/search?q=" + msg;
                    }   
                }

            }

        // this.gameObject.GetComponent<TMP_InputField>().text = "";
         
        // }

    
        
    }   


public void _setupKeyboards() {

            // Send keys from the hardware (USB or Bluetooth) keyboard to the webview.
            // Use separate KeyDown() and KeyUp() methods if the webview supports
            // it, otherwise just use IWebView.SendKey().
            // https://developer.vuplex.com/webview/IWithKeyDownAndUp
            _hardwareKeyboardListener = GameObject.Find("HardwareKeyboardListener").GetComponent<HardwareKeyboardListener>();
            _hardwareKeyboardListener.KeyDownReceived += (sender, eventArgs) => {
                if (activateBool){
                    if(eventArgs.Value != "Meta" || eventArgs.Value != "Shift" || eventArgs.Value != "Alt" || eventArgs.Value != "Caps"){
                        if(eventArgs.Value == "Enter"){
                            CustomOnSubmit(Text.text);
                            activateBool = false;
                            Text.text = "";
                        }
                        else if(eventArgs.Value == "Backspace"){
                            Text.text = Text.text.Substring(0, Text.text.Length - 1);
                        }else{
                        Text.text += eventArgs.Value;
                        }
                    }
                }

            


            };
        }

    public void activateField(){
        activateBool = true;
    }





}
