//algoritmo "ex28"    
// Fun��o :28. Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcion�rios de acordo com os  
// seguintes crit�rios:  
// a) 50% para aqueles que ganham menos do que tr�s sal�rios m�nimos;  
// b) 20% para aqueles que ganham entre tr�s at� dez sal�rios m�nimos;  
// c) 15% para aqueles que ganham acima de dez at� vinte sal�rios m�nimos;  
// d) 10% para os demais funcion�rios.  
// Leia o nome do funcion�rio, seu sal�rio e o valor do sal�rio m�nimo. Calcule o seu novo sal�rio reajustado.  
//Escrever o nome do funcion�rio, o reajuste e seu novo sal�rio. Calcule quanto � empresa vai aumentar sua folha de pagamento.  
// Autor : EU 

#include <stdio.h>  
#include <iostream>  

int main() {
	int salario, salarioMinimo = 1412, aumento;
	int dez, quinze, vinte, cinquenta, reajuste, novoSalario;
	
	//DEFININDO OS SALARIOS
	dez = salarioMinimo*21;
	quinze = salarioMinimo*20;
	vinte = salarioMinimo*10;
	cinquenta = salarioMinimo*3;
	
	reajuste = 0;
	
	char nome[30];
	
	for(int i=0; i < 3; i++){
		
		//SOLICITA E ARMAZENA AS INFORMA��ES DO FUNCIONARIO
		printf("Digite o seu nome:");
		scanf("%s", &nome);
		printf("Digite seu salario:");
		scanf("%d", &salario);
		
		
		//DECIDE QUAL VAI SER O AUMENTO DE ACORDO COM O SEU SALARIO
		if(salario < cinquenta){
			aumento = salario*0.5;
		}else if(salario >= cinquenta && salario <= vinte){
			aumento = salario*0.2;
		}else if(salario >= vinte && salario <= quinze){
			aumento = salario*0.15;
		}else if(salario > dez){
			aumento = salario*0.10;
		}
		
		//MOSTRA NA TELA O NOME, AUMENTO E NOVO SALARIO
		reajuste = reajuste + aumento;
		printf("Nome: %s \n", nome);
		printf("Seu aumento �: %d \n", aumento);
		printf("Seu novo salario �: %d \n", salario + aumento);
	}
	//MOSTRA NA TELA O AUMENTO MENSAL DA FOLHA SALARIAL
	printf("O Aumento da folha salario � de %d", reajuste);
	return 0;
}
