using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OptionScript : MonoBehaviour
{
    public Animator anim;
    // Start is called before the first frame update
    public void OpenOptions()
    {
        anim.SetBool("AWAKE", true);
    }

    public void CloseOption()
    {
        anim.SetBool("AWAKE", false);
    }
}
