using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class WindowGroupManager : MonoBehaviour
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






    // Start is called before the first frame update
    async void Start()
    {
        await StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().WaitUntilInitialized();
        StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.LoadUrl(startingURL);
        StartingWindow.GetComponent<PositionManager>().urlChangeCount = 2;
        


        ChangeFocusTo(0, StartingWindow);



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
            if(focusedWindow.GetComponent<PositionManager>().urlChangeCount > 1){
                await focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.WaitForNextPageLoadToFinish();
                newURL = focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.Url;
                newImagebytes = await focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.CaptureScreenshot();
                AddToList(newURL, newImagebytes);
                
            }else{
                focusedWindow.GetComponent<PositionManager>().urlChangeCount = focusedWindow.GetComponent<PositionManager>().urlChangeCount + 1;
                // DisplayPreviousWindowOf();


            }

            if (orders.Count > 0){
                DisplayPreviousWindowOf();

            }

            

            
        }



        public void AddToList(string currentURL, byte[] currentImagebytes){

            newObject = new Order(currentURL, currentImagebytes);
            orders.Insert(0, newObject);

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
                if(this.gameObject.transform.GetChild(i).gameObject == focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow || this.gameObject.transform.GetChild(i).gameObject == focusedWindow.GetComponent<PositionManager>().ForwardWindow || this.gameObject.transform.GetChild(i).gameObject == focusedWindow || this.gameObject.transform.GetChild(i).gameObject == focusedWindow){

                        Debug.Log("doing nothing");

                }else{
                
                    
                    Destroy(this.gameObject.transform.GetChild(i).gameObject); 

                }
                

            }



            
            //initiate windowPreviewPrefab for new order, set 
            if(orders.Count > 1){
                texture1 = new Texture2D(10,10);
                texture1.LoadImage(orders[positionToDisplay].Imagebytes);

                if(focusedWindow.GetComponent<PositionManager>().BackExists == false){
                    
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow = GameObject.Instantiate(windowPrefab, focusedWindow.GetComponent<PositionManager>().transform.position - new Vector3(0,0,0), new Quaternion(0,0,0,0), gameObject.transform);
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.position = focusedWindow.GetComponent<PositionManager>().transform.position + focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.forward/5 - focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.right;
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.GetComponent<RectTransform>().sizeDelta = new Vector2(focusedWindow.GetComponent<RectTransform>().sizeDelta.x, focusedWindow.GetComponent<RectTransform>().sizeDelta.y);
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.localEulerAngles = new Vector3(0,-6,0); 

                    Color currColor = focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().color;
                    currColor.a = 0.5f;
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().color = currColor;

                    // focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.GetComponent<PositionManager>().theIndexOfThisWindow = positionToDisplay;
                    focusedWindow.GetComponent<PositionManager>().BackExists = !focusedWindow.GetComponent<PositionManager>().BackExists;

                }else{
                    
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
                    
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;
                    focusedWindow.GetComponent<PositionManager>().BackWindowOfThisWindow.GetComponent<PositionManager>().theIndexOfThisWindow = positionToDisplay;
                }



        
            }

        

    }


}
