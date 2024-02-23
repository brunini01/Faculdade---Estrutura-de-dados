//algoritmo "ex18"
// Função : Faça um algoritmo que receba a idade de 75 pessoas e 
//mostre mensagem informando "maior de idade" e "menor de
// idade" para cada pessoa. Considere a idade a partir de 18 anos como maior de idade.
// Autor : EU
// Data :
// Seção de Declarações

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

main(){
	int maior;
	int idade = 0;
	char nome[30];
	
	printf("Digite 75 idades a partir de 18 \n"); //MOSTRA NA TELA
	
	for(int i=0; i < 3;i++){
		printf("Digite seu nome:"); //SOLICITA UM NOME
		scanf("%s", &nome); // RECEBE UM NOME
		printf("Digite sua idade:"); //SOLICITA IDADE1
		scanf("%d", &idade); //RECEBE IDADE
		if(idade>=18){ //CONDIÇÃO SE IDADE FOR MAIOR QUE 18
			printf("%s Maior de idade, \n", nome); // SE FOR VERDADE MOSTRA ISSO
		}else{
			printf("%s menor de idade, %s \n", nome); //SE FOR FALSA MOSTRA ISSO
		}		
	}
	system("PAUSE = null");
}
