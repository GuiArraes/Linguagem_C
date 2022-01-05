#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//7) Ler uma variável e apresentar 60% da mesma.

float n1;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf ("Digite um número: ");
    scanf("%f",&n1);

    printf ("%.2f é 60%% maior que %.2f\n",n1*1.60,n1);

    system ("pause");
    return 0;
}
