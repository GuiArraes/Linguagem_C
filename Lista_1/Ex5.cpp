#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//5) Ler uma vari�vel e apresentar sua metade.

float n1;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Digite um n�mero: ");
    scanf("%f",&n1);

    printf ("%.2f � a metade de %.2f\n",n1/2,n1);

    system ("pause");
    return 0;
}
