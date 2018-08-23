#include <iostream>
#include <fstream>
#include <string>
#include "helpers/tradutor.h"

using namespace std;

int main(int argc, char** argv) {
	
	tradutor tradutor;
	string linha;
	ifstream arquivo ("retorno.ret");
	bool primeiraLinha = true;
	bool segundaLinha  = true;	
	
	if (arquivo.is_open()) {
		while ( getline (arquivo,linha) ) {
//			cout << linha << '\n';
			if(!segundaLinha)
				tradutor.traduzir(linha);
			
			if(!primeiraLinha && segundaLinha)
				segundaLinha = false;
			
			if (primeiraLinha){
				tradutor.primeiraLinha();
				primeiraLinha = false;
			}
		}
		
		tradutor.finalizar();
		arquivo.close();
	}
	else cout << "Falha ao abrir o arquivo";
	
//	ifstream myfile;
//    myfile.open("cid.csv");
//    while (myfile.good()){
//    	getline ( myfile, line, ',' );
//		cout << string (line) << endl;
//	}
//	myfile.close();
	
//	system("PAUSE");
	
	return 0;
}
