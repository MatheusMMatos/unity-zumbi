using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controlaArma : MonoBehaviour {
	public GameObject Bala;
	public GameObject canoArma;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButtonDown("Fire1")){
			Instantiate(Bala, canoArma.transform.position, canoArma.transform.rotation);
		}
	}
}
