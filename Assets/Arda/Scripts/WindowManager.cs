using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;
using UnityEditor;
using Vuplex.WebView.Demos;


public class WindowManager : MonoBehaviour
{

    [SerializeField] GameObject BackButton;
    [SerializeField] GameObject ForwardButton;
    public CanvasWebViewPrefab canvasWebview;
    Texture2D BackTexture;
    Texture2D ForwardTexture;
    public int focusedIndex = -1;
    public bool isANewSite;
    List<byte[]> Imagebytes = new List<byte[]>();
    public bool justWentBack;
    [SerializeField] instantiateWindow InstantiateWindow;



    // Start is called before the first frame update
    async void Start()
    {


        //by default, windows are off if room is inactive
        if(this.GetComponentInParent<RoomState>().isActive == false){

            this.gameObject.SetActive(false);

        }else{

        await canvasWebview.WaitUntilInitialized();
        canvasWebview.WebView.UrlChanged += MainWebView_UrlChanged;//if url changes

        //adblocker
        // #if UNITY_ANDROID && !UNITY_EDITOR
        //     var androidGeckoWebView = canvasWebview.WebView as AndroidGeckoWebView;
        //     AndroidGeckoWebView.EnsureBuiltInExtension(
        //     "resource://android/assets/ublock_origin-1.43.0/", "uBlockOrigin"
        //     );
        // #endif

            /// <summary>
            /// code for New Window on Control Click 
            /// </summary>
            // Receive the message sent by the JavaScript we injected.
            // https://developer.vuplex.com/webview/IWebView#MessageEmitted


            canvasWebview.WebView.MessageEmitted += (sender, eventArgs) => {

                InstantiateWindow.InstantiateAWindow(eventArgs.Value);

            };

            // Add some JavaScript to the page to receive the message.
            canvasWebview.WebView.PageLoadScripts.Add(@"
                if (window.vuplex) {
                    var ctrlString;
                    window.addEventListener('mouseover', function () {
                        var hoveredEl = event.target; // The actual element which was hovered.
                        if (hoveredEl.tagName !== 'A') {
                        return;
                        } // Ignore non links
                        // Do what we want here!
                        // console.log(hoveredEl.href);
                        // whether metaButton is pressed from C#
                        window.vuplex.addEventListener('message', function (event) {
                            ctrlString = event.data;
                        });
                        hoveredEl.onclick = function () { // on click of element
                            if (ctrlString == 'true') { // check if meta key is down
                                // console.log(hoveredEl.href);
                                window.vuplex.postMessage(hoveredEl.href); // send back to C#
                                return false; // disable click
                            } else {
                                return true;
                            }
                        };
                    });
                }
                ");

            //print js console logs
            // canvasWebview.WebView.ConsoleMessageLogged += (sender, eventArgs) => {
            //     Debug.Log($"Console message logged: [{eventArgs.Level}] {eventArgs.Message}");
            // };

        }


    
    }


    private void Update() {
        
        //Sending MetaKey data to JS
        if(Input.GetKeyDown(KeyCode.LeftCommand)){
            canvasWebview.WebView.PostMessage("true");
        }

        if(Input.GetKeyUp(KeyCode.LeftCommand)){
            canvasWebview.WebView.PostMessage("false");
        }
        
    }



    //if url changes
    public async void MainWebView_UrlChanged(object sender, UrlChangedEventArgs eventArgs) {
        
        this.gameObject.name = canvasWebview.WebView.Url;

            if(isANewSite){//do not add to list on initial reload (switch)

                await canvasWebview.WebView.WaitForNextPageLoadToFinish();
                focusedIndex += 1;

                if(justWentBack){ //switch to INSERT to list and remove forward of index

                    Imagebytes.Insert(focusedIndex, await canvasWebview.WebView.CaptureScreenshot());
                    Imagebytes.RemoveRange(focusedIndex+1, Imagebytes.Count-(focusedIndex+1));
                    justWentBack = false;

                }else{

                    Imagebytes.Add(await canvasWebview.WebView.CaptureScreenshot());

                    // string result = "List contents: ";
                    //         for(int i = 0; i < Imagebytes.Count; i++)
                    //         {
                    //             result += "P O S I T I O N: " + Imagebytes.IndexOf(Imagebytes[i]).ToString();
                    //         }
                    // Debug.Log(result);

                }

            }
        
        
            
            //if there exists a back, activate backButton and display the prev screenshot
            if(focusedIndex > 0){
                BackButton.SetActive(true);
                BackTexture = new Texture2D(10,10);
                BackTexture.LoadImage(Imagebytes[focusedIndex-1]);
                BackButton.GetComponent<RawImage>().texture = BackTexture;
            }else{
                BackButton.SetActive(false);
            }

            //if there exists a forward (have previously gone back)
            if(Imagebytes.Count-(focusedIndex+1) > 0){

                ForwardButton.SetActive(true);
                ForwardTexture = new Texture2D(10,10);
                ForwardTexture.LoadImage(Imagebytes[focusedIndex+1]);
                ForwardButton.GetComponent<RawImage>().texture = ForwardTexture;


            }else{
                ForwardButton.SetActive(false);
            }

        

        isANewSite = true;

        

        
    }


        


}
