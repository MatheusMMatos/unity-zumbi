using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controlaBala : MonoBehaviour {
	public float Velocidade =20;
	private Rigidbody rgBala;

	void Start() {
		rgBala = GetComponent<Rigidbody>();	
	}
	// Update is called once per frame
	void FixedUpdate() {
		rgBala.MovePosition(rgBala.position + transform.forward * Velocidade * Time.deltaTime);
	}

	void OnTriggerEnter(Collider objtColisao) {
		// objeto colidir com o "inimigo"
		if(objtColisao.tag == "Inimigo"){
			//destroy objeto
			Destroy(objtColisao.gameObject);
		}

		// a bala sera destuida toda vez q colidir com um objto
		Destroy(gameObject);
	}
}
