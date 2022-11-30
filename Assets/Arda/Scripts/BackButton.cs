using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BackButton : MonoBehaviour
{


    public GameObject WindowManager;


    // Start is called before the first frame update
    void Start()
    {
        this.gameObject.GetComponent<Button>().onClick.AddListener(GoBack);
        
    }


    void GoBack(){

        // Debug.Log("back button pressed");

        //
        WindowManager.GetComponent<WindowManager>().focusedIndex -= 1;
        WindowManager.GetComponent<WindowManager>().isANewSite = false; //do not add to list on reload
        WindowManager.GetComponent<WindowManager>().justWentBack = true; //insert imagebyte as opposed to add
        WindowManager.GetComponent<WindowManager>().canvasWebview.WebView.GoBack();

    }


}
