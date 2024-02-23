//algoritmo "ex23" 
// Função : Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor 
// que 25 ou igual a 40. 
// Autor :  EU 
// Data :        
// Seção de Declarações  

#include <iostream> 
#include <conio.h> 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

main(){
	int n1;
	
	printf("Digite um numero:"); //PEDE UM NUMERO NA TELA
	scanf("%d", &n1); //RECEBE INFORMAÇÃO
	
	if(n1>80){ //CONDIÇÃO SE NUMERO MAIOR QUE 80
		printf("Maior do que 80"); //MOSTRA NA TELA 
	}else if(n1<25){ //CONDIÇÃO SE NUMERO MENOR QUE 25
		printf("Menor do que 25");//MOSTRA NA TELA 
	}else if(n1==40){ //CONDIÇÃO SE NUMERO IGUAL A 40
		printf("Numero igual a 40");//MOSTRA NA TELA 
	} else {
		printf("O numero não é maior que 80, menor que 25 ou igual a 40 "); //MOSTRA NA TELA SE AS CONDIÇÕES ANTEORIORES FOREM FALSAS
	}
	system("pause>null");
}
