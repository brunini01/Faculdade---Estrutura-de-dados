//algoritmo "ex28"    
// Função :28. Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcionários de acordo com os  
// seguintes critérios:  
// a) 50% para aqueles que ganham menos do que três salários mínimos;  
// b) 20% para aqueles que ganham entre três até dez salários mínimos;  
// c) 15% para aqueles que ganham acima de dez até vinte salários mínimos;  
// d) 10% para os demais funcionários.  
// Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário reajustado.  
//Escrever o nome do funcionário, o reajuste e seu novo salário. Calcule quanto à empresa vai aumentar sua folha de pagamento.  
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
		
		//SOLICITA E ARMAZENA AS INFORMAÇÕES DO FUNCIONARIO
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
		printf("Seu aumento é: %d \n", aumento);
		printf("Seu novo salario é: %d \n", salario + aumento);
	}
	//MOSTRA NA TELA O AUMENTO MENSAL DA FOLHA SALARIAL
	printf("O Aumento da folha salario é de %d", reajuste);
	return 0;
}
