#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//4) Ler uma variável e apresentar seu Triplo.

int n1;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Digite um número inteiro: ");
    scanf("%i",&n1);

    printf ("%i tem como triplo %i\n",n1,n1*3);

    system ("pause");
    return 0;
}
