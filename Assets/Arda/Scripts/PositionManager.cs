using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuplex.WebView;



public class PositionManager : MonoBehaviour
{

        public GameObject PreviewButton;
        public bool BackExists;
        public Texture2D focusedTexture;
        public int urlChangeCount;
        public int theIndexOfThisWindow;
        public GameObject BackWindowOfThisWindow;
        public GameObject Tag;
        public GameObject ForwardWindow;


        // Start is called before the first frame update
        void Start()
        {

            PreviewButton.GetComponent<Button>().onClick.AddListener(Convert);
            Tag.SetActive(false);

            
        }

     void Convert(){


            this.gameObject.GetComponent<Canvas>().sortingOrder = this.gameObject.GetComponent<Canvas>().sortingOrder + 1;
            this.gameObject.transform.position = this.gameObject.transform.position - this.gameObject.transform.forward/2;
            urlChangeCount = 1;
            focusedTexture = new Texture2D(10,10);
            focusedTexture.LoadImage(this.gameObject.transform.parent.GetComponent<WindowGroupManager>().orders[this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedIndex].Imagebytes);

            //if there exists other forwawrdWindows, delete those
            //if these exists more than 1 window that have indexs smaller than focusedWindow, then delete them (less one)
            ForwardWindow = this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedWindow;
            ForwardWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
            Color currColor = ForwardWindow.transform.Find("PreviewButton").GetComponent<RawImage>().color;
            currColor.a = 0.5f;
            ForwardWindow.transform.transform.Find("PreviewButton").GetComponent<RawImage>().color = currColor;
            ForwardWindow.transform.Find("CanvasWebViewPrefab").gameObject.SetActive(false);
            ForwardWindow.transform.Find("Tag").gameObject.SetActive(false);
            ForwardWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = focusedTexture;

            
            //check if the postion in the order of this window is ahead or behid of focusedIndex
            if (theIndexOfThisWindow > this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedIndex){
                
                this.gameObject.transform.parent.GetComponent<WindowGroupManager>().ChangeFocusTo(this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedIndex+1, this.gameObject);


            }else{

                this.gameObject.transform.parent.GetComponent<WindowGroupManager>().ChangeFocusTo(this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedIndex-1, this.gameObject);


            }



        }
}




