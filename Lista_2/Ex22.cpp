#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//22) Elaborar um Programa em linguagem C que efetue a apresenta��o do valor
//da convers�o em real (R$) de um valor lido em d�lar (US$). O Programa em
//linguagem C dever� solicitar o valor da cota��o do d�lar e tamb�m a 
//quantidade de d�lares dispon�veis com o usu�rio.

float dolar, real, cotacao;

int main (){
    setlocale(LC_ALL, "portuguese");
    
    printf ("Quantidade de D�lar: ");
    scanf ("%f",&dolar);
    printf ("Cota��o diaria do Dolar: ");
    scanf ("%f",&cotacao);
    
    real = cotacao*dolar;
    
    printf ("\n%.2f dolares vale %.2f reais \n\n",dolar, real);
    
system ("pause");

return 0;
}
