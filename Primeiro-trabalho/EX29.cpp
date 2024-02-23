// Ex: 29 
// SELEÇÃO DE MES
// Autor : Renan D Costa 
 
#include <stdio.h>  
#include <iostream>  

int main()  {  

int mes;  
//PERGUNTA E ARMAZENA QUAL O NUMERO DO MES
printf("Entre com o numero do mes:\n");  
scanf("%d",&mes);  

//ESSE BLOCO TODO FAZ COM QUE CASO VOCE ESCOLHE UM NUMERO DO MES CORRETO, 
//ELE MOSTRARA NA TELA O MES DAQUELE NUMERO.
switch(mes){  
case 1:  
printf("Janeiro\n");  
break;  

case 2:
printf("Fevereiro\n");  
break;  

case 3:  
printf("Marco\n");  
break;  

case 4:  
printf("Abril\n");  
break;  

case 5:  
printf("Maio\n");  
break;  

case 6:  
printf("Junho\n");  
break;  

case 7:  
printf("Julho\n");  
break;  

case 8:  
printf("Agosto\n");  
break;  

case 9:  
printf("Setembro\n");  
break;  

case 10:  
printf("Outubro\n");  
break;  

case 11:  
printf("Novembro\n");  
break;  

case 12:
printf("dezembro\n");  
break;  

default:  
printf("Mes invalido\n");  
break;  

}  
system("Pause >NULL");  
}    
