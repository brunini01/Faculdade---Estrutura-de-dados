//algoritmo "ex14" 
// Fun��o : Escrever um algoritmo que leia dois valores inteiro distintos e informe qual � o maior. 
// Autor : EU 
// Data : 
// Se��o de Declara��es 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream>

main(){
	float n1,n2;
	
	printf("Digite o primeiro numero:"); //SOLICITA UM NUMERO
	scanf("%f", &n1); //RECEBE NUMERO
	printf("Digite o segundo numero:"); //SOLICITA UM NUMERO
	scanf("%f", &n2); //RECEBE NUMERO
	if (n1>n2) // SE N1 MAIOR QUE N2 FA�A
	printf("Primeiro numero maior"); //APARECE NA TELA CASO N1 MAIOR QUE N2
	else // SE N�O
	if(n2>n1) // SE N2 MAIOR QUE N1 FA�A
	printf("Segundo numero maior"); APARECE NA TELA CASO N2 MAIOR QUE N1
	else //SE NAO 
	printf("Numeros iguais"); // ESCREVE ISSO, SE OS  NUMEROS IGUAIS ESCREVE ISSO
	system("PAUSE > null");
	
}



