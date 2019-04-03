using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class controlaInterface : MonoBehaviour {

	private controlaJogador scriptControlaJogador;
	public Slider SliderVidaJogador;
	// Use this for initialization
	void Start () {
		scriptControlaJogador = GameObject.FindWithTag("Jogador").GetComponent<controlaJogador>();
		SliderVidaJogador.maxValue = scriptControlaJogador.Vida;
		AtualizarSliderVida();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void AtualizarSliderVida(){
		SliderVidaJogador.value = scriptControlaJogador.Vida;
	}
}
