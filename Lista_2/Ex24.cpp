#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//24) Fa�a um Programa em linguagem C que receba um valor que foi depositado
//e exiba o valor com rendimento ap�s 87 dias. 
//Considere fixo o juro da poupan�a em 0,58% a. m.

float valor;
int dia;
float total;

int main (){
    setlocale(LC_ALL, "portuguese");
    printf ("Valor do dep�sito: ");
    scanf ("%f",&valor);
    printf ("Quantidade de dias na poupan�a: ");
    scanf ("%d",&dia);
    
    total = valor + (valor)*(dia/30)*(0.58/100);
    
    printf ("\nValor com rendimentos (%d dias): %.2f \n\n",dia, total);
  
system ("pause");

return 0;
}
