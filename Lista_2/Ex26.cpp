#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//26) Fa�a um Programa em linguagem C que receba o pre�o de custo de um produto
//e mostre o valor de venda. Sabe-se que o pre�o de custo receber� um 
//acr�scimo de acordo com um percentual informado pelo usu�rio.

float valor, newValor, marg;

int main (){
    setlocale(LC_ALL, "portuguese");
    printf ("Valor de custo do produto: ");
    scanf ("%f",&valor);
    printf ("Margem de ganho do produto (%%): ");
    scanf ("%f",&marg);
    
    newValor = valor + (valor*marg)/100;
    
    printf ("\nValor de venda do produto: %.2f \n\n",newValor);
    
     
system ("pause");

return 0;
}
