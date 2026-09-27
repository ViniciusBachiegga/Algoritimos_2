//Implemente  um  algoritmo  de  ordenação  simples  (como  Bubble  Sort)  para  um  vetor 
//de inteiros usando ponteiros. 
//-A lógica que inverte dois elementos de lugar não pode estar dentro da função de 
//ordenação. Crie uma função auxiliar void swap(int *a, int *b). 
//-O  algoritmo  principal  deve  percorrer  o  vetor  usando  ponteiros,  e  sempre  que 
//dois valores precisarem ser invertidos, seus endereços devem ser enviados para a 
//função swap

#include <stdio.h>

void swap(int *a , int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int tamanho;
    int t;

    printf("Digite o tamanho de um vetor:");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    int *pvetor = vetor;

    printf("\n");

    for(int i = 0; i < tamanho; i++){
        printf("Digite um numero para o indice[%d]:", i);
        scanf("%d", &t);

        *(pvetor + i) = t;
    }

    for(int i = 0; i < tamanho; i++){
        for(int u = 0; u < tamanho;  u++){
            if(*(pvetor + i) < *(pvetor + u)){
                swap((pvetor + i) , (pvetor + u));
            }
        }
    }

    for(int i = 0; i < tamanho; i ++){
        printf("O vetor na ordem certa eh:[%d]\n", *(pvetor + i));
    }
}