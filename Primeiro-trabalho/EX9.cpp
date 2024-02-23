//algoritmo "ex9" 
// Função : Faça um algoritmo que receba um valor que foi depositado e exiba o valor //com rendimento após um mês. 
// Considere fixo o juro da poupança em 0,70% a. m. 
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
	printf("O valor após um mês aplicado é: %f", n1+res); //RESULTADO NA TELA
	
	system("pause > null");
}
