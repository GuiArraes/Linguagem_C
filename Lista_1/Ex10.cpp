#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//10) Ler três variáveis (A,B,C) e apresentar o resultado
//da seguinte fórmula: D=A+C-B.

float A, B, C, D;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite o valor de A: ");
    scanf("%f",&A);
    printf("Digite o valor de B: ");
    scanf("%f",&B);
    printf("Digite o valor de C: ");
    scanf("%f",&C);

    printf("D = A+C-B \n");
    printf ("D = %f + %f - %f \n",A,C,B);
    printf ("D = %f \n",A+C-B);

    system ("pause");
    return 0;
}
