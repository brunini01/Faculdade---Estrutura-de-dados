//algoritmo "ex27"                                                                    
// Função : 27. A concessionária de veículos "CARANGO" está vendendo os seus veículos com desconto.  
// Faça um algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente.  
// O desconto deverá ser calculado sobre o valor do veículo de acordo com o combustível (álcool - 25%, gasolina - 21% ou diesel -14%).  
// Com valor do veículo zero encerra entrada de dados. Informe total de desconto e total pago pelos clientes.  
// Autor :  EU 
// Seção de Declarações  

#include <stdio.h>  
#include <iostream> 
#include <locale.h>

int main() {
    float valorCarro, desconto;
    char combustivel;


	//VALOR DE CARRO, SOLICITA E RECEBE
    printf("Digite o valor do carro:");
    scanf("%f", &valorCarro);

	// FECHA O PROGRAMA CASO O VALOR DO CARRO SEJA ZERO
    if (valorCarro == 0) {
        printf("O valor do carro é zero. Encerrando o programa.\n");
        exit(0); // Esta linha encerrará o programa imediatamente
    }
	
	//PERGUNTA QUAL O COMBUSTIVEL DO CARRO E ARMAZENA A INFORMAÇÃO
    printf("Digite o combustível do carro (A para álcool, G para gasolina e D para diesel): ");
    scanf(" %c", &combustivel);

	//RECEBE A INFORMAÇÃO DO COMBUSTIVEL E VE QUAL O DESCONTO CORRETO
    if (combustivel == 'A' || combustivel == 'a') {
        desconto = valorCarro * 0.25;
    } else if (combustivel == 'G' || combustivel == 'g') {
        desconto = valorCarro * 0.21;
    } else if (combustivel == 'D' || combustivel == 'd') {
        desconto = valorCarro * 0.14;
    } else { //CASO NÃO DIGITE O COMBUSTIVEL CORRETAMENTE FECHA O PROGRAMA
        printf("Opção de combustível inválida.\n");
        exit(1); // Encerra o programa com um código de erro (não zero)
    }
	
	//FAZ O CALCULO DO VALOR DO CARRO E MOSTRA NA TELA O DESCONTO E O VALOR A SER PAGO
    valorCarro = valorCarro - desconto;
    printf("O valor do desconto é %f \n", desconto);
    printf("O valor total é %f \n", valorCarro);

    return 0;
} 
