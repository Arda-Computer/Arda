
namespace SaveLoadSystem.Editor
{
    using UnityEditor;
    class AssetPostProcessor : AssetPostprocessor
    {
        static void OnPostprocessAllAssets(string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths)
        {
            // Update the List with prefabs
            SaveablePrefabsEditor.GenerateListWithAllPrefabs();
        }
    }
}