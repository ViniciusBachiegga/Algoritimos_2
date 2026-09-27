//Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
//índices para percorrer o vetor, apenas aritmética de ponteiros.

#include <stdio.h>
void calcular(int n, int *p2){

    for(int i = 0; i < n; i++){
        printf("indice:|%d| , valor:|%d|\n", i , *(p2 + i));
    }
}

int main(){
    int n;
    
    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);
    int vetor[n];
    int *p = vetor;

    for(int i = 0; i < n; i++){
        printf("Digite um numero para o indicie|%d|:", i);
        scanf("%d", &*(p + i));
    }

    calcular(n , p);

    return 0;
}