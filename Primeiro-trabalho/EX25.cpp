//algoritmo "ex25" 
// Função :  Faça um algoritmo que leia dois números e identifique se são iguais ou diferentes.  
//Caso eles sejam iguais imprima uma mensagem dizendo que eles são iguais. Caso sejam diferentes,  
//informe qual número é o maior, e uma mensagem que são diferentes. 
// Autor :  EU 
// Data :        
// Seção de Declarações  

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
	
	
	if(n1==n2){ //VERIFICA SE NUMEROS SÃO IGUAIS
		printf("Numeros iguais");
	}else if(n1>n2){ //VERIFICA SE O PRIMEIRO NUMERO É MAIOR QUE O SEGUNDO
		//SE FOR MAIOR
		printf("Os numero são diferentes e \n");
		printf("O primeiro numero é maior");
	}else { 
		// SE FOR MENOR APARECE NA TELA 
		printf("Os numero são diferentes e \n"); 
		printf("O segundo numero é maior");
	}
	return 0;	
}
