using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class geradorInimigo : MonoBehaviour {
	public GameObject Zumbi;
	float contarTempo = 0;
	public float tempoGerarZumbi = 1;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		contarTempo += Time.deltaTime;
		
		if (contarTempo >= 	tempoGerarZumbi){
			Instantiate(Zumbi, transform.position, transform.rotation);
			contarTempo = 0;
		}
		
	}
}
