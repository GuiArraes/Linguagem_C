#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3) Elaborar um algoritmo que solicite e armazene em um vetor as idades de
 7 pessoas. Posteriormente apresente a M�dia das Idades e tamb�m a Maior Idade;
*/

int id[7], maior, soma;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    for (int i=0; i<7; i++){
        fflush(stdin);
        printf ("%d� nota: ",i+1);
        scanf ("%d",&id[i]);
        
        soma = soma + id[i];
        
        if (id[i] > maior){
           maior = id[i];
        }
    }
    
    printf ("A m�dia das notas : %d\nA maior nota : %d\n",soma/7, maior);
    
    system ("pause");
return 0;
}
