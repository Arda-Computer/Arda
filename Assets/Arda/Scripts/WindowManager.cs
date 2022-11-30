using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class WindowManager : MonoBehaviour
{

    public GameObject BackButton;
    public GameObject ForwardButton;
    public CanvasWebViewPrefab canvasWebview;
    public Texture2D BackTexture;
    public Texture2D ForwardTexture;
    public int focusedIndex = -1;
    public bool isANewSite;
    public bool canGoBack;
    public bool justWentForward;
    public List<byte[]> Imagebytes = new List<byte[]>();
    public bool justWentBack;




    // Start is called before the first frame update
    async void Start()
    {


        //by default, windows are off if room is inactive
        if(this.GetComponentInParent<RoomState>().isActive == false){

            this.gameObject.SetActive(false);

        }else{

        await canvasWebview.WaitUntilInitialized();
        canvasWebview.WebView.UrlChanged += MainWebView_UrlChanged;//if url changes

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
            
            
                

                if(focusedIndex > 0){
                    BackButton.SetActive(true);
                    BackTexture = new Texture2D(10,10);
                    BackTexture.LoadImage(Imagebytes[focusedIndex-1]);
                    BackButton.GetComponent<RawImage>().texture = BackTexture;
                    Debug.Log("display backwindow");
                }else{
                    BackButton.SetActive(false);
                }

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
