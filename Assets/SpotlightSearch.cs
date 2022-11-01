using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Vuplex.WebView;

public class SpotlightSearch : MonoBehaviour
{
    [SerializeField] GameObject windowPrefab;
	CanvasWebViewPrefab canvasPrefab; 


    // Start is called before the first frame update
    void Start()
    {
        //this.gameObject.GetComponent<TMP_InputField>().OnSubmit(h);
 
    }

    // public void CustomOnSubmit()
    //     {
    //     if (Input.GetKeyDown(KeyCode.Return))
    //     Debug.Log("Submit");
    //     else
    //     Debug.Log("EndEdit no enter");
    //     }   


    // async public void sayChatMessage(string msg){
    //     if (Input.GetKeyDown(KeyCode.Return)){
    //     Debug.Log("Submit");
    //     canvasPrefab = Instantiate(windowPrefab).GetComponentInChildren<CanvasWebViewPrefab>();
    //     await canvasPrefab.WaitUntilInitialized();
    //     canvasPrefab.WebView.LoadUrl(msg);
    //     }
    //     else{
    //     Debug.Log("EndEdit no enter");
    //     }

    // }


    // void OnSubmit(){

    //     Debug.Log("ONSUMBIT");

    // }
    // void SubmitName()
    // {
    //     //Debug.Log(arg0);
    //     Debug.Log("ENTER!");
    // }


    // async public void CustomOnSubmit()
    // {
    //     if (Input.GetKeyDown(KeyCode.Return)){
    //     Debug.Log("Submit");
    //     canvasPrefab = Instantiate(windowPrefab).GetComponentInChildren<CanvasWebViewPrefab>();
    //     await canvasPrefab.WaitUntilInitialized();
    //     canvasPrefab.WebView.LoadUrl(this.gameObject.name);
    //     }
    //     else{
    //     Debug.Log("EndEdit no enter");
    //     }
    // }
}
