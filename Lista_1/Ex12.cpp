#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//12) Ler uma variável e acumular em outra um aumento de 25%, apresentado-a no final.
float n1, n2;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite um valor: ");
    scanf("%f",&n1);
    n2 = n1*1.25; 
    printf ("n2 é igual a %.2f \n",n2);

system ("pause");
return 0;
}
