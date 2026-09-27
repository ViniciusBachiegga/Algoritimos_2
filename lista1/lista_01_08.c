//Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
//somatório de 1 até n: 1 + 2 + 3 + ... + n.

#include <stdio.h>
int somatorio(int num){
    int somatorio = 0;
    for(int i = 0; i <= num; i++){
        somatorio = somatorio + i;
    }

    return(somatorio);
}
int main(){
    int num;
    int soma;

    printf("Digite um numero em que voce queira o seu somatorio:");
    scanf("%d", &num);

    soma = somatorio(num);
    printf("o somatorio eh:%d", soma);

    return 0;
}
