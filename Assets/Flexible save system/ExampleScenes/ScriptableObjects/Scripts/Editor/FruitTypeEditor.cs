// Select which type this editorscript is used for
    #define IS_SCRIPTABLE_OBJECT
    //#define IS_MONO_BEHAVIOUR

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using SaveLoadSystem.Editor;

[CustomEditor(typeof(FruitType))]
public class FruitTypeEditor : SaveIDManagerEditor<FruitType>
{

    // Used to find all Objects with the same Type in the scene
#if IS_SCRIPTABLE_OBJECT
    override protected FruitType[] GetObjects()
    {
        return Resources.LoadAll<FruitType>("");
    }
#endif
#if IS_MONO_BEHAVIOUR
    override protected FruitType[] GetObjects()
    {
        return FindObjectsOfType<FruitType>();
    }
#endif

    protected override void OnEnable()
    {
        showBase = true; // Set this to true, if you want to display the default serialized attributes of the your ScriptableObject/MonoBehaviour
        base.OnEnable();
    }
    // Do not use the default "OnInspectorGUI()" it is used by the "SaveIDManagerEditor".
    // Use "OnBeginInspectorGUI" or/and "OnEndInspectorGUI" instead.

    // Will be called at the beginning of the "OnInspectorGUI()"
    public override void OnBeginInspectorGUI()
    {

    }

    // Will be called at the end of the "OnInspectorGUI()"
    public override void OnEndInspectorGUI()
    {

    }
}


#if IS_SCRIPTABLE_OBJECT && IS_MONO_BEHAVIOUR
#error This editorscript can't be used for an MonoBehaviour and a Scriptable object. Select only one on top of this file.
#endif
