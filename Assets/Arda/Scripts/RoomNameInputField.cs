using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView.Demos;
using TMPro;

public class RoomNameInputField : MonoBehaviour
{

    HardwareKeyboardListener _hardwareKeyboardListener;
    public AddRoom addRoom;
    bool activateBool;
    public TMP_Text Text;
    public TMP_Text placeholderText;

    // Start is called before the first frame update
    void Start()
    {
        _setupKeyboards();

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
                            addRoom.CreateRoom(Text.text);
                            activateBool = false;
                            placeholderText.gameObject.SetActive(true);
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
        placeholderText.gameObject.SetActive(false);
    }
}
