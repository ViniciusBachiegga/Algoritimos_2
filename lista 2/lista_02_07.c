//Elabore uma função que receba duas strings como parâmetros e verifique se a
//segunda string ocorre dentro da primeira. Use aritmética de ponteiros (*(n + i)) para acessar os
//caracteres das strings.
//strings --> é um vetor char
// '\0' significa que é o final da palavra na string

#include <string.h>
#include <stdio.h>
void verificar(char palavra1[12] , char palavra2[12]){
    char iguais[12];
    char *p1 = palavra1;
    char *p2 = palavra2;
    int cont_iguaia = 0;
    
    for(int i = 0; i < 12; i++){
        if(*(p2 + i) == *(p1 + i)){
            printf("%c", *(p2 + i));
        }
    }
}

int main(){

    char palavra1[12];
    char palavra2[12];

    printf("Digite uma palavra:");
    fgets(palavra1, 12, stdin);
    printf("\n");
    printf("Digite outra palavra:");
    fgets(palavra2, 12, stdin);
    printf("\n");

    verificar(palavra1 , palavra2);

    return 0;
}