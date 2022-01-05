#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*8) Solicite ao usu�rio 5 n�meros inteiros, guarde-os em um vetor e em seguida
 apresente-os ao usu�rio. Finalmente,
 apresente tamb�m quantos elementos s�o negativos.
*/

int num[15], cont;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    cont = 0;
    srand (time(NULL));
    for (int i=0; i<5; i++){
        num [i] = (rand()%100)-50; //para ter a possibilidade de gerar n�meros aleat�rios negativos
        if (num[i] < 0){
           cont++;
        }   
    }
    
    for (int i=0; i<5; i++){
        printf ("%d� = %d\n",i, num[i]);
        }
    
    printf ("\nForam sorteados %d n�meros negativos.\n",cont);
    
    system ("pause");
return 0;
}
