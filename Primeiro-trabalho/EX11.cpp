//algoritmo "ex11" 
// Função : Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se que o preço de 
// custo receberá um acréscimo de acordo com um percentual informado pelo usuário. 
// Autor : EU 
// Data :    
// Seção de Declarações 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream>

main(){
	float custo,percent,venda; //VARIAVEL
	
	printf("==============Produtos Like a Boss==============\n"); //DECORATIVO
	printf("Digite o preço de custo do produto: "); //SOLICITA UM VALOR NA TELA PARA O USUARIO
	scanf("%f", &custo); //RECEBE VALOR
	printf("Digite o percentual para venda :"); //SOLICITA UM VALOR NA TELA PARA O USUARIO
	scanf("%f", &percent); //RECEBE VALOR
	percent = ((percent/100)*custo); //CALCULO DO PERCENTUAL DE ACRÉSCIMO 
	venda = custo+percent; // CALCULO DO VALOR DE VENDA
	printf("============== <>Acrescimo<> ==============\n"); //DECORATIVO
	printf("O valor de venda será: %f \n", venda); //EXIBE NA TELA O VALOR DE VENDA 
	printf("============== <>Acrescimo<> ==============\n"); //DECORATIVO
	system("pause > null");
}
