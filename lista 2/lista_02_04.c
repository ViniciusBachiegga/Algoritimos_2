//Crie um programa que contenha uma matriz de float com três linhas e três colunas.
//Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>
int main(){

    int m[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           int *pm;
           pm = &m[i][j];

           printf("O endereco da posicao |%d||%d| eh: %p", i , j , pm);
           printf("\n");
        }
        printf("\n");
    }
}
