#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;
class Pessoa{

	private:

		string name;
		int idade;
		int tel;

	public:

		Pessoa();

		string getName();

		int getIdade();
		int getTelefone();

		void setName(string name);
		void setIdade(int idade);
		void setTelefone(int tel);

};

#endif
