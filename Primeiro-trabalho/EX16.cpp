// Algoritimo 16 
// média (aritmética), informar o nome e sua menção aprovado (media >= 7), Reprovado (media <=5) e Recuperação 
// (media entre 5.1 a 6.9). 
// Autor : EU 
// Data : 
// Seção de Declarações

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
		for( i=1; i<=3; i++){ //LAÇO DE REPETIÇÃO PARA RECEBER AS TODAS			
			printf("Digite suas notas:"); //SOLICITA AS NOTAS
			scanf("%f", &nota); // ESCANEIA AS NOTAS
			media = ((media)+(nota)); // SOMA TODAS AS NOTAS
		}
			cal=((media)/(3.0)); //FAZ CALCULO DAS NOTAS
			printf("%f", cal); // ARMAZENA A MEDIA
			
			if(cal>=7.0){ // CONDIÇÃO PARA APROVADO
				printf("Nome: %s \n", nome); // EXIBE NOME DO ALUNO
				printf("Aprovado"); //EXIBE APROVADO 
			}	
			else if(cal>=5.1 && cal<=6.9){ // CONDIÇÃO PARA RECUPERAÇÃO
				printf("Nome: %s\n", nome); // EXIBE NOME DO ALUNO
				printf("Recuperação"); //EXIBE RECUPERAÇÃO
			}
			else{ // SE NÃO CORRESPONDER A NENHUMA DAS CONDIÇÕES ANTERIORES:
				printf("Nome: %s\n", nome); // EXIBE NOME DO ALUNO
				printf("Reprovado"); // EXIBE REPROVADO
			}
		}
		system("Pause > null");
}
