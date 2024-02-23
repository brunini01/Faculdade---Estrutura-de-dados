// Ex: 36 
// Autor :  EU 
// Função :36. Faça um algoritmo que calcule o valor da conta de luz de uma pessoa. Sabe-se que o cálculo da conta de luz segue a tabela abaixo: 
//Tipo de Cliente Valor do KW/h 
//1 (Residência) 0,60 
//2 (Comércio) 0,48 
//3 (Indústria) 1,29 

#include <stdio.h>  
#include <iostream>  

int main() {
	char  d;
	float consumo;
	
	
	//RECEBE E ARMAZENA CONSUMO E A OPÇÃO DA TABELA DE LUZ
	printf("Digite o valor de KW/h utilizados:");
	scanf("%f", &consumo);
	printf("Digite R para Residencia, C para comercio, I para industria:");
	scanf("%s", &d);
	
	
	switch(d){
		
		//CASO SEJA COMERCIO
		case 'c':
		case 'C':
		printf("O valor da sua conta de luz é: %f", consumo*0.48);
		break;
		//CASO SEJA RESIDENCIA
		case 'r':
		case 'R':
		printf("O valor da sua conta de luz é: %f", consumo*0.6);
		break;
		//CASO SEJA INDUSTRIA
		case 'i':
		case 'I':
		printf("O valor da sua conta de luz é: %f", consumo*1.29);
		break;
		//CASO OPÇÃO ERRADA
		default:
			printf("Opção invalida");
		break;				
	}
	
	return 0;	
}
