#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//17) Escrever um programa para determinar o consumo médio de um automóvel
//sendo fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.

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
