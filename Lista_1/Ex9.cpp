#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//9) Ler duas vari�veis e apresentar a subtra��o de uma pela outra.

float n1, n2;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite um n�mero: ");
    scanf("%f",&n1);
    printf("Digite outro n�mero: ");
    scanf("%f",&n2);

    printf("%.2f menos %.2f � igual a %.2f\n",n1,n2,n1-n2);

    system ("pause");
    return 0;
}
