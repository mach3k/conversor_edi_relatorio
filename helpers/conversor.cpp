#include "conversor.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

/* Projeto de Matemática Discreta - BSI17
   Professor: Rafael Carlos Vélez Benito
   Alunos...: Marcelo Ramos Machado
*/

string conversor::doubleToStr(long double valor){
	std::stringstream str;
	str << valor;
	string s;
	str >> s;
	
	return s;
}

string conversor::doubleToStr(long double valor, int precisao){
	std::stringstream str;
//	str << fixed << setprecision( precisao ) << valor;
	str << setprecision( precisao ) << valor;
	string s;
	str >> s;
	
	return s;
}

string conversor::intToStr(int valor){
	std::stringstream str;
	str << valor;
	string s;
	str >> s;
	
	return s;
}

string conversor::substVirgula(string texto){
	std::size_t found = texto.find(".");
  
	if (found==std::string::npos){
		return(texto.replace(found, 1, ","));
	}
	
	return texto;
}
