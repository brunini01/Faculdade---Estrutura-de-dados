//algoritmo "ex27"                                                                    
// Fun��o : 27. A concession�ria de ve�culos "CARANGO" est� vendendo os seus ve�culos com desconto.  
// Fa�a um algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente.  
// O desconto dever� ser calculado sobre o valor do ve�culo de acordo com o combust�vel (�lcool - 25%, gasolina - 21% ou diesel -14%).  
// Com valor do ve�culo zero encerra entrada de dados. Informe total de desconto e total pago pelos clientes.  
// Autor :  EU 
// Se��o de Declara��es  

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
        printf("O valor do carro � zero. Encerrando o programa.\n");
        exit(0); // Esta linha encerrar� o programa imediatamente
    }
	
	//PERGUNTA QUAL O COMBUSTIVEL DO CARRO E ARMAZENA A INFORMA��O
    printf("Digite o combust�vel do carro (A para �lcool, G para gasolina e D para diesel): ");
    scanf(" %c", &combustivel);

	//RECEBE A INFORMA��O DO COMBUSTIVEL E VE QUAL O DESCONTO CORRETO
    if (combustivel == 'A' || combustivel == 'a') {
        desconto = valorCarro * 0.25;
    } else if (combustivel == 'G' || combustivel == 'g') {
        desconto = valorCarro * 0.21;
    } else if (combustivel == 'D' || combustivel == 'd') {
        desconto = valorCarro * 0.14;
    } else { //CASO N�O DIGITE O COMBUSTIVEL CORRETAMENTE FECHA O PROGRAMA
        printf("Op��o de combust�vel inv�lida.\n");
        exit(1); // Encerra o programa com um c�digo de erro (n�o zero)
    }
	
	//FAZ O CALCULO DO VALOR DO CARRO E MOSTRA NA TELA O DESCONTO E O VALOR A SER PAGO
    valorCarro = valorCarro - desconto;
    printf("O valor do desconto � %f \n", desconto);
    printf("O valor total � %f \n", valorCarro);

    return 0;
} 
