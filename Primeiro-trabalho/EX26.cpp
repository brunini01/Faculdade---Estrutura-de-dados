//algoritmo "ex26" 
//Faça um algoritmo que leia um número de 1 a 5 e escreva por extenso. 
// Caso o usuário digite um número que não esteja neste intervalo, exibir mensagem: número inválido. 
// Autor :  EU 
// Data :        
// Seção de Declarações  

#include <iostream> 
#include <conio.h> 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

main() {
	int n1;
	
	//SOLICITA NUMERO PRA ANALISE
	printf("Digite um numero:");
	scanf("%d", &n1);
	
	if(n1>=1 && n1<=5){ //SE NUMERO FOR MAIOR-IGUAL A 1  OU MENOR-IGUAL A 5
		printf("Numero está no intervalo de 1 a 5"); //APARECE NA TELA
	} else{ //SENAO NUMERO FOR MENOR QUE 1 E MAIOR QUE 5
		printf("Numero invalido"); //SE NUMERO FOR MENOR QUE 1 E MAIOR QUE 5, APARECE NA TELA
	}
	return 0;
}
