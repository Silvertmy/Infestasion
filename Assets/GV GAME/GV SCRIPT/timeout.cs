using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class timeout : MonoBehaviour
{
    /*This Script will handle the count down of the Logo opening scene before it switches automatically to the Game Menu Scene*/
    public float interval;
	public int timemet = 17;
	


	private bool isRun;

	void Start()
	{
		StartCoroutine ("LoseTime");
	}

	public void Update()
    {
		if (timemet == 0) {
			//StopCoroutine ("LoseTime");
            SceneManager.LoadScene("GAMEMENU");
		}
	}

	public IEnumerator LoseTime()
	{
		while(true)
		{
			yield return new WaitForSeconds(1);
			timemet--;
		}
	}
}
