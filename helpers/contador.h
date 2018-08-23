#ifndef CONTADOR_H
#define CONTADOR_H

#include "escritor.h"

/* Projeto de Matemática Discreta - BSI17
   Professor: Rafael Carlos Vélez Benito
   Alunos...: Marcelo Ramos Machado
*/

class contador
{
	int n;
    long double positivos, negativos, soma;
    escritor log;
    
	public:
		contador();
		
		//a) adição de termos da esquerda para a direita.
		long double execEsqDir();
		
		//b) adição de termos da direita para a esquerda.
		long double execDirEsq();
		
//		//c) adição separada dos termos positivos e dos termos negativos, da esquerda para a direita.
		long double execEsqDirSep();
		
//		//d) adição separada dos termos positivos e dos termos negativos, da direita para a esquerda.
		long double execDirEsqSep();
		
	protected:
};

#endif
