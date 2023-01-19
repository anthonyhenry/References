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
        if(other.tag == "Package")
        {
            //Store the car's current color in a variable
            Color32 previousColor = gameObject.GetComponent<SpriteRenderer>().color;

            //Change the car's color to be the same as the package just picked up
            spriteRenderer.color = other.GetComponent<SpriteRenderer>().color;
            
            if(hasPackage == true)
            {
                //Swap packages
                other.GetComponent<SpriteRenderer>().color = previousColor;
            }
            else
            {
                //Destroy the package
                Destroy(other.gameObject, destroyDelay);
            }

            //Set the hasPackage flag
            hasPackage = true;
        }
        else if(other.tag == "Customer" && hasPackage == true /*&& other.GetComponent<SpriteRenderer>().color == spriteRenderer.color*/)
        {
            //Store current game object color in a Color32 variable
            Color32 objColor = gameObject.GetComponent<SpriteRenderer>().color;

            //Deliver package if it's color matches customer color
            if(objColor == other.GetComponent<SpriteRenderer>().color)
            {
                //Reset hasPackage
                hasPackage = false;
                //Reset the car's color   
                spriteRenderer.color = defaultColor;
                Destroy(other.gameObject, destroyDelay);
            }
        }
    }
}
