// Ex: 38 
// Autor :  EU 
// Fun��o : 38. Em um curso de Ci�ncia da Computa��o a nota do estudante � calculada a partir de tr�s notas atribu�das, 
// respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. As notas variam, de 0 a 10 e 
// a nota final � a m�dia ponderada das tr�s notas mencionadas. A tabela abaixo fornece os pesos: 1,3,5

#include <stdio.h>    
#include <iostream>  


int main(){
	float n1, n2, n3, nota;
	
	//SOLICITA E ARMAZENA PRIMEIRA NOTA
	printf("Informe a nota do trabalho de laboratorio:\n");
	scanf("%f",&n1); 
	//SOLICITA E ARMAZENA SEGUNDA NOTA
	printf("Informe a nota da avaliacao semestral:\n"); 
	scanf("%f",&n2);
	//SOLICITA E ARMAZENA TERCEIRA NOTA
	printf("Informe a nota do exame final:\n");
	scanf("%f",&n3);
	
	//REALIZA CALCULO DA MEDIA PONDERADA
	nota=((n1*0.2) + (n2*0.3)+(n3*0.5));
	
	printf("A sua m�dia �: %f", nota);//EXIBE NA TELA O RESULTADO DA MEDIA
	
	system("pause > null");
}
