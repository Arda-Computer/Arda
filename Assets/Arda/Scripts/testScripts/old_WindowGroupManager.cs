using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class old_WindowGroupManager : MonoBehaviour
{

    public GameObject StartingWindow;
    public GameObject focusedWindow;
    public GameObject windowPrefab;
    public string focusedURL;
    public byte[] focusedImagebytes;
    public string startingURL;
    public string newURL;
    public byte[] newImagebytes;
    public Texture2D texture1;
    public int focusedIndex;
    public int positionToDisplay;


    public Order newObject;
    
    public List<Order> orders = new List<Order>();

    public class Order {

        public string URL { get; set; }
        public byte[] Imagebytes { get; set; }

        
            public Order(string URL, byte[] Imagebytes){

                this.URL = URL;
                this.Imagebytes = Imagebytes;

            }
    }



    // private void Awake() {

    //     if(this.GetComponentInParent<RoomState>().isActive == false){

    //         this.gameObject.SetActive(false);

    //     }
        
    // }


    // Start is called before the first frame update
    public async void Start()
    {

        if(this.GetComponentInParent<RoomState>().isActive == false){

            this.gameObject.SetActive(false);

        }else{
    
        
            await StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().WaitUntilInitialized();
            StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.LoadUrl(startingURL);
            StartingWindow.GetComponent<old_PositionManager2>().urlChangeCount = 2;
            

            ChangeFocusTo(0, StartingWindow);
        }


    }




    public void ChangeFocusTo(int focusIndex, GameObject focusWindow){

        focusedWindow = focusWindow;
        focusedIndex = focusIndex;
        focusedWindow.transform.Find("Tag").gameObject.SetActive(true);

        Debug.Log("focusedWindow = " + focusedWindow);
        Debug.Log("focusedIndex = " + focusedIndex);



        focusedWindow.transform.Find("PreviewButton").gameObject.SetActive(false);
        focusedWindow.transform.Find("CanvasWebViewPrefab").gameObject.SetActive(true);
        focusedWindow.transform.Find("Tag").gameObject.SetActive(true);


        if (orders.Count > 0){
        focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.LoadUrl(orders[focusedIndex].URL);
        }


        focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.UrlChanged += MainWebView_UrlChanged;//if url changes


        


    }


        //if url changes
        public async void MainWebView_UrlChanged(object sender, UrlChangedEventArgs eventArgs) {
            


            //set variables (image, etc)
            if(focusedWindow.GetComponent<old_PositionManager2>().urlChangeCount > 1){
                await focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.WaitForNextPageLoadToFinish();
                newURL = focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.Url;
                newImagebytes = await focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.CaptureScreenshot();
                focusedWindow.gameObject.name = newURL; //change name of GO to new url
                AddToList(newURL, newImagebytes);
                
            }else{
                focusedWindow.GetComponent<old_PositionManager2>().urlChangeCount = focusedWindow.GetComponent<old_PositionManager2>().urlChangeCount + 1;
                // DisplayPreviousWindowOf();


            }

            if (orders.Count > 0){
                DisplayPreviousWindowOf();

            }

            

            
        }



        public void AddToList(string currentURL, byte[] currentImagebytes){

            newObject = new Order(currentURL, currentImagebytes);
            orders.Insert(focusedIndex, newObject);

            string result = "List contents: ";
                    for(int i = 0; i < orders.Count; i++)
                    {
                        result += "P O S I T I O N: " + orders.IndexOf(orders[i]).ToString() + " " + orders[i].URL.ToString() + " ";

                    }
            Debug.Log(result);


        // DisplayPreviousWindowOf();



        

        }   



    







        public void DisplayPreviousWindowOf(){

            Debug.Log("DisplayPreviousWindowOf: " + focusedIndex);

            positionToDisplay = focusedIndex + 1;

            for (int i=0; i< this.gameObject.transform.childCount; i++){

                Debug.Log(this.gameObject.transform.GetChild(i));
                //if iteration == fordward or back, do nothing, etlse delete
                if(this.gameObject.transform.GetChild(i).gameObject == focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow || this.gameObject.transform.GetChild(i).gameObject == focusedWindow.GetComponent<old_PositionManager2>().ForwardWindow || this.gameObject.transform.GetChild(i).gameObject == focusedWindow || this.gameObject.transform.GetChild(i).gameObject == focusedWindow){

                        Debug.Log("doing nothing");

                }else{
                
                    
                    Destroy(this.gameObject.transform.GetChild(i).gameObject); 

                }
                

            }



            
            //initiate windowPreviewPrefab for new order, set 
            if(orders.Count > 1){
                texture1 = new Texture2D(10,10);
                texture1.LoadImage(orders[positionToDisplay].Imagebytes);

                if(focusedWindow.GetComponent<old_PositionManager2>().BackExists == false){
                    
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow = GameObject.Instantiate(windowPrefab, focusedWindow.GetComponent<old_PositionManager2>().transform.position - new Vector3(0,0,0), new Quaternion(0,0,0,0), gameObject.transform);
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.position = focusedWindow.GetComponent<old_PositionManager2>().transform.position + focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.forward/5 - focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.right;
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.GetComponent<RectTransform>().sizeDelta = new Vector2(focusedWindow.GetComponent<RectTransform>().sizeDelta.x, focusedWindow.GetComponent<RectTransform>().sizeDelta.y);
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.localEulerAngles = new Vector3(0,-6,0); 

                    Color currColor = focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().color;
                    currColor.a = 0.5f;
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().color = currColor;

                    // focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.GetComponent<old_PositionManager2>().theIndexOfThisWindow = positionToDisplay;
                    focusedWindow.GetComponent<old_PositionManager2>().BackExists = !focusedWindow.GetComponent<old_PositionManager2>().BackExists;

                }else{
                    
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
                    
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;
                    focusedWindow.GetComponent<old_PositionManager2>().BackWindowOfThisWindow.GetComponent<old_PositionManager2>().theIndexOfThisWindow = positionToDisplay;
                }



        
            }

        

    }


}
