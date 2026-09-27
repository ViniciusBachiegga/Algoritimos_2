//Uma matriz bidimensional em C é armazenada na memória como um vetor contínuo. 
//-Declare uma matriz int matriz[3][3] e preencha-a com valores de 1 a 9. 
//-Crie um ponteiro simples int *ptr = &matriz[0][0]; 
//-Utilizando  apenas  este  ponteiro  simples  e  aritmética  de  ponteiros  (ou  seja, 
//proibido  usar  laços  aninhados  com  índices  [i][j]),  percorra  os  9  elementos  na 
//memória e calcule a soma apenas dos elementos da diagonal principal. 
//Dica: A diagonal principal ocorre em saltos regulares de memória.

#include <stdio.h>


int main(){

    int m[3][3];
    int *ptr = &m[0][0]; // apontando para o endereço de memoria
    int t;
    int somadp = 0;

    
   for(int i = 0; i <= 8; i++){
        printf("Digite um numero de 0 a 9 [%d]:", i);
        scanf("%d", &t);
        *(ptr + i) = t;
   }

   for(int i = 0; i <= 8; i++){
        if(i % 4 == 0){
            somadp = somadp + *(ptr + i);
        }
   }

   printf("A soma da diagonal principal eh de: %d", somadp);
   
   return 0;
}