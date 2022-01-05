#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//24) Ler 6 notas e apresentar a soma das mesmas.
int n1, n2, n3, mult;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Nota 1: ");
    scanf ("%i",&n1);
    printf ("Nota 2: ");
    scanf ("%i",&n2);
    printf ("Nota 3: ");
    scanf ("%i",&n3);

    
    mult = (n1*n2*n3);
    
    printf ("\n Multiplicação de %i x %i x %i = %i \n",n1,n2,n3, mult);

system ("pause");
return 0;
}
