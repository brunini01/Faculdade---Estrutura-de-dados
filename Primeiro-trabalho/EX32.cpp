// Ex: 32 
// Fun��o : 32. Dados tr�s valores A, B e C, em que A e B s�o n�meros reais e C � um caractere, pede-se para imprimir o  
// resultado da opera��o de A por B se C for um s�mbolo de operador aritm�tico; caso contr�rio deve ser  
// impressa uma mensagem de operador n�o definido. Tratar erro de divis�o por zero.  
// Autor : EU 

#include <stdio.h>  
#include <iostream>  

int main() {
	
	float n1,n2,res;
	char cara;
	
	//SOLICITA E ARMAZENA AS 3 INFORMA��ES PEDIDAS
	printf("abc:");
	scanf("%f", &n1);
	printf("abc:");
	scanf("%f", &n2);
	printf("abc:");
	scanf("%s", &cara);
	
	switch(cara){
		//CASO SEJA O SINAL DE MAIS
		case '+':
			res= n1+n2;
			printf("o resultado da soma �: %.2f\n", res);
			break;
		//CASO SEJA O SINAL DE MENOS
		case '-':
			res= n1-n2;
			printf("o resultado da subtra��o �: %.2f\n", res);
			break;
		//CASO SEJA O SINAL DE MULTIPLICA��O
		case '*':
			res= n1*n2;
			printf("o resultado da multiplica��o �: %.2f\n", res);
			break;
		//CASO SEJA O SINAL DE DIVIS�O
		case '/':
			 if (n2 != 0) {
                res = n1 / n2; // Convers�o para float antes da divis�o
                printf("O resultado da divis�o �: %.2f\n", res);
            } else { //CASO N�O SEJA NENHUM OPERADOR
                printf("Erro: divis�o por zero.\n");
            }
            break;
		default:
		printf("Operador aritm�tico n�o encontrado");
		break;				
	}
	return 0;
}
