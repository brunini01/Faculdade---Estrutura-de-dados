//algoritmo "ex9" 
// Fun��o : Fa�a um algoritmo que receba um valor que foi depositado e exiba o valor //com rendimento ap�s um m�s. 
// Considere fixo o juro da poupan�a em 0,70% a. m. 
// Autor :Renan (ChuckBerry) 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream> 
 
main(){
	float res, n1;
	
	//SOLICITA E ARMAZENA O VALOR DEPOISITADO
	printf("Digite o valor que foi depositado");
	scanf("%f", &n1);
	
	res = n1*0.07; // CALCULO DO JUROS
	printf("O valor ap�s um m�s aplicado �: %f", n1+res); //RESULTADO NA TELA
	
	system("pause > null");
}
