#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//22) Elaborar um Programa em linguagem C que efetue a apresentação do valor
//da conversão em real (R$) de um valor lido em dólar (US$). O Programa em
//linguagem C deverá solicitar o valor da cotação do dólar e também a 
//quantidade de dólares disponíveis com o usuário.

float dolar, real, cotacao;

int main (){
    setlocale(LC_ALL, "portuguese");
    
    printf ("Quantidade de Dólar: ");
    scanf ("%f",&dolar);
    printf ("Cotação diaria do Dolar: ");
    scanf ("%f",&cotacao);
    
    real = cotacao*dolar;
    
    printf ("\n%.2f dolares vale %.2f reais \n\n",dolar, real);
    
system ("pause");

return 0;
}
