using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Delivery : MonoBehaviour
{
    bool hasPackage = false;
    [SerializeField] float destroyDelay = 0.5f;
    SpriteRenderer spriteRenderer;
    Color32 defaultColor;

    void Start() 
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        defaultColor = spriteRenderer.color;
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "Package" && hasPackage == false)
        {
            //Change the car's color to be the same as the package just picked up
            spriteRenderer.color = other.GetComponent<SpriteRenderer>().color;
            //Destroy the package
            Destroy(other.gameObject, destroyDelay);
            //Set the hasPackage flag
            hasPackage = true;
        }
        else if(other.tag == "Customer" && hasPackage == true)
        {
            //Reset hasPackage
            hasPackage = false;
            //Reset the car's color   
            spriteRenderer.color = defaultColor;
        }
    }
}
