using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class PositionManager : MonoBehaviour
{
    // public GameObject Window;
    // public GroupManager windowGroup;
    public string currentURL;
    public byte[] currentImagebytes;
    public int savedPos;
    public string savedURL;
    public bool isPreview;
    public GameObject PreviewButton;
    public CanvasWebViewPrefab CanvasWebViewPrefab;

    async void Start() {

        if(isPreview){
            PreviewButton.SetActive(true);
            CanvasWebViewPrefab.gameObject.SetActive(false);
            PreviewButton.GetComponent<Button>().onClick.AddListener(Convert);

        }else{
            PreviewButton.SetActive(false);
            CanvasWebViewPrefab.gameObject.SetActive(true);
            await CanvasWebViewPrefab.WaitUntilInitialized(); //load before doing anything
            CanvasWebViewPrefab.WebView.UrlChanged += MainWebView_UrlChanged;//if url changes
        }

    }





    //if url changes
       public async void MainWebView_UrlChanged(object sender, UrlChangedEventArgs eventArgs) {

            //set variables (image, etc)
            currentURL = CanvasWebViewPrefab.WebView.Url;
            currentImagebytes = await CanvasWebViewPrefab.WebView.CaptureScreenshot();
            this.gameObject.transform.parent.GetComponent<GroupManager>().AddToList(currentURL, currentImagebytes);
                
            
            
        }

        async void Convert(){

            // posOfObject = this.gameObject.transform.parent.GetComponent<GroupManager>().focusedPos;

            PreviewButton.SetActive(false);
            CanvasWebViewPrefab.gameObject.SetActive(true);
            await CanvasWebViewPrefab.WaitUntilInitialized(); //load before doing anything
            CanvasWebViewPrefab.WebView.LoadUrl(this.gameObject.transform.parent.GetComponent<GroupManager>().lastURL);
            CanvasWebViewPrefab.WebView.UrlChanged += MainWebView_UrlChanged;//if url changes

            this.gameObject.transform.parent.GetComponent<GroupManager>().Display(savedPos);

        }


        
}
