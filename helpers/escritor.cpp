#include "escritor.h"
#include <fstream>
#include <iostream>
#include <time.h>
#include "conversor.h"

/* Projeto de Matem�tica Discreta - BSI17
   Professor: Rafael Carlos V�lez Benito
   Alunos...: Marcelo Ramos Machado
*/

escritor::escritor() {
	try {
		
		string nomeArq = ("logs/resultados" + dataHora() + ".csv").c_str();
		arq = fopen(nomeArq.c_str(), "wt");  // Cria um arquivo texto para grava��o
		
		if (arq == NULL) // Se n�o conseguiu criar
		{
		   cout << "Problemas na CRIACAO do arquivo de log";
		}
		
	} catch (int e) {
		cout << "Deu merda! Erro nro. " << e << '\n';
		system("PAUSE");
	}
}

void escritor::escrever(string texto) {
	texto += "\n";
	result = fputs(texto.c_str(), arq);
	
	if (result == EOF)
	    cout << "Erro na Gravacao";
}

void escritor::fechar() {
	fclose(arq);
}

string escritor::dataHora(){
	struct tm *local;
	time_t t;
	t= time(NULL);
	local=localtime(&t);
	
	int dia  = local->tm_mday;
	int mes  = local->tm_mon+1;
	int ano  = local->tm_year+1900;
	int hora = local->tm_hour;;
	int min  = local->tm_min;
	int seg  = local->tm_sec;

	string nome = conversor::intToStr(ano) + conversor::intToStr(mes) + conversor::intToStr(dia);
	nome += conversor::intToStr(hora) + conversor::intToStr(min) + conversor::intToStr(seg);
	
	return nome;
}
