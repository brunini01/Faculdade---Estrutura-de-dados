//algoritmo "ex26" 
//Fa�a um algoritmo que leia um n�mero de 1 a 5 e escreva por extenso. 
// Caso o usu�rio digite um n�mero que n�o esteja neste intervalo, exibir mensagem: n�mero inv�lido. 
// Autor :  EU 
// Data :        
// Se��o de Declara��es  

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
		printf("Numero est� no intervalo de 1 a 5"); //APARECE NA TELA
	} else{ //SENAO NUMERO FOR MENOR QUE 1 E MAIOR QUE 5
		printf("Numero invalido"); //SE NUMERO FOR MENOR QUE 1 E MAIOR QUE 5, APARECE NA TELA
	}
	return 0;
}
