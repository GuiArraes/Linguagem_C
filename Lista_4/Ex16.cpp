#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
/*
16) Construa um programa que solicite os dados de 10 alunos. 
O programa dever� perguntar o nome, a idade e as 2 notas bimestrais e 
a quantidade de faltas que o aluno teve ao longo do bimestre. 
Tamb�m dever� ser perguntado o valor da prova substitutiva 
(caso ele n�o fa�a, informar zero). 
Posteriormente, calcule a m�dia e apresente todos os dados e a situa��o do aluno 
(aprovado ou reprovado). TODOS os dados dever�o ficar armazenados em vetores.
A aprova��o est� condicionada com m�dia m�nima 6,0 e no m�ximo de 20 faltas 
(em um total de 80 no m�ximo).
Todos os dados de entrada dever�o ser validados
*/
char nome[10][15], sit[10][10];
float n1[10], n2[10], sub[10], media[10];
int id[10], faltas[10];

/* Nota ao professor
   Fiz com rand para ser mais facil no desenvolvimento do c�digo, pois n�o precisava ficar add
   dados na m�o.
   E para voc� ser� mais f�cil de ver o programa em execu��o
   No caso era s� colocar uma linha de printf e outra se scanf nos la�os de n1, n2, sub
   
   Para o nome do aluno deixei comentado, para n�o ter que ficar digirando 10 nomes
   Caso necessario � s� tirar o comentario
*/

int main (){
    setlocale(LC_ALL,"portuguese");
    srand (time(NULL));
    for (int i=0; i<10; i++){
        /*
        printf ("%d� Aluno: ",i+1);
        gets (nome[i]);   
        */
        do{ //idade
           id[i] = rand()%50-10;
        }while (id[i]<16 || id[i]>40); 
        
        do{ //nota1
           n1[i] = rand()%30-10;
        }while (n1[i]<0 || n1[i] >= 10);  //Coloquei >=10 de proposito, na minha materia ningu�m tira 10 =) 
        
        do{ //nota2
           n2[i] = rand()%30-10;
        }while (n2[i]<0 || n2[i] >= 10);  //Coloquei >=10 de proposito, na minha materia ningu�m tira 10 =) 
        
        if (((n1[i]+n2[i])/2) < 6.0){ //sub
           do{ //sub
               sub[i] = rand()%30-10;
           }while (sub[i]<0 || sub[i] >= 10);  //Coloquei >=10 de proposito, na minha materia ningu�m tira 10 =) 
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
        printf ("%s:  |  Id: %.2d  |  N1: %4.2f  |  N2: %4.2f  |  Sub: %4.2f  |  M�dia: %4.2f  |  Faltas: %.2d  |  Situa��o: %s\n",
                nome[i],  id[i],n1[i], n2[i], sub[i], media[i], faltas[i], sit[i], nome[i]);
    }
    printf ("____________________________________________________________________________________________________________\n");
     
    system ("pause");
return 0;
}
