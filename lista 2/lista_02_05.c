//Crie um programa que contenha um array de inteiros com cinco elementos.
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro
//de cada valor lido.

#include <stdio.h>
int main(){
    int v[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor para o vetor de posicao|%d|:", i);
        scanf("%d", &v[i]);        
    }
    for(int i = 0 ; i < 5; i++){
        int *pv;
        pv = v;
        soma = *(pv + i) * 2;

        printf("O resultado eh de: %d", soma);
        printf("\n");
    }
    return 0;
}
