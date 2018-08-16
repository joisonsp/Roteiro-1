#include "ControleDeGastos.h"

void ControleDeGastos::addDespesa(double valor, int tipo){
	
	static int j = 0;
	
	despesas[j].setValor(valor);
	despesas[j].setTipoDeGasto(tipo);
	
	j++;
}

double ControleDeGastos::calculaTotalDeDespesas(){
	
	int i;
	double resultado = 0;
	
	for(i = 0; i < 100; i++){
		
		resultado += despesas[i].getValor();
	}
	
	return resultado;
}

bool ControleDeGastos::existeDespesaDoTipo(int tipo){
	
	int i;
	
	for(i = 0; i < 100; i++){
		
		if(tipo == despesas[i].getTipoDeGasto()){
			
			return true;
		}
	}
	
	return false;
}
