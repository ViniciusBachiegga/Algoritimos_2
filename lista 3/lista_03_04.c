//Crie uma função void inverte_vetor(int *vetor, int tamanho) que inverta a ordem dos 
//elementos de um vetor original. 
//-Você  deve  criar  dois  ponteiros  locais  dentro  da  função:  um  inicio  apontando 
//para o primeiro elemento e um fim apontando para o último.
//Faça um laço onde o inicio avança (++) e o fim recua (--) trocando os valores de 
//lugar  até  que  os  ponteiros  se  cruzem  no  meio  do  vetor.  Não  utilize  variáveis 
//inteiras como índice.

#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho){

   int *inicio;
   int *final;
   int temp;

   inicio = vetor;
   final = vetor + (tamanho - 1);

   for(int i = 0; i < (tamanho / 2) ; i++){ // esse for eu  faço apenas para inverter os lugares 
    temp = *inicio;   
    *inicio = *final;
    *final = temp; 

    inicio++; // serve para andar pelo indice para  frente
    final--;  // serve para andar pelo indice pra traz
   }

   printf("O vetor invertido eh:\n");
   printf("\n");
   for(int i = 0; i < tamanho; i++){
        printf("\n%d", *(vetor + i));
   }
}


int main(){

    int tamanho;
    int t;

    printf("Digite o tamanho de seu vetor:");
    scanf("%d", &tamanho);

    int v[tamanho];
    int *vetor = v;

    for(int i = 0; i < tamanho; i++){
        printf("Digite um valor para [%d]:", i);
        scanf("%d", &t);
        *(vetor + i) = t;
    }

    printf("O vetor na forma original eh:\n");

    for(int i = 0; i < tamanho; i++){
        printf("\n");
        printf("\n%d", *(vetor + i));
    }

    inverte_vetor(vetor , tamanho);

}