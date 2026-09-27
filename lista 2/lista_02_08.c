//Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
//vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h>
void preenchev(int h , int vetor[h]){
    int *p = vetor;

    for(int i = 0; i < h; i++){
        *(p +  i) = h;
        printf("%d\n", *(p + i));
    }
}
int main(){
    int h;

    printf("Digite o tamanho de um vetor:");
    scanf("%d", &h);
    int vetor[h];
    preenchev(h , vetor);    
}