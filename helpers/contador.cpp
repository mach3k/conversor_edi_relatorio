#include <math.h>
#include "contador.h"
#include "escritor.h"
#include "conversor.h"

/* Projeto de Matemática Discreta - BSI17
   Professor: Rafael Carlos Vélez Benito
   Alunos...: Marcelo Ramos Machado
*/

contador::contador() {
    log.escrever("Dividendo;Divisor;Valor;Resto");
}

//a) adição de termos da esquerda para a direita.
long double contador::execEsqDir(){
	soma = 0;
	long double totalResto = 0;
	
	cout << "Soma da esquerda para a direita";
	
//	log.escrever("exec;esq;dir");
	
	for (n=1; n<=10000; n++)
    {
//  	## Trecho com passo-a-passo
    	long double sinal     = pow(-1, n + 1);
    	long double dividendo = (1 * sinal);
    	long double valor     = dividendo / n;
    	long double resto     = fmod(dividendo, n);
		soma                  = soma + valor;
		totalResto           += resto;
		
		log.escrever(conversor::doubleToStr(dividendo) + ";" + conversor::doubleToStr(n) + ";" 
			+ conversor::doubleToStr(valor, 30) + ";" + conversor::doubleToStr(resto, 30));
//   	## fim do trecho com passo-a-passo
		
//   	## Código refatorado
//		soma += (double)(1 * pow(-1, n + 1)) / n;
    }
    
    log.escrever("Total da soma: " + conversor::substVirgula(conversor::doubleToStr(soma, 30)));
    log.escrever("Total do resto: " + conversor::doubleToStr(totalResto, 30));
    log.fechar();
    
    cout << "Resto da divisao: " << totalResto << endl;
    
    return soma;
}

////b) adição de termos da direita para a esquerda.
long double contador::execDirEsq(){
	soma = 0;
	long double totalResto = 0;
	
	cout << "Soma da direita para a esquerda";
	
//	log.escrever("exec;dir;esq");
	
    for (n=10000; n>=1; n--)
    {
//   	## Trecho com passo-a-passo
		long double sinal     = pow(-1, n + 1);
    	long double dividendo = (1 * sinal);
    	long double valor     = dividendo / n;
    	long double resto     = fmod(dividendo, n);
		soma                  = soma + valor;
		totalResto           += resto;
		
		log.escrever(conversor::doubleToStr(dividendo) + ";" + conversor::doubleToStr(n) + ";" 
			+ conversor::doubleToStr(valor, 30) + ";" + conversor::doubleToStr(resto, 30));
//   	## fim do trecho com passo-a-passo

//   	## Código refatorado		
//		soma += (double)(1 * pow(-1, n + 1)) / n;
    }
    
    log.escrever("Total da soma: " + conversor::substVirgula(conversor::doubleToStr(soma, 30)));
    log.escrever("Total do resto: " + conversor::doubleToStr(totalResto, 30));
    log.fechar();
    
    cout << "Resto da divisao: " << totalResto << endl;
    
    return soma;
}

//c) adição separada dos termos positivos e dos termos negativos, da esquerda para a direita.
long double contador::execEsqDirSep(){
	soma = 0;
	long double totalResto = 0;
	
	cout << "Soma da esquerda para a direita, separando os positivos dos negativos";
	
    for (n=1; n<=10000; n++)
    {
//   	## Trecho com passo-a-passo
    	long double sinal     = pow(-1, n + 1);
    	long double dividendo = (1 * sinal);
    	long double valor     = dividendo / n;
    	long double resto     = fmod(dividendo, n);
		totalResto           += resto;
		
		if (sinal > 0)
			positivos += valor;
		else
			negativos += valor;
		
		log.escrever(conversor::doubleToStr(dividendo) + ";" + conversor::doubleToStr(n) + ";" 
			+ conversor::doubleToStr(valor, 30) + ";" + conversor::doubleToStr(resto, 30));
//   	## fim do trecho com passo-a-passo
    }
    
    cout << "Total positivos: " << positivos << endl;
    cout << "Total negativos: " << negativos << endl;
	
	soma = positivos + negativos;
    
    log.escrever("Total da soma: " + conversor::substVirgula(conversor::doubleToStr(soma, 30)));
    log.escrever("Total do resto: " + conversor::doubleToStr(totalResto, 30));
    log.fechar();
    
    cout << "Resto da divisao: " << totalResto << endl;
    
    return soma;
}

//d) adição separada dos termos positivos e dos termos negativos, da direita para a esquerda
long double contador::execDirEsqSep(){
	soma = 0;
	long double totalResto = 0;
	
	cout << "Soma da direita para a esquerda, separando os positivos dos negativos";
	
	for (n=10000; n>=1; n--)
    {
//    	## Trecho com passo-a-passo
		long double sinal     = pow(-1, n + 1);
    	long double dividendo = (1 * sinal);
    	long double valor     = dividendo / n;
    	long double resto     = fmod(dividendo, n);
		totalResto           += resto;
		
		if (sinal > 0)
			positivos += valor;
		else
			negativos += valor;
		
		log.escrever(conversor::doubleToStr(dividendo) + ";" + conversor::doubleToStr(n) + ";" 
			+ conversor::doubleToStr(valor, 30) + ";" + conversor::doubleToStr(resto, 30));
//    	## fim do trecho com passo-a-passo
    }
    
    cout << "Total positivos: " << positivos << endl;
    cout << "Total negativos: " << negativos << endl;
	
	soma = positivos + negativos;
    
    log.escrever("Total da soma: " + conversor::substVirgula(conversor::doubleToStr(soma, 30)));
    log.escrever("Total do resto: " + conversor::doubleToStr(totalResto, 30));
    log.fechar();
    
    cout << "Resto da divisao: " << totalResto << endl;
    
    return soma;
}
