#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//5) Ler uma variável e apresentar sua metade.

float n1;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Digite um número: ");
    scanf("%f",&n1);

    printf ("%.2f é a metade de %.2f\n",n1/2,n1);

    system ("pause");
    return 0;
}
