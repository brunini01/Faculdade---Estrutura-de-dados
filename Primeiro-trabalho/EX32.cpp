// Ex: 32 
// Função : 32. Dados três valores A, B e C, em que A e B são números reais e C é um caractere, pede-se para imprimir o  
// resultado da operação de A por B se C for um símbolo de operador aritmético; caso contrário deve ser  
// impressa uma mensagem de operador não definido. Tratar erro de divisão por zero.  
// Autor : EU 

#include <stdio.h>  
#include <iostream>  

int main() {
	
	float n1,n2,res;
	char cara;
	
	//SOLICITA E ARMAZENA AS 3 INFORMAÇÕES PEDIDAS
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
			printf("o resultado da soma é: %.2f\n", res);
			break;
		//CASO SEJA O SINAL DE MENOS
		case '-':
			res= n1-n2;
			printf("o resultado da subtração é: %.2f\n", res);
			break;
		//CASO SEJA O SINAL DE MULTIPLICAÇÃO
		case '*':
			res= n1*n2;
			printf("o resultado da multiplicação é: %.2f\n", res);
			break;
		//CASO SEJA O SINAL DE DIVISÃO
		case '/':
			 if (n2 != 0) {
                res = n1 / n2; // Conversão para float antes da divisão
                printf("O resultado da divisão é: %.2f\n", res);
            } else { //CASO NÃO SEJA NENHUM OPERADOR
                printf("Erro: divisão por zero.\n");
            }
            break;
		default:
		printf("Operador aritmético não encontrado");
		break;				
	}
	return 0;
}
