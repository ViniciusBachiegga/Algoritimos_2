//Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu
//conceito, conforme a tabela abaixo:
//Nota Conceito
//de 0,0 a 4,9 D
//de 5,0 a 6,9 C
//de 7,0 a 8,9 B
//de 9,0 a
//10,0 

#include <stdio.h>
void medias (float med){
    
    if(med <= 4.9){
        printf("Sua media: D");
    }
    if(med > 5.0 && med < 6.9){
        printf("Sua media: C");
    }
    if(med >= 7.0 && med <= 8.9){
        printf("Sua media: B");
    }
    if(med >= 9.0 && med <= 10.0){
        printf("Sua media: A");
    }
}
int main(){
    float med;

    printf("Para saber a sua 'media'\n");
    printf("Digite a sua media em notas:");
    scanf("%f", &med);

    medias(med);

    return 0;
}