using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ForwardButton : MonoBehaviour
{

    public GameObject WindowManager;

    // Start is called before the first frame update
    void Start()
    {
        this.gameObject.GetComponent<Button>().onClick.AddListener(GoForward);
        
    }

    void GoForward(){

        // Debug.Log("forward button pressed");

        //add 1 to index
        WindowManager.GetComponent<WindowManager>().focusedIndex += 1;
        WindowManager.GetComponent<WindowManager>().isANewSite = false; //do not add to list on reload
        WindowManager.GetComponent<WindowManager>().canvasWebview.WebView.GoForward();

    }
}
