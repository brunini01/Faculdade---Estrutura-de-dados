// Algoritimo 16 
// m�dia (aritm�tica), informar o nome e sua men��o aprovado (media >= 7), Reprovado (media <=5) e Recupera��o 
// (media entre 5.1 a 6.9). 
// Autor : EU 
// Data : 
// Se��o de Declara��es

#include <stdio.h> 
#include <conio.h> 
#include <math.h>
#include <iostream>

main(){
	float nota, media, i, cal;
	char nome[40];
	
	printf("Digite seu nome:"); //SOLICITA NOME DO ALUNO
	scanf ("%s", nome); // RECEBE NOME DO ALUNO
	{
		for( i=1; i<=3; i++){ //LA�O DE REPETI��O PARA RECEBER AS TODAS			
			printf("Digite suas notas:"); //SOLICITA AS NOTAS
			scanf("%f", &nota); // ESCANEIA AS NOTAS
			media = ((media)+(nota)); // SOMA TODAS AS NOTAS
		}
			cal=((media)/(3.0)); //FAZ CALCULO DAS NOTAS
			printf("%f", cal); // ARMAZENA A MEDIA
			
			if(cal>=7.0){ // CONDI��O PARA APROVADO
				printf("Nome: %s \n", nome); // EXIBE NOME DO ALUNO
				printf("Aprovado"); //EXIBE APROVADO 
			}	
			else if(cal>=5.1 && cal<=6.9){ // CONDI��O PARA RECUPERA��O
				printf("Nome: %s\n", nome); // EXIBE NOME DO ALUNO
				printf("Recupera��o"); //EXIBE RECUPERA��O
			}
			else{ // SE N�O CORRESPONDER A NENHUMA DAS CONDI��ES ANTERIORES:
				printf("Nome: %s\n", nome); // EXIBE NOME DO ALUNO
				printf("Reprovado"); // EXIBE REPROVADO
			}
		}
		system("Pause > null");
}
