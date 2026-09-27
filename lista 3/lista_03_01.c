//Em C, funções retornam apenas um valor. Crie um programa que contorne isso
//usando ponteiros.
//-Implemente uma função chamada calcular_esfera que receba o raio de uma
//esfera e devolva sua área e seu volume.
//-Assinatura sugerida: void calcular_esfera(float raio, float *area, float *volume);
//-Na main, peça ao usuário o raio, chame a função e imprima os resultados.
//(Fórmulas: Área = 4 * PI * R² | Volume = (4/3) * PI * R³)

#include <stdio.h>
#define pi 3.14

float calcular_esfera(float raio , float *parea , float *pvolume){
    
    
    *parea = 4 * pi * (raio * raio);

    *pvolume = (4/3) * pi * (raio * raio * raio);  
}

int main(){
    float raio;
    float area;
    float volume;


    printf("Digite o raio da esfera para saber a area e o volume dela\n");
    printf("\n");
    printf("Digite o valor do raio:");
    scanf("%f", &raio);
    printf("\n");


    calcular_esfera (raio  , &area , &volume);
    
    printf("a area da esfera eh: %.2f", area);
    printf("\n");
    printf("O volume da esfera eh: %.2f", volume);

    return 0;
}