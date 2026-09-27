//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
//teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>
int main(){

    int a;
    int b;

    printf("Digite o valor da variavel A:");
    scanf("%d", &a);
    printf("\n");
    printf("Digite o valor da variavel B:");
    scanf("%d", &b);

    int *pa;
    int *pb;
    pa = &a;
    pb = &b;


    printf("O  endereco  de memoria da variavel A eh: %p", &pa);
    printf("\n");
    printf("O  endereco  de memoria da variavel B eh: %p", &pb);
    printf("\n");

    if(&a > &b){
        printf("O endereco de memoria da vvariavel A eh maior q o da veriavel B");
    }else{
        printf("O endereco de memoria da vvariavel B eh maior q o da veriavel A"); 
    }

    return 0;

}