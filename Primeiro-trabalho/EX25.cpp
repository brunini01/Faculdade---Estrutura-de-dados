//algoritmo "ex25" 
// Fun��o :  Fa�a um algoritmo que leia dois n�meros e identifique se s�o iguais ou diferentes.  
//Caso eles sejam iguais imprima uma mensagem dizendo que eles s�o iguais. Caso sejam diferentes,  
//informe qual n�mero � o maior, e uma mensagem que s�o diferentes. 
// Autor :  EU 
// Data :        
// Se��o de Declara��es  

#include <iostream> 
#include <conio.h> 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

main(){
	int n1, n2;
	
	//BLOCO QUE SOLICITA E ARMAZENA OS NUMEROS VERIFICADOS
	printf("Digite um numero:");
	scanf("%d", &n1);
	printf("Digite digite outro numero:");
	scanf("%d", &n2);
	
	
	if(n1==n2){ //VERIFICA SE NUMEROS S�O IGUAIS
		printf("Numeros iguais");
	}else if(n1>n2){ //VERIFICA SE O PRIMEIRO NUMERO � MAIOR QUE O SEGUNDO
		//SE FOR MAIOR
		printf("Os numero s�o diferentes e \n");
		printf("O primeiro numero � maior");
	}else { 
		// SE FOR MENOR APARECE NA TELA 
		printf("Os numero s�o diferentes e \n"); 
		printf("O segundo numero � maior");
	}
	return 0;	
}
