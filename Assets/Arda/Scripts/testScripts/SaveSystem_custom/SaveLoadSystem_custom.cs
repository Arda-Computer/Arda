using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class SaveLoadSystem_custom : MonoBehaviour
{

    public string SavePath => $"{Application.persistentDataPath}/ArdaData/save.txt";

    void Awake() { 
        Load();
    }
    

    //[ContextMenu("Save")]
    public void Save(){
        Debug.LogWarning(("SAVED!"));
        var state = LoadFile();
        SaveState(state);
        SaveFile(state);
    }

    // [ContextMenu("Load")]
    public void Load(){
        Debug.LogWarning(("LOADED!"));
        var state = LoadFile();
        LoadState(state);
        
    }

    public void SaveFile(object state){

        using(var stream = File.Open(SavePath, FileMode.Create))
        {
            var formatter = new BinaryFormatter();
            formatter.Serialize(stream, state);
        }

    }

    Dictionary<string, object> LoadFile(){
        if (!File.Exists(SavePath)){
            Debug.Log("No save file found");
            return new Dictionary<string, object>();
        }

        //Debug.Log(Application.persistentDataPath);
        using (FileStream stream = File.Open(SavePath, FileMode.Open)){

            var formatter = new BinaryFormatter();
            return (Dictionary<string, object>)formatter.Deserialize(stream);

        }
    }




    void SaveState(Dictionary<string, object> state){

        foreach(var saveable in FindObjectsOfType<SaveableEntity_custom>()){
            state[saveable.Id] = saveable.SaveState();
        }
    }



    void LoadState(Dictionary<string, object> state){

        foreach(var saveable in FindObjectsOfType<SaveableEntity_custom>()){
            if(state.TryGetValue(saveable.Id, out object savedState)){
                saveable.LoadState(savedState);
            }
        }

    }

}
