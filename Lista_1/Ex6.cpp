#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//6) Ler uma vari�vel e apresentar 25% da mesma.

float n1;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Digite um n�mero: ");
    scanf("%f",&n1);

    printf ("%.2f � 25%% maior que %.2f\n",n1*1.25,n1);

    system ("pause");
    return 0;
}
