//algoritmo "ex15" 
// Função : Faça um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200. 
// Autor : EU 
// Data : 
// Seção de Declarações 

#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream>

main(){
	float n1;
	
	printf("Digite um numero inteiro:"); //SOLICITA UM NUMERO NA TELA
	scanf("%f", &n1); // RECEBE UM NUMERO NA TELA
	if(n1>=100 && n1<=200) //VERIFICA SE N1 ESTÁ ENTRE 100 E 200
	printf("O numero está entre 100 e 200"); //CASO ESTEJA ENTRE 100 E 200
	else
	printf("O numero não está entre 100 e 200"); //CASO NÃO ESTEJA
	system("PAUSE > null");
}
