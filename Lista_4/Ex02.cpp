#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*2) Ler um vetor com 21 elementos numéricos, e apresentar ao
 usuário os elementos em ordem inversa ao da entrada;
*/

int num[21];

int main (){
    setlocale(LC_ALL,"portuguese");
    
    
    for (int i=0; i<21; i++){
        fflush(stdin);
        printf ("%d° número: ",i+1);
        scanf ("%d",&num[i]);
    }
    
    printf ("Entrada   Inversa\n");
    for (int i=0; i<21; i++){
        printf ("%d           %d\n",num[i], num[20-i]);
    }

    system ("pause");
return 0;
}
