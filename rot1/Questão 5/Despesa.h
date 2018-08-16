#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

class Des{

	private:

		double valor;
		int tipoDeGasto;

	public:

		double getValor();
		void setValor(double valor);

		int getTipoDeGasto();
		void setTipoDeGasto(int tipoDeGasto);
};











#endif
