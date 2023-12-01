using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectOff : MonoBehaviour
{
	/*Just handles the bust effects when the game is over ...something like fire works*/
    public float interval;
	public int timemet = 17;

    public GameObject Effect;
	//public Text rounddownText;
    //public SceneMyOffice scenemyoffice;
	


	private bool isRun;
	//public GameManager thegamemanager;

	public void Start()
	{
		
	}

    public void Clocked()
    {
        StartCoroutine ("LoseTime");
    }

	public void Update(){
		//rounddownText.text = ("" + timemet);


		if (timemet == 0) {
			Effect.gameObject.SetActive(false);

            timemet = 2;

		}

		


	}



	void Change()
	{
		//FindObjectOfType<GameManager>().RestartGame();
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
