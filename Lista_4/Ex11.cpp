#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
11) Construa um programa que preencha automaticamente e aleatoriamente um vetor 
numérico com 10 elementos (não repetidos). Apresente o vetor no final.
*/

int num[10], cont;
bool flag;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    cont = 0;
    srand (time(NULL));
    for (int i=0; i<10; i++){
        do {
            cont++;
            flag = false;
            num [i] = rand()%100;
            for (int j=0; j<=i-1; j++){
                if (num[i] == num[j]){
                   flag = true;
                }
            }
        }while (flag == true);
        
    }
    
    for (int i=0; i<10; i++){
        printf ("%d\n",num[i]);
        }
    
    printf ("\nForam sorteados %d números aleatórios.\n",cont);
    
    system ("pause");
return 0;
}
