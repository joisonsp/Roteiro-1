#include "Invoice.h"

Invoice::Invoice(){

	num = 0;
	des = " ";
	quant = 0;
	preco = 0.0;

}

int Invoice::getNum(){

	return num;
}

std::string Invoice::getDes(){

	return des;
}

int Invoice::getQuant(){

	return quant;
}

double Invoice::getPreco(){

	return preco;
}

void Invoice::setNum(int number){

	numero = number;
}

void Invoice::setDes(std::string desc){

	descricao = desc;
}

void Invoice::setQuant(int q){

	quant = q;
}

void Invoice::setPreco(double price){

	preco = price;
}

double Invoice::getInvoiceAmount(){

	double resultado;

	if(quant < 0){

		quant = 0;
	}

	if(preco < 0){

		preco = 0.0;
	}

	resultado = quant * preco;

	return resultado;
}
