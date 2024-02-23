//algoritmo "ex14" 
// Função : Escrever um algoritmo que leia dois valores inteiro distintos e informe qual é o maior. 
// Autor : EU 
// Data : 
// Seção de Declarações 
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
	if (n1>n2) // SE N1 MAIOR QUE N2 FAÇA
	printf("Primeiro numero maior"); //APARECE NA TELA CASO N1 MAIOR QUE N2
	else // SE NÃO
	if(n2>n1) // SE N2 MAIOR QUE N1 FAÇA
	printf("Segundo numero maior"); APARECE NA TELA CASO N2 MAIOR QUE N1
	else //SE NAO 
	printf("Numeros iguais"); // ESCREVE ISSO, SE OS  NUMEROS IGUAIS ESCREVE ISSO
	system("PAUSE > null");
	
}



