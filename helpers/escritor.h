#ifndef ESCRITOR_H
#define ESCRITOR_H
#include <fstream>

using namespace std;

/* Projeto de Matemática Discreta - BSI17
   Professor: Rafael Carlos Vélez Benito
   Alunos...: Marcelo Ramos Machado
*/

class escritor
{
	FILE *arq;
	int result;
	
	public:
		escritor();
		void escrever(string texto);
		void fechar();
		string dataHora();
	protected:
};

#endif
