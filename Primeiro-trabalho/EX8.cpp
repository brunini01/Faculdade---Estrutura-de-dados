//algoritmo "ex8" 
// Fun��o : Elaborar um algoritmo que efetue a apresenta��o do valor da convers�o em //real (R$) de um valor lido em d�lar 
// (US$). O algoritmo dever� solicitar o valor da cota��o do d�lar e tamb�m a //quantidade de d�lares dispon�veis com o usu�rio. 
// Se��o de Declara��es 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream> 

main(){
	
	float dolar, real, dolarCotacao;
	
	//SOLICITA E RECEBE COTA��O DO DOLAR
	printf("Digite a cota��o do d�lar hoje:");
	scanf("%f", &dolarCotacao);
	//SOLICITA E RECEBE VALOR A SER CONVERTIDO
	printf("Qual o valor em d�lar que voce quer converter:");
	scanf("%f", &dolar);
	//MOSTRA NA TELA O RESULTADO
	printf("O valor da convers�o de dolar para real �: %f", dolar*dolarCotacao);
	
	system("pause > null");
}
