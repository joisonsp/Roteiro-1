#include "Pagamento.h"

double Pagamento::getValorPagamento(){
	
	return valorPagamento;
}

void Pagamento::setValorPagamento(double valor){
	
	valorPagamento = valor;
}

std::string Pagamento::getNomeDoFuncionario(){
	
	return nomeDoFuncionario;
}

void Pagamento::setNomeDoFuncionario(std::string nome){
	
	nomeDoFuncionario = nome;
}
