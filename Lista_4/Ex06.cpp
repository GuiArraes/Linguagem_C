#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*6) Construir um algoritmo que Leia um vetor de 8 elementos (V1)
 e preencha um outro (V2) em ordem inversa. Apresente o V2 no final
*/

int v1[8], v2[8];

int main (){
    setlocale(LC_ALL,"portuguese");
    
    srand (time(NULL));
    for (int i=0; i<15; i++){
        while (v1[i] < 5 || v1[i] > 25){
              v1 [i] = rand()%100;
        }
        v2[7-i] = v1[i];        
    }
    
    printf ("   V1        V2\n");
    for (int i=0; i<8; i++){
        printf ("%d° - %.2d || %d° - %.2d\n",i, v1[i], i, v2[i]);
    }
    
    system ("pause");
return 0;
}
