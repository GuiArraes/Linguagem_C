#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//11) Encontrar e apresentar o valor para Z aplicando a seguinte fórmula: Z=(L+A * 2) / C.
float A, C, L, Z;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite um valor (A): ");
    scanf("%f",&A);
    printf ("Digite outro valor (C): ");
    scanf("%f",&C);
    printf ("Digite o último valor (L): ");
    scanf ("%f",&L);
    
    Z = (L+A*2)/C;
    
    printf ("Z = (L+A*2)/C \n");
    printf ("Z = %f \n",Z);

system ("pause");
return 0;
}
