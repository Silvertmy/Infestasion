using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerLife : MonoBehaviour
{
    public float _maxHealth = 30;
    public Text maxHealth;
    public GameObject _hitEffect;
     
    public float _currentHealth;
    public Text currentHealth;

    public BULL_ACTIVE mvBullet;

    public GameObject FullPlayer;
    // Start is called before the first frame update
    public CharacterHealth _healthbar;

    // Start is called before the first frame update
    void Start()
    {
        _currentHealth = _maxHealth;

        _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
    }

    // Update is called once per frame
    void Update()
    {
        currentHealth.text = "" + _currentHealth.ToString();
        maxHealth.text = " / " + _maxHealth.ToString();
    }

    public void Damaging()
    {
        _currentHealth -=mvBullet.Damage;

        if(_currentHealth <= 0)
        {
            //nstantiate(Explode, transform.position, Quaternion.identity);
            Destroy(FullPlayer.gameObject);
        }
        else
        {
            _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
            Instantiate(_hitEffect, transform.position, Quaternion.identity);
        }       
    }
}
