using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthController : MonoBehaviour
{
    [SerializeField]
    private Image _healthbarSprite;

    [SerializeField]
    //private float _reduceSpeed;

    public EnemyLife enemyLife;

    private Camera _cam;
    //private float _target = 1;

    void Start()
    {
        //_cam = Camera.main;
    }
    
    // Update is called once per frame
    public void UpdateHealthBar(float maxHealth, float currentHealth)
    {
        _healthbarSprite.fillAmount = currentHealth / maxHealth; 
    }

    void Update()
    {
        //transform.rotation = Quaternion.LookRotation(transform.position - _cam.transform.position);
        //_healthbarSprite.fillAmount = Mathf.MoveTowards(_healthbarSprite.fillAmount,_target,_reduceSpeed * Time.deltaTime);
    }
}
