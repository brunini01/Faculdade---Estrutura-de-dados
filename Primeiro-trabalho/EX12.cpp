//algoritmo "ex12" 
/* Fun��o : O custo ao consumidor de um carro novo � a soma do custo de f�brica  
com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos  
sobre o custo de f�brica, e depois a percentagem do distribuidor sobre o resultado).  
Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%.  
Escrever um algoritmo que leia o custo de f�brica de um carro e informe o custo ao consumidor do mesmo. */ 
// Autor : EU 
// Data :    
// Se��o de Declara��es 
 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <iostream> 

main (){
	float carro, distribuidor, imp;
	
	printf("Digite o valor do carro:"); // SOLICITA O VALOR DO CARRO
	scanf("%f", &carro); // RECEBE O VALOR DO CARRO
	imp = (0.45*(carro)); //CALCULO DO IMPOSTO
	carro = carro + imp; // ADICIONA O IMPOSTO AO VALOR DO CARRO
	distribuidor = (0.28*(carro)); //CALCULO DO DISTRIBUIDOR SOBRE CARRO+IMPOSTO
	carro = carro + distribuidor; //ADICIONA O VALOR DO DISTRIBUIDOR AO CARRO
	printf("O valor do final para o consumidor �: %f", carro); //MOSTRA O VALOR FINAL DO CARRO
	system("pause > null");
}
