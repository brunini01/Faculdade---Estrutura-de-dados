//algoritmo "ex23" 
// Fun��o : Fa�a um algoritmo que receba um n�mero e mostre uma mensagem caso este n�mero seja maior que 80, menor 
// que 25 ou igual a 40. 
// Autor :  EU 
// Data :        
// Se��o de Declara��es  

#include <iostream> 
#include <conio.h> 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

main(){
	int n1;
	
	printf("Digite um numero:"); //PEDE UM NUMERO NA TELA
	scanf("%d", &n1); //RECEBE INFORMA��O
	
	if(n1>80){ //CONDI��O SE NUMERO MAIOR QUE 80
		printf("Maior do que 80"); //MOSTRA NA TELA 
	}else if(n1<25){ //CONDI��O SE NUMERO MENOR QUE 25
		printf("Menor do que 25");//MOSTRA NA TELA 
	}else if(n1==40){ //CONDI��O SE NUMERO IGUAL A 40
		printf("Numero igual a 40");//MOSTRA NA TELA 
	} else {
		printf("O numero n�o � maior que 80, menor que 25 ou igual a 40 "); //MOSTRA NA TELA SE AS CONDI��ES ANTEORIORES FOREM FALSAS
	}
	system("pause>null");
}
