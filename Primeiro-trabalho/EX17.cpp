//algoritmo "ex17"
// Fun��o : Ler 80 n�meros e ao final informar quantos n�mero(s) est(�)�o no intervalo entre 10 (inclusive) e 150 (inclusive).
// Autor : EU
// Data :
// Se��o de Declara��es

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

int main(){
	int i,n1;
	int intervalo = 0;
	
	printf("Digite um numero:"); 
		for(i=0; i<80;i++){	//LA�O DE REPETI��O PARA DECLARAR OS 80 NUMEROS
			printf("Numero %d: ", i + 1); //PEDE NUMERO NA TELA
			scanf("%d", &n1 ); //RECEBE NUMERO
			if (n1>=10 && n1<=150){ //ANALISA SE NUMERO EST� ENTRE 10 E 150
			intervalo++;} //ADICIONA 1 NO CONTADOR CASO SEJA POSITIVO
	}
		printf("%d", intervalo); //MOSTRA RESULTADO DA CONTAGEM
		system("PAUSE > null");
}
	

