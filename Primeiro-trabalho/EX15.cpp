//algoritmo "ex15" 
// Fun��o : Fa�a um algoritmo que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200. 
// Autor : EU 
// Data : 
// Se��o de Declara��es 

#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream>

main(){
	float n1;
	
	printf("Digite um numero inteiro:"); //SOLICITA UM NUMERO NA TELA
	scanf("%f", &n1); // RECEBE UM NUMERO NA TELA
	if(n1>=100 && n1<=200) //VERIFICA SE N1 EST� ENTRE 100 E 200
	printf("O numero est� entre 100 e 200"); //CASO ESTEJA ENTRE 100 E 200
	else
	printf("O numero n�o est� entre 100 e 200"); //CASO N�O ESTEJA
	system("PAUSE > null");
}
