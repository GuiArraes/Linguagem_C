#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//9) Ler duas variáveis e apresentar a subtração de uma pela outra.

float n1, n2;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite um número: ");
    scanf("%f",&n1);
    printf("Digite outro número: ");
    scanf("%f",&n2);

    printf("%.2f menos %.2f é igual a %.2f\n",n1,n2,n1-n2);

    system ("pause");
    return 0;
}
