#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//13) Ler duas vari�veis num�rica, e apresentar a soma das mesmas, acumulando ou n�o em outra vari�vel.
int n1, n2;

int main (){
setlocale(LC_ALL,"portuguese");
    
    printf("Digite um valor: ");
    scanf("%i",&n1);
    printf("Digite outro valor valor: ");
    scanf ("%i",&n2);
    
    printf ("%i + %i = %i \n",n1,n2,n1+n2);

system ("pause");
return 0;
}
