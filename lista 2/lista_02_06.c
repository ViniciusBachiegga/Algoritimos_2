//Crie um programa que contenha um array com cinco elementos inteiros. Leia esse
//array do teclado e imprima o endereço das posições contendo valores pares.

#include <stdio.h>
int main(){
    int v[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor para a posicao|%d|:", i);
        scanf("%d", &v[i]);
    }
    
    printf("\n");

    for(int i = 0; i < 5; i++){
        if(v[i] % 2 == 0){
            int *pv;
            pv = v;
            printf("O numero par esta na posicao|%d| e tem endereco:|%p|", i , &v[i]);
            printf("\n \n");
        }else{
            printf("O numero na posicao|%d| NAO eh par", i);
            printf("\n \n");
        }
    }
    return 0;
}