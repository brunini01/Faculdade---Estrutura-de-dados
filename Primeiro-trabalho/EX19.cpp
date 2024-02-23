// Algoritimo 19
// Função : Escrever um algoritmo que leia o nome e o sexo de 56 pessoas e informe o nome e se ela é homem ou mulher. No
// final informe total de homens e de mulheres.
// Autor : EU
// Data :
// Seção de Declarações

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

int main(){	
	int n1,n2;
	char nome[30];
	char sexo;
	
	n1=0;
	n2=0;
	
	for(int i=0; i<3; i++){
		
		//SOLICITA E ARMAZENA EM UMA VARIAVEL
		printf("Digite um nome:");
		scanf("%s", &nome);
		
		//SOLICITA E ARMAZENA EM UMA VARIAVEL
		printf("Digite M para Masculino ou F para Feminino: ");
		scanf("%s", &sexo);
		
		switch(sexo) { //SE FOR IGUAL 
		
			// SE VARIAVEL IGUAL A M ou m FAÇA ISSO
			case 'M': case 'm':
			 	printf("Masculino %s\n", nome);
			 	n1++;
			 	break;
			 	
			// SE VARIAVEL IGUAL A F ou f FAÇA ISSO
			case 'F': case 'f':
			 	printf("Feminino %s\n", nome);
			 	n2++;
			 	break;
			
			// DIFERENTE DE UMA DAS OUTRAS OPÇÕES FAÇA ISSO
			default:
				printf("Outro \n");
				break;
		}
	}
	
	//MOSTRA NA TELA O TOTAL DE HOMENS E MULHERES
	printf("total de homens: %d \n", n1);
	printf("Total de mulheres: %d \n", n2);
	return 0;
}
