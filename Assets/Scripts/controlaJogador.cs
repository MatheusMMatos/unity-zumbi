using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controlaJogador : MonoBehaviour {
	public float Velocidade = 10;
	Vector3 direcao;

	// Update is called once per frame
	void Update () {
		// captura as setas(movimentação)
		float eixoX =  Input.GetAxis("Horizontal");
		float eixoZ = Input.GetAxis("Vertical");
		
		// direção para onde vai o jogador
		direcao = new Vector3(eixoX, 0, eixoZ);
		
		//transform.Translate(direcao * Time.deltaTime * Velocidade); // ficar andando pela cena
		
		// troca de ação(Parado, Correndo)
		if (direcao != Vector3.zero){
			GetComponent<Animator>().SetBool("Movendo", true);
		}else
		{
			GetComponent<Animator>().SetBool("Movendo", false);
		}
	}

	// movimenta o jogador por segundo
	void FixedUpdate() {
		GetComponent<Rigidbody>().MovePosition(
			GetComponent<Rigidbody>().position + 
			(direcao * Time.deltaTime * Velocidade));	
	}
}
