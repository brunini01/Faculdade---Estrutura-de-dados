//algoritmo "ex8" 
// Função : Elaborar um algoritmo que efetue a apresentação do valor da conversão em //real (R$) de um valor lido em dólar 
// (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a //quantidade de dólares disponíveis com o usuário. 
// Seção de Declarações 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream> 

main(){
	
	float dolar, real, dolarCotacao;
	
	//SOLICITA E RECEBE COTAÇÃO DO DOLAR
	printf("Digite a cotação do dólar hoje:");
	scanf("%f", &dolarCotacao);
	//SOLICITA E RECEBE VALOR A SER CONVERTIDO
	printf("Qual o valor em dólar que voce quer converter:");
	scanf("%f", &dolar);
	//MOSTRA NA TELA O RESULTADO
	printf("O valor da conversão de dolar para real é: %f", dolar*dolarCotacao);
	
	system("pause > null");
}
