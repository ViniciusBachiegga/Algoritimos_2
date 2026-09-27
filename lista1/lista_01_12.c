//Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a
//taboada de 1 até N. Mostre a tabuada na forma:
//1 x N = N
//2 x N = 2N
//N x N = N2

#include <stdio.h>

void tabuada(int num){
    int soma = 0;
    
    for(int j = 1; j <= num; j++){
        for(int u = 1; u <= num; u++){
            soma = u * j;
            
            printf("|%d|*|%d| = %d", u , j , soma);
            printf("\n");
        }
        printf("\n");
    }
}

int main(){

    int num;

    printf("Digite um numero para fazer as tabuadas:");
    scanf("%d", &num);

    tabuada(num);

    return 0;
}