#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//24) Ler 6 notas e apresentar a soma das mesmas.
float n1, n2, n3,n4, n5, n6, soma;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Nota 1: ");
    scanf ("%f",&n1);
    printf ("Nota 2: ");
    scanf ("%f",&n2);
    printf ("Nota 3: ");
    scanf ("%f",&n3);
    printf ("Nota 4: ");
    scanf ("%f",&n4);
    printf ("Nota 5: ");
    scanf ("%f",&n5);
    printf ("Nota 6: ");
    scanf ("%f",&n6);
    
    soma = (n1+n2+n3+n4+n5+n6);
    
    printf ("\n Soma das 6 notas: %.2f \n", soma);

system ("pause");
return 0;
}
