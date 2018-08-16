#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos{
	
	protected:
		
		Pagamento pagamentos[100];
		
	public:
		
		double calculaTotalDePagamentos();
		void addPagamento(double getValorPagamento, std::string getNomeDoFuncionario);
		bool existePagamentoParaFuncionario(std::string getNomeDoFuncionario);
};

#endif
