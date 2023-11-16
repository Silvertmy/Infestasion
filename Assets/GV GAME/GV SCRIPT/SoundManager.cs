using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class SoundManager : MonoBehaviour
{
    public AudioSource backgroundMusicSource;
    public AudioSource buttonsound;

    public GameObject gunSFX;
    

    public void PlayBackgroundMusic()
    {
        backgroundMusicSource.Play();
    }

    public void PauseBackgroundMusic()
    {
        backgroundMusicSource.Pause();
    }

     public void PlaySound()
    {
        // Play the audio clip when PlaySound is called
        if (buttonsound != null)
        {
            buttonsound.Play();
        }
    }

    /////////////////////////////////////////////////////
    

    public void PlayAllSFX()
    {
        gunSFX.gameObject.SetActive(true);
    }

    public void PauseAllSFX()
    {
        gunSFX.gameObject.SetActive(false);
    }
}