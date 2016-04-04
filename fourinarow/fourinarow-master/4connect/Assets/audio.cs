using UnityEngine;
using System.Collections;

public class audio : MonoBehaviour
{

    public AudioClip sound01;
    public AudioClip sound02;

    int sound = 0;

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "coin")
        {
          
                GetComponent<AudioSource>().PlayOneShot(sound01);
                sound++;
        
        }
    }
}