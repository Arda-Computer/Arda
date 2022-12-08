using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Vuplex.WebView;

public class SpotlightSearch : MonoBehaviour
{
    [SerializeField] GameObject windowPrefab;
	CanvasWebViewPrefab canvasPrefab;


    // Start is called before the first frame update
    void Start()
    {
        //start method when pressed
         this.gameObject.GetComponent<TMP_InputField>().onSubmit.AddListener(CustomOnSubmit);

    }
    

    public void CustomOnSubmit(string msg)
    {

        //if pressed enter specfically
        if (Input.GetKeyDown(KeyCode.Return)){


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

        this.gameObject.GetComponent<TMP_InputField>().text = "";
         
        }

    
        
    }   

}
