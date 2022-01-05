#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//23) Ler 3 notas e apresentar a média das mesmas.
float n1, n2, n3, media;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Nota 1: ");
    scanf ("%f",&n1);
    printf ("Nota 2: ");
    scanf ("%f",&n2);
    printf ("Nota 3: ");
    scanf ("%f",&n3);
    
    media = (n1+n2+n3)/3;
    
    printf ("Média: %.2f \n", media);

system ("pause");
return 0;
}
