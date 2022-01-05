#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//29) Escreva um Programa em linguagem C que solicite 3 números (distintos)
//e apresente o maior e o menor número entre eles.
int n[3], maior, menor;
bool flag;
int main (){
    setlocale(LC_ALL, "portuguese");
    maior = 0;
    menor = 999999999;
    for (int i=0; i<=2; i++){
        do {
           printf ("%d° número: ",i+1);
           scanf ("%d",&n[i]);
           flag = true;
           for (int j=0; j<=i-1; j++){
               if (n[i] == n[j]){
                  flag = false;
               }
           }
        }while (flag == false);
        if (maior < n[i]){
           maior = n[i];
        }
        if (menor > n[i]){
           menor = n[i];
        }
    }
    printf ("\n---Vetor---\n");
    for (int i=0; i<=2;i++){
        printf ("%d  ",n[i]);
    }
    printf ("\n-----------\n");
    printf ("Maior valor: %d \n",maior);
    printf ("Menor valor: %d \n\n",menor); 
system ("pause");
return 0;
}
