#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//21) Ler uma temperatura em graus Celsius e apresent�-la convertida 
//em graus Fahrenheit. A f�rmula de convers�o �: F=1.8*C+32, sendo F 
//a temperatura em Fahrenheit e C a temperatura em Celsius.

float F, C;

int main (){
    setlocale(LC_ALL, "portuguese");
    printf ("Temperatura em �C: ");
    scanf ("%f",&C);
    
    F = 1.8*C+32;
    
    printf ("Temperatura em �F: %.2f \n\n",F);
    
system ("pause");

return 0;
}
