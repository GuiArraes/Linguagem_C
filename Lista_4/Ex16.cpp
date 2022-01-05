#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
/*
16) Construa um programa que solicite os dados de 10 alunos. 
O programa deverá perguntar o nome, a idade e as 2 notas bimestrais e 
a quantidade de faltas que o aluno teve ao longo do bimestre. 
Também deverá ser perguntado o valor da prova substitutiva 
(caso ele não faça, informar zero). 
Posteriormente, calcule a média e apresente todos os dados e a situação do aluno 
(aprovado ou reprovado). TODOS os dados deverão ficar armazenados em vetores.
A aprovação está condicionada com média mínima 6,0 e no máximo de 20 faltas 
(em um total de 80 no máximo).
Todos os dados de entrada deverão ser validados
*/
char nome[10][15], sit[10][10];
float n1[10], n2[10], sub[10], media[10];
int id[10], faltas[10];

/* Nota ao professor
   Fiz com rand para ser mais facil no desenvolvimento do código, pois não precisava ficar add
   dados na mão.
   E para você será mais fácil de ver o programa em execução
   No caso era só colocar uma linha de printf e outra se scanf nos laços de n1, n2, sub
   
   Para o nome do aluno deixei comentado, para não ter que ficar digirando 10 nomes
   Caso necessario é só tirar o comentario
*/

int main (){
    setlocale(LC_ALL,"portuguese");
    srand (time(NULL));
    for (int i=0; i<10; i++){
        /*
        printf ("%d° Aluno: ",i+1);
        gets (nome[i]);   
        */
        do{ //idade
           id[i] = rand()%50-10;
        }while (id[i]<16 || id[i]>40); 
        
        do{ //nota1
           n1[i] = rand()%30-10;
        }while (n1[i]<0 || n1[i] >= 10);  //Coloquei >=10 de proposito, na minha materia ninguém tira 10 =) 
        
        do{ //nota2
           n2[i] = rand()%30-10;
        }while (n2[i]<0 || n2[i] >= 10);  //Coloquei >=10 de proposito, na minha materia ninguém tira 10 =) 
        
        if (((n1[i]+n2[i])/2) < 6.0){ //sub
           do{ //sub
               sub[i] = rand()%30-10;
           }while (sub[i]<0 || sub[i] >= 10);  //Coloquei >=10 de proposito, na minha materia ninguém tira 10 =) 
        }
        else{
           sub[i] = 0;        
        } 
        
        for (int j=0; j<10; j++){
            if (n1[j] < n2[j] && n1[j] <= sub[j]){
               media[j] = (sub[j]+n2[j])/2.0;
            }
            if (n2[j] < n1[j] && n2[j] <= sub[j]){
               media[j] = (n1[j]+sub[j])/2.0;
            }
            if (sub[j] == 0){
               media[j] = (n1[j]+n2[j])/2.0;
            }
        }
        
        for (int j=0; j<10; j++){
            do{
               faltas[j] = rand()%81;
            }while (faltas[j] < 0 || faltas[j] > 80);
            if (faltas[j] <= 20){
               strcpy (sit[j],"APROVADO");
            }
            else{
               strcpy (sit[j],"REPROVADO");  
            }
        }
    }
    system ("cls");
    printf ("____________________________________________________________________________________________________________\n");
    for (int i=0; i<10; i++){
        printf ("%s:  |  Id: %.2d  |  N1: %4.2f  |  N2: %4.2f  |  Sub: %4.2f  |  Média: %4.2f  |  Faltas: %.2d  |  Situação: %s\n",
                nome[i],  id[i],n1[i], n2[i], sub[i], media[i], faltas[i], sit[i], nome[i]);
    }
    printf ("____________________________________________________________________________________________________________\n");
     
    system ("pause");
return 0;
}
