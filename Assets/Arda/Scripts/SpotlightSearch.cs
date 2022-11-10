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

    async void CustomOnSubmit(string msg)
    {

        //if pressed enter specfically
        if (Input.GetKeyDown(KeyCode.Return)){

            //check if domain extention && doesnt contain any spaces
            if(!msg.Contains(" ") && (msg.Contains(".com") || msg.Contains(".co.uk") || msg.Contains(".org") || msg.Contains(".xyz") || msg.Contains(".ooo") || msg.Contains(".co") || msg.Contains(".ru") || msg.Contains(".uk") || msg.Contains(".in") || msg.Contains(".net") || msg.Contains(".ir")|| msg.Contains(".us")|| msg.Contains(".blog")|| msg.Contains(".de")|| msg.Contains(".cn")) ){
                canvasPrefab = Instantiate(windowPrefab).GetComponentInChildren<CanvasWebViewPrefab>();
                await canvasPrefab.WaitUntilInitialized();
                canvasPrefab.WebView.LoadUrl(msg);
            }else{
                //do a google search (non-API)
                canvasPrefab = Instantiate(windowPrefab).GetComponentInChildren<CanvasWebViewPrefab>();
                await canvasPrefab.WaitUntilInitialized();
                canvasPrefab.WebView.LoadUrl("https://www.google.com/search?q=" + msg);

            }
        }
    
        
    }   

}
