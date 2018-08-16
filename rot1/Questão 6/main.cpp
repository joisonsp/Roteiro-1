#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main(void){
	
	int i = 0;
	
	ControleDePagamentos pag[100];
	
	pag[i].addPagamento(784.5, "Leticia");
	pag[i].addPagamento(850.4, "Laura");
	
	cout << pag[i].calculaTotalDePagamentos() << endl;
	
	return 0;
}
