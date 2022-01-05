#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*4) Construa um programa que preencha aleatoriamente um vetor
 com 20 elementos numéricos entre 5 e 100;
*/

int num[20], cont;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    cont = 0;
    srand (time(NULL));
    for (int i=0; i<20; i++){
        while (num[i] < 5 || num[i] > 100){
              num [i] = rand()%1000; //muda esse valor para ver o que acontece com a quantidade de sorteio
              cont++;
        }
        printf ("%d\n",num[i]);
    }
    
    printf ("\nForam sorteados %d números aleatórios.\n",cont);
    
    system ("pause");
return 0;
}
