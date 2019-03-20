using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class controlaJogador : MonoBehaviour {
	public float Velocidade = 10;
	Vector3 direcao;
	public LayerMask mascaraChao;
	public GameObject textoJogador;
	public bool vivo = true;
	private Rigidbody rgJogador;
	private Animator anmtrJogador;

	void Start() {
		Time.timeScale = 1;
		rgJogador = GetComponent<Rigidbody>();
		anmtrJogador = GetComponent<Animator>();
	}
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
			anmtrJogador.SetBool("Movendo", true);
		}else
		{
			anmtrJogador.SetBool("Movendo", false);
		}

		if (!vivo){
			if(Input.GetButtonDown("Fire1")){
				SceneManager.LoadScene("game");
			}
		}
	}

	// movimenta o jogador por segundo
	void FixedUpdate() {
		rgJogador.MovePosition(
			rgJogador.position + 
			(direcao * Time.deltaTime * Velocidade));

		Ray raio = Camera.main.ScreenPointToRay(Input.mousePosition);
		// desenho de um raio para saber se toca ou nao o chao
		//Debug.DrawRay(raio.origin, raio.direction * 100, Color.red);
		RaycastHit impacto;

		if(Physics.Raycast(raio, out impacto, 100, mascaraChao)){
			Vector3 posicaoMira = impacto.point - transform.position;

			//cancela o raio em y, para o jogador nao olhar para o chao
			// y da mira é igual a y do jogador
			posicaoMira.y = transform.position.y;

			Quaternion novaRotacao = Quaternion.LookRotation(posicaoMira) ;
			rgJogador.MoveRotation(novaRotacao);
		}
	}
}
