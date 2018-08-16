#include "Pessoa.h"
using namespace std;
Pessoa::Pessoa(){
	name = " ";
	idade = 0;
	tel = 0;
}

string Pessoa::getName(){
	return name;
}

int Pessoa::getIdade(){
	return idade;
}

int Pessoa::getTelefone(){
	return tel;
}

void Pessoa::setName(string nName){
	nome = nName;
}

void Pessoa::setIdade(int nIdade){

	idade = nIdade;

}

void Pessoa::setTelefone(int nTelefone){

	tel = nTelefone;

}
