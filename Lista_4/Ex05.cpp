#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*5) Construir um programa que Leia um vetor de 15 elementos inteiro
 (entre 5 e 25), iniciando a partir do último elemento (15º).
*/

int num[15], cont;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    cont = 0;
    srand (time(NULL));
    for (int i=0; i<15; i++){
        while (num[i] < 5 || num[i] > 25){
              num [i] = rand()%100; //muda esse valor para ver o que acontece com a quantidade de sorteio
              cont++;
        }
    }
    
    for (int i=0; i<15; i++){
        printf ("%d° - %.2d\n",14-i, num[14-i]);
        }
    
    printf ("\nForam sorteados %d números aleatórios.\n",cont);
    
    system ("pause");
return 0;
}
