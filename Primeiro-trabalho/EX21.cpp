//algoritmo "ex21" 
// Fun��o : Escrever um algoritmo que leia os dados de N pessoas (nome, sexo, idade e sa�de) 
// e informe se est� apta ou n�o para cumprir o servi�o militar obrigat�rio. Informe os totais. 
// Autor :  EU 
// Data :        
// Se��o de Declara��es  

#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream> 
#include <stdlib.h> 

main(){
	char nome[40], sexo, saude;
	int idade, n1, aptos = 0, inaptos = 0;
	
	printf("Digite o numero de pessoas que vao participar:"); //PEDE NUMERO DE PARTICIPANTES
	scanf("%d", &n1); //RECEBE NUMERO DE PARTICIPANTES
	
		for(int i=0; i < n1;i++){ //LA�O DE REPETI��O
			
			//BLOCO DE PEDIR E RECEBER INFORMA��ES 
			printf("Digite o nome da pessoa:");  /
			scanf("%s", &nome);
				
			printf("Digite a idade da pessoa:");
			scanf("%d", &idade);
				
			printf("Digite como est� sua saude B para boa e R para ruim:");
			scanf(" %c", &saude);
				
			printf("Digite o sexo da pessoa, M para masculino e F para feminino:");
			scanf(" %c", &sexo);  
			
			
			if ((idade >= 18 && (saude == 'B' || saude == 'b')) && (sexo == 'M' || sexo == 'm')) { // VARIAS CONDI��ES QUE TODAS PRECISAM SER VERDADEIRAS
            printf("Voce est� apto\n"); //SE TODAS FOREM VERDADEIRAS
            aptos++; //CONTADOR DE PESSOAS APTAS
			}else {
            printf("Voce est� inapto\n"); //SE TIVER UMA FALSA
            inaptos++; //CONTADOS DE PESSOAS INAPTAS
			}
		}
	printf("O numero de aptos s�o: %d \n", aptos);  //NUMERO DE PESSOAS APTAS
	printf("O numero de inaptos s�o: %d \n", inaptos); //NUMERO DE PESSOAS INAPTAS
	return 0;
}
