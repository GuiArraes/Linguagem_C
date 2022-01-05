#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8) Ler duas variáveis a apresentar 45% da soma destas.

float n1, n2;
float soma;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite um número: ");
    scanf("%f",&n1);
    printf("Digite outro número: ");
    scanf("%f",&n2);
    soma = (n1+n2)*0.45;

    printf("45%% de %.2f com %.2f é igual a %.2f\n",n1,n2,soma);

    system ("pause");
    return 0;
}
