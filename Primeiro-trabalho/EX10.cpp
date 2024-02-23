//algoritmo "ex10" 
// Função : A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) //prestações sem juros. Faça um  
//algoritmo que  receba um valor de uma compra e mostre o valor das prestações. 
// Autor : EU 
// Data :    
// Seção de Declarações 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream> 
 
main(){
	float n1,n2; //DECLARA VARIVEL
	
	printf("==============Mamao JHOW==============\n"); //DECORATIVO
	printf("Digite o valor da comprar:"); //SOLICITA O VALOR DA COMPRA
	scanf("%f", &n1); // RECEBE O VALOR DA COMPRA
	printf("============== <>Parcelamento<> ==============\n"); //DECORATIVO
	printf("Em 5X: %f \n", n1/5); //FAZ O CALCULO E DIVIDE NA TELA 
	printf("============== <>Parcelamento<> ==============\n"); //DECORATIVO
	system("PAUSE > null");	
}
