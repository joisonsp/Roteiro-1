#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>
using namespace std;
class Empregado{

	protected:

		string nome;
		string sobrenome;
		double salario;

	public:

		Empregado(string nome, string sobrenome, double salario);
		Empregado();
		string getNome();
		string getSobrenome();

		double getSalario();
		void setNome(string nome);
		void setSobrenome(string sobrenome);
		void setSalario(double salario);

};

#endif
