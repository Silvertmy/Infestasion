using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class timedown : MonoBehaviour
{
    public float interval;
	public int timemet = 17;
    public LevelGameSystem levelSystem;
	//public Text rounddownText;
    //public SceneMyOffice scenemyoffice;
	


	private bool isRun;
	//public GameManager thegamemanager;

	void Start()
	{
		StartCoroutine ("LoseTime");
	}

	public void Update(){
		//rounddownText.text = ("" + timemet);


		if (timemet == 0) {
			//StopCoroutine ("LoseTime");
			//rounddownText.text = "reward";
            //scenemyoffice.RingUp();
			//SceneManager.LoadScene ("LVLA");
			//Invoke ("Change", 1.65f);
            levelSystem.Menu();
            StopCoroutine ("LoseTime");

			//Destroy (gameObject);

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
