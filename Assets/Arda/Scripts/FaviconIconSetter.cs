using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using Vuplex.WebView;


public class FaviconIconSetter : MonoBehaviour
{

        string ImageName;
        string baseURL;
        


    // Start is called before the first frame update
    async void Start()
    {
        if(this.gameObject.transform.parent.transform.parent.GetComponentInChildren<CanvasWebViewPrefab>()){
            await this.gameObject.transform.parent.transform.parent.GetComponentInChildren<CanvasWebViewPrefab>().WaitUntilInitialized(); //load before doing anything
            this.gameObject.transform.parent.transform.parent.GetComponentInChildren<CanvasWebViewPrefab>().WebView.UrlChanged += MainWebView_UrlChanged;//if url changes, send event to MainWebView_UrlChanged(
        }
        

        
    
    }

        //if url changes
        void MainWebView_UrlChanged(object sender, UrlChangedEventArgs eventArgs) {

            baseURL = eventArgs.Url;
            baseURL = baseURL.Replace("https://", "");
            int index = baseURL.IndexOf("/");  
            baseURL = baseURL.Substring(0, index);

            //create favicon dir if not exist
            if(!Directory.Exists(Path.Combine(Application.persistentDataPath, "favicons"))){
                Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "favicons"));
                Debug.Log("creating folder: " + Path.Combine(Application.persistentDataPath, "favicons"));
            }
        

            //if youtube.com.png exists, apply to GO RawImage
            if (File.Exists(Application.persistentDataPath + "/favicons/"+ baseURL + ".png")){

                byte[] UploadByte = File.ReadAllBytes(Application.persistentDataPath + "/favicons/"+ baseURL + ".png");
                Texture2D texture = new Texture2D(10,10);
                texture.LoadImage(UploadByte);
                this.gameObject.GetComponent<RawImage>().texture = texture;

            }else{

                //else run coroutine
                Debug.Log("Need to grab favicon online");
                StartCoroutine(LoadImage("https://www.google.com/s2/favicons?domain="+ baseURL +"&sz=256"));
                
            }
            
        }




        

    

        //get favicon -> image texture
        IEnumerator LoadImage(string ImageUrl){


            WWW www = new WWW(ImageUrl);
            yield return www;
            if (www.error == null){

                //when image downloaded
                Texture2D texture = www.texture;
                this.gameObject.GetComponent<RawImage>().texture = texture;
                byte[] dataByte=texture.EncodeToPNG();
                File.WriteAllBytes(Application.persistentDataPath + "/favicons/"+ baseURL + ".png", dataByte);
                Debug.Log("Image saved");
                
            }
            else{
                Debug.Log("net error!");
            }




        }
}
