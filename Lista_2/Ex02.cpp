#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Construa um programa que apresente todos os números (na horizontal) de 1 a 30.

int notas[30];

int main (){
setlocale(LC_ALL,"portuguese");
    
    for (int x=0; x<=29;x++){
        printf ("%d  ",x+1);  
    }
    printf ("\n");
system ("pause");
return 0;
}
