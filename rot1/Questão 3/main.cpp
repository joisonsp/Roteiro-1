#include <iostream>
#include "Empregado.h"

using namespace std;

int main(void){
	
	double aumento = 0, nSalario = 0;
	
	Empregado wendson = Empregado("Wendson", "Wanda", 200);
	Empregado ambrosio = Empregado("Ambrosio", "Framboesa", 100);
	
	cout << "Salario anual de "<< wendson.getNome() << ": " << wendson.getSalario() * 12 << endl;
	cout << "Salario anual de "<< ambrosio.getNome() << ": " << ambrosio.getSalario() * 12 << endl;
	
	aumento = wendson.getSalario() * 0.1;
	nSalario = wendson.getSalario() + aumento;
	wendson.setSalario(nSalario);
	
	cout << "\nNovo salario anual de "<< wendson.getNome() << ": " << wendson.getSalario() * 12 << endl;
	
	aumento = ambrosio.getSalario() * 0.1;
	nSalario = ambrosio.getSalario() + aumento;
	ambrosio.setSalario(nSalario);
	
	cout << "Novo salario anual de "<< ambrosio.getNome() << ": " << ambrosio.getSalario() * 12 << endl;
	
	return 0;
}
