#include "Empregado.h"
using namespace std;
Empregado::Empregado(){
	nome = " ";
	sobrenome = " ";
	salario = 0.0;
}

Empregado::Empregado(string nNome, string nSobrenome, double nSalario){

	nome = nNome;
	sobrenome = nSobrenome;
	salario = nSalario;

}

string Empregado::getNome(){

	return nome;

}

string Empregado::getSobrenome(){

	return sobrenome;

}

double Empregado::getSalario(){

	return salario;

}

void Empregado::setNome(string nNome){

	nome = nNome;

}

void Empregado::setSobrenome(string nSobrenome){

	sobrenome = nSobrenome;

}

void Empregado::setSalario(double nSalario){

	if(salario < 0){

		salario = 0.0;

	}else{

		salario = nSalario;

	}
}
