using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controlaInimigo : MonoBehaviour {

	public GameObject Jogador;
	public float Velocidade = 5;
	private Rigidbody rgInimigo;
	private Animator anmtrInimigo;
	// Use this for initialization
	void Start () {
		Jogador = GameObject.FindWithTag("Jogador");
		
		int geraZumbi = Random.Range(1,28);
		transform.GetChild(geraZumbi).gameObject.SetActive(true);
		
		rgInimigo = GetComponent<Rigidbody>();
		anmtrInimigo = GetComponent<Animator>();
	}	
	
	// Update is called once per frame
	void Update () {
		
	}

	void FixedUpdate() {		
		float distancia = Vector3.Distance(transform.position, Jogador.transform.position);
		Vector3 direcao = Jogador.transform.position - transform.position;

		Quaternion novaRotacao = Quaternion.LookRotation(direcao) ;
			rgInimigo.MoveRotation(novaRotacao);
		
		if (distancia > 2.5){
        	rgInimigo.MovePosition(rgInimigo.position + direcao.normalized * Velocidade * Time.deltaTime);
				anmtrInimigo.SetBool("Atacando", false);
		}
		else{
			anmtrInimigo.SetBool("Atacando", true);
		}
	}

	void AtacaJogador(){
		int dano = Random.Range(20,30);
		Jogador.GetComponent<controlaJogador>().TomarDano(dano);
	}
}
