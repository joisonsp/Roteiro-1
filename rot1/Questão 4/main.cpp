#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(void){

	Pessoa pessoa1 = Pessoa();
	Pessoa pessoa2 = Pessoa();

	pessoa1.setName("Joison");
	pessoa1.setIdade(19);
	pessoa1.setTelefone(83996115329);

	pessoa2.setName("Arroba");
	pessoa2.setIdade(18);
	pessoa2.setTelefone(20170068553);


	return 0;
}

