#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//17) Escrever um programa para determinar o consumo m�dio de um autom�vel
//sendo fornecida a dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto.

float dis, comb, consumo;

int main (){
    printf ("Distancia percorrida (km): ");
    scanf ("%f",&dis);
    printf ("Consumo de combustivel (L): ");
    scanf ("%f",&comb);
    
    consumo = dis/comb;
    
    printf ("\nConsumo medio de combustivel %.3f km/L \n\n",consumo);
    
system ("pause");

return 0;
}
