// Ex: 35 
// Autor :  EU 
// Função :35. Elabore um algoritmo que, dada a idade de um nadador. Classifique-o em uma das seguintes categorias: 
//Infantil A = 5 - 7 anos 
//Infantil B = 8 - 10 anos 
//juvenil A = 11- 13 anos 
//juvenil B = 14 - 17 anos 
//Sênior = 18 - 25 anos 
//Apresentar mensagem "idade fora da faixa etária" quando for outro ano não contemplado. 

#include <stdio.h>  
#include <iostream> 
#include <string.h> 
main(){
	int idade;
	char categoria[15];
	
	printf("Digite a idade do nadador:");
	scanf("%d", &idade);
	
	// CONDIÇÃO IDADE DE 5 A 7
	if(idade >= 5 && idade <= 7){
		strcpy(categoria, "Infantil A");
	//IDADE DE 8 A 10
	}else if(idade >= 8 && idade <= 10){
		strcpy(categoria, "Infantil B");
	//IDADE DE 11 A 13	
	}else if(idade >= 11 && idade <= 13){
		strcpy(categoria, "Juvenil A");
	//IDADE DE 14 A 17	
	}else if(idade >= 14 && idade <= 17){
		strcpy(categoria, "Juvenil B");
	//IDADE DE 18 A 25
	}else if(idade >= 18 && idade <= 25){
		strcpy(categoria, "Sênior");
	//QUALQUER NUMERO ACIMA DE 25 IRÁ APARECER NA TELA O COMANDO ABAIXO	
	} else{
		printf("Idade fora faixa etária");
	}
	printf("Categoria: %s", categoria);
return 0;	
} 
