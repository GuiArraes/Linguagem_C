#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8) Ler duas vari�veis a apresentar 45% da soma destas.

float n1, n2;
float soma;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite um n�mero: ");
    scanf("%f",&n1);
    printf("Digite outro n�mero: ");
    scanf("%f",&n2);
    soma = (n1+n2)*0.45;

    printf("45%% de %.2f com %.2f � igual a %.2f\n",n1,n2,soma);

    system ("pause");
    return 0;
}
