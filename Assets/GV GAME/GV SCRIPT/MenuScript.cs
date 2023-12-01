using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuScript : MonoBehaviour
{
    //THIS SCRIPT WILL HANDLE THE HOME MENU'S VARIOUS MENU ANIMATIONS and Button actions.

    public Animator Settings;
    public LevelGameSystem level;
    public Animator Gift;

    public Animator Inventory;
    public SoundManager sound;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SettingsOpen()
    {
        sound.PlaySound();
        Settings.SetBool("SETT", true);
    }

    public void SettingsExit()
    {
        sound.PlaySound();
        Settings.SetBool("SETT", false);
    }

    public void WeaponOpen()
    {
        sound.PlaySound();
        Inventory.SetBool("INVENT", true);
    }

    public void WeaponExit()
    {
        sound.PlaySound();
        Inventory.SetBool("INVENT", false);
    }

    public void GiftOpen()
    {
        sound.PlaySound();
        Gift.SetBool("GIFT", true);
    }

    public void GiftExit()
    {
        sound.PlaySound();
        Gift.SetBool("GIFT", false);
    }

    public void PlayGame()
    {
        sound.PlaySound();
        //This method will view the level system and detect what level we completed  and play the next level
        SceneManager.LoadScene("TEST");//For Now;
    }
}
