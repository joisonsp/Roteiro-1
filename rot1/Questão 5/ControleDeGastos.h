#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos{

	private:

		Despesa des[100];

	public:

		void addDes(double getValor, int tipoDeGasto);
		double calculaTotalDeDes();
		bool existeDespesaDoTipo(int getTipoDeGasto);
};

#endif
