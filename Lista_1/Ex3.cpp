#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//3) Ler uma variável e apresentar seu dobro.

int n1;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Digite um número inteiro: ");
    scanf("%i",&n1);

    printf ("%i tem como dobro %i\n",n1,n1*2);

    system ("pause");
    return 0;
}
