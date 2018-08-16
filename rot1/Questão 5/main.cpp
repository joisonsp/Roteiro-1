#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main(void){
	
	int i = 0;
	
	ControleDeGastos despesa[100];

	despesa[i].addDespesa(758.9, 1);
	despesa[i].addDespesa(871.9, 1);
	
	cout << despesa[i].calculaTotalDeDespesas() << endl;
	
	return 0;
}
