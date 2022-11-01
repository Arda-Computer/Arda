using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ISaveable_custom
{
    object SaveState();
    void LoadState(object state);

}
