using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuplex.WebView;

public class RefreshWindow : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        this.gameObject.GetComponent<Button>().onClick.AddListener(Refresh);
        
    }

    void Refresh()
        {

            this.gameObject.transform.parent.transform.parent.GetComponentInChildren<CanvasWebViewPrefab>().WebView.Reload();
        }

}
