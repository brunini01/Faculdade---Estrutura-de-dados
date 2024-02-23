//algoritmo "ex17"
// Função : Ler 80 números e ao final informar quantos número(s) est(á)ão no intervalo entre 10 (inclusive) e 150 (inclusive).
// Autor : EU
// Data :
// Seção de Declarações

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

int main(){
	int i,n1;
	int intervalo = 0;
	
	printf("Digite um numero:"); 
		for(i=0; i<80;i++){	//LAÇO DE REPETIÇÃO PARA DECLARAR OS 80 NUMEROS
			printf("Numero %d: ", i + 1); //PEDE NUMERO NA TELA
			scanf("%d", &n1 ); //RECEBE NUMERO
			if (n1>=10 && n1<=150){ //ANALISA SE NUMERO ESTÁ ENTRE 10 E 150
			intervalo++;} //ADICIONA 1 NO CONTADOR CASO SEJA POSITIVO
	}
		printf("%d", intervalo); //MOSTRA RESULTADO DA CONTAGEM
		system("PAUSE > null");
}
	

