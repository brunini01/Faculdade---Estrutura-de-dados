//algoritmo "ex20"
// Função : A concessionária de veículos CARANGO VELHO está vendendo os seus veículos com desconto. Faça um
// algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente de vários carros. O desconto
// deverá ser calculado de acordo com o ano do veículo. Até 2000 - 12% e acima de 2000 - 7%.
//O sistema deverá perguntar se deseja continuar calculando desconto até que a resposta seja: “(N) Não” . Informar total de carros com ano até 2000 e total geral.
// Autor : EU
// Data :
// Seção de Declarações

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>

main(){
	int desconto, valorPago = 0, valorCarro, total = 0, anoCarro;
	char nao;
	
	do{
	printf("Digite o ano do carro: "); //BLOCA PARA RECEBER ANO DO CARRO
    scanf("%d", &anoCarro); //BLOCA PARA RECEBER ANO DO CARRO
		
	if(anoCarro <= 2000){ //SE ANO DO CARRO É MENOR QUE 2000 FAÇA
		
		
		printf("Digite o valor do carro: ");  //SOLICITA VALOR DO CARRO
		scanf("%d", &valorCarro); 
		desconto = valorCarro*0.12; //CALCULO DO DESCONTO
		valorCarro = valorCarro-desconto; //CALCULO DO DESCONTO EM CIMA DO VALOR DO CARRO
		printf("Valor do desconto: %d \n", desconto); //MOSTRA O DESCONTO NA TELA 
		printf("Valor a ser pago com desconto: %d \n", valorCarro); //MOSTRA O VALOR A SER PAGO NA TELA 
		total++; //CONTADOR DE CARROS ABAIXO DE 2000
	}else{
		printf("Digite o valor do carro: "); //SOLICITA VALOR DO CARRO
		scanf("%d", &valorCarro);
		desconto = valorCarro*0.07;//CALCULO DO DESCONTO
		valorCarro = valorCarro-desconto;//CALCULO DO DESCONTO EM CIMA DO VALOR DO CARRO
		printf("Valor do desconto: %d \n", desconto);//MOSTRA O DESCONTO NA TELA 
		printf("Valor a ser pago com desconto: %d \n" , valorCarro);//MOSTRA O VALOR A SER PAGO NA TELA 
	} 
	printf("Digite N para encerrar o programa ou S para continuar: "); //PERGUNTA SE QUER CONTINUAR OU NÃO
	scanf("%s", &nao);
} while (nao != 'n' && nao != 'N'); //CONDIÇÃO PARA CONTINUAR OU NÃO
printf("Total de carro com ano abaixo de 2000: %d \n", total); //MOSTRA NA TELA O NUMERO DE CARROS ABAIXO DE 2000
return 0;
}

