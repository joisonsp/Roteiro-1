#include <iostream>
#include "Invoice.h"

using namespace std;

int main(void){

	Invoice teste = Invoice();

	teste.setPreco(25);
	teste.setQuant(8);

	cout << teste.getInvoiceAmount() << endl;

	return 0;
}
