#include "ControleDePagamentos.h"

void ControleDePagamentos::addPagamento(double valor, std::string nome){
	
	static int j = 0;
	
	pagamentos[j].setValorPagamento(valor);
	pagamentos[j].setNomeDoFuncionario(nome);
	
	j++;
}

double ControleDePagamentos::calculaTotalDePagamentos(){
	
	int i;
	double resultado = 0;
	
	for(i = 0; i < 100; i++){
		
		resultado += pagamentos[i].getValorPagamento();
	}
	
	return resultado;
	
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome){
	
	int i;
	
	for(i = 0; i < 100; i++){
		
		if(pagamentos[i].getNomeDoFuncionario().compare(nome) == 0){
			
			return true;
		}
	}
	
	return false;
}

