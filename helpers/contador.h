#ifndef CONTADOR_H
#define CONTADOR_H

#include "escritor.h"

/* Projeto de Matem�tica Discreta - BSI17
   Professor: Rafael Carlos V�lez Benito
   Alunos...: Marcelo Ramos Machado
*/

class contador
{
	int n;
    long double positivos, negativos, soma;
    escritor log;
    
	public:
		contador();
		
		//a) adi��o de termos da esquerda para a direita.
		long double execEsqDir();
		
		//b) adi��o de termos da direita para a esquerda.
		long double execDirEsq();
		
//		//c) adi��o separada dos termos positivos e dos termos negativos, da esquerda para a direita.
		long double execEsqDirSep();
		
//		//d) adi��o separada dos termos positivos e dos termos negativos, da direita para a esquerda.
		long double execDirEsqSep();
		
	protected:
};

#endif
