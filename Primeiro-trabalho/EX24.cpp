//algoritmo "ex24" 
// Fun��o : Fa�a um algoritmo que receba N n�meros e mostre positivo, negativo ou zero para cada n�mero. 
// Autor :  EU 
// Data :        
// Se��o de Declara��es  

#include <iostream> 
#include <conio.h> 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

main(){
	int n1, contador, n2;
	
	printf("Digite a quantidade de numeros que voce quer verificar: "); // PEDE QUANTOS NUMEROS SER�O VERIFICADOS
	scanf("%d", &n1); //ARMAZENA NUMERO
	
	for(int i=0; i<n1; i++){ //LA�O DE REPETI��O
		
		printf("Qual o numero que deseja verificar: "); //QUAL NUMERO SER� VERIFICADO
		scanf("%d", &n2); //ARMAZENA NUMERO
	if(n2>0){ 
		printf("Positivo \n"); //SE NUMERO FOR POSITIVO, APARECE NA TELA POSITIVO
	}else if(n2<0){ 
		printf("Negativo \n");//SE NUMERO FOR NEGATIVO, APARECE NA TELA NEGATIVO
	}else{ 
		printf("Zero \n"); // SE NUMERO FOR IGUAL A ZERO
	}	
}
return 0;
}
