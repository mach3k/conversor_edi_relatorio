#ifndef TRADUTOR_H
#define TRADUTOR_H

#include "escritor.h"

class tradutor
{
    escritor escritor;
    
	public:
		tradutor();
		void primeiraLinha();
		void traduzir(string linha);
		void finalizar();
	protected:
};

#endif
