#include "Despesa.h"

double Despesa::getValor(){
	
	return valor;
}

void Despesa::setValor(double val){
	
	valor = val;
}

int Despesa::getTipoDeGasto(){
	
	return tipoDeGasto;
}

void Despesa::setTipoDeGasto(int gasto){
	
	tipoDeGasto = gasto;
}
