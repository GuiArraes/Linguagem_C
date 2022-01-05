#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*7) Faça um programa que Leia um vetor (V1) de 10 elementos numéricos e
 preencha um outro (V2) contendo em cada célula o dobro de V1, 
 e em seguida um terceiro vetor (V3) contendo em cada célula a metade de V1.
*/


int v1[10], v2[10];
float v3[10];

int main (){
    setlocale(LC_ALL,"portuguese");
    
    srand (time(NULL));
    for (int i=0; i<10; i++){
        v1[i] = rand()%100; //Nota ao professor: Vou continuar gerando os números com o rand para agilizar
        
        v2[i] = 2*v1[i];  
        
        v3[i] = v1[i]/2.0;    
    }
    
    printf ("   V1        V2           V3\n");
    for (int i=0; i<10; i++){
        printf ("%d° - %.2d || %d° - %.3d || %d° - %.2f\n",i, v1[i], i, v2[i], i, v3[i]);
    }
    
    system ("pause");
return 0;
}







