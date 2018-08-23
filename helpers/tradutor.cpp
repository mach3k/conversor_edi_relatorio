#include "tradutor.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

tradutor::tradutor() {
//	escritor.escrever("DB::table('bancos')->insert([");
}

void tradutor::primeiraLinha(){
	escritor.escrever("Nome;Identificador;CPF;Contrato;Data vencimento;Prestação;Valor;");
}

void tradutor::traduzir(string linha) {

//	nome 			= 15 ao 52 (36)
//	cpf 			= 52 ao 63
//	identificador 	= 62 ao 75
//	contrato 		= 161 a0 171
//	data vencim 	= 97 ao 106
//	prestação 		= 105 ao 110
//	valor 			= 143 ao 153
	string nome = linha.substr(15, 36);
	string identif = "\"" + linha.substr(62, 12) + "\"";
	string cpf = linha.substr(51, 3) + "." + linha.substr(54, 3) + "." + linha.substr(57, 3) + "-" + linha.substr(60, 2);
	string contrato = linha.substr(161, 9);
	string dtVenc = linha.substr(97, 2) + "/" + linha.substr(99, 2) + "/" + linha.substr(101, 4);
	string prest = linha.substr(105, 2) + " de " + linha.substr(107, 2);
	string valor = linha.substr(143, 7) + "," + linha.substr(150, 2);
	
	escritor.escrever(nome + ";" + identif + ";" + cpf + ";" + contrato + ";" + dtVenc + ";" + prest + ";" + valor + ";");
}

void tradutor::finalizar() {
//	escritor.escrever("]);");
	escritor.fechar();
}
