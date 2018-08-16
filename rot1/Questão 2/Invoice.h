#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice{

	private:

		int num;
		std::string des;
		int quant;
		double preco;

	public:

		Invoice();

		int getNum();
		std::string getDes();
		int getQuant();
		double getPreco();

		void setNum(int num);
		void setDes(std::string des);
		void setQuant(int quant);
		void setPreco(double preco);

		double getInvoiceAmount();
};

#endif
