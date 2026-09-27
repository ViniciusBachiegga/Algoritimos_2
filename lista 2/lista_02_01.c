//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços
//e exiba o maior endereço.

#include <stdio.h>
int main(){

    int *a;
    int *b;

    printf("O valor de memoria da variavel A eh de: %p", &a); // printa o valor de memoria da variavel
    printf("\n");
    printf("O valor de memoria da variavel B eh de: %p", &b); // printa o valor de memoria da variavel
    printf("\n");
    
    if(&a > &b){
        printf("O espaco de memoria da variavel A eh maior qua a da variavel B.");
    }else{
        printf("O espaco de memoria da variavel B eh maior qua a da variavel A.");
    }
    return 0;
}
