//algoritmo "ex11" 
// Fun��o : Fa�a um algoritmo que receba o pre�o de custo de um produto e mostre o valor de venda. Sabe-se que o pre�o de 
// custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio. 
// Autor : EU 
// Data :    
// Se��o de Declara��es 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream>

main(){
	float custo,percent,venda; //VARIAVEL
	
	printf("==============Produtos Like a Boss==============\n"); //DECORATIVO
	printf("Digite o pre�o de custo do produto: "); //SOLICITA UM VALOR NA TELA PARA O USUARIO
	scanf("%f", &custo); //RECEBE VALOR
	printf("Digite o percentual para venda :"); //SOLICITA UM VALOR NA TELA PARA O USUARIO
	scanf("%f", &percent); //RECEBE VALOR
	percent = ((percent/100)*custo); //CALCULO DO PERCENTUAL DE ACR�SCIMO 
	venda = custo+percent; // CALCULO DO VALOR DE VENDA
	printf("============== <>Acrescimo<> ==============\n"); //DECORATIVO
	printf("O valor de venda ser�: %f \n", venda); //EXIBE NA TELA O VALOR DE VENDA 
	printf("============== <>Acrescimo<> ==============\n"); //DECORATIVO
	system("pause > null");
}
