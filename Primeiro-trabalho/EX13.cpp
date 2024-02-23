//algoritmo "ex13" 
// Função : Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 10. 
// Autor :Renan (ChuckBerry) 
// Data :    
// Seção de Declarações 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream> 
 
main() 
 { 
int numero; 

	//PEDE E ARMAZENA O NUMERO
	printf("Digite um numero: "); 
	scanf("%d",&numero); 
	//CONDIÇÃO SE NUMERO MAIOR DO QUE 10 FAÇA
	if(numero>10) 
	printf("Numero Positivo"); 
	else //CASO SEJA MENOR, NÃO FAZ NADA
	return 0; 
system("Pause>null"); 
}
