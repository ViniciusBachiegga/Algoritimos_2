//Crie um programa que contenha um array de float com 10 elementos. Imprima o
//endereço de cada posição desse array.

#include <stdio.h>
int main(){

    float v[10];
    
    for(int i = 0; i < 10; i++){
        float *pa;
        pa = &v[i];

        printf("A posicao |%d| tem o endereco de: %p", i , pa);
        printf("\n");
    }
    return 0;
}