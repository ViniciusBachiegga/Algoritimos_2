//Faça uma função que leia um número não determinado de valores positivos e retorna
//a média aritmética dos mesmos.

#include <stdio.h>
float mednum(int soma, int cont){
    int media = 0;
    
    media = soma / cont;

    return(media);
}
int main(){
    int num;
    int soma = 0;
    int i = 0;
    float media;

    printf("Caso queira saber a soma das medias digite zero (0)\n");
    while(num != 0){
        printf("Digite:");
        scanf("%d", &num);
        soma = soma + num;
        i++;
    }
    i = i - 1;

    media = mednum(soma , i);

    printf("A media eh de: %.2f", media);

    return 0;
}
