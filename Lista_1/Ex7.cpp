#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//7) Ler uma vari�vel e apresentar 60% da mesma.

float n1;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Digite um n�mero: ");
    scanf("%f",&n1);

    printf ("%.2f � 60%% maior que %.2f\n",n1*1.60,n1);

    system ("pause");
    return 0;
}
