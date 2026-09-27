//Faça uma função que recebe por parâmetro o raio de uma esfera e calcule o seu
//volume (v = 4/3.P .R3)

#include <stdio.h>
#define pi 3.14

float r3;
float cont;

float calcular(float raio){
    float vol;

    r3 = raio * raio * raio;
    vol = (4 * pi * r3) / 3;
    
    return vol;
}

int main()
{

    float n;
    float volume;
    
    printf("\nDigite o valor do raio:");
    scanf("%f", &n);

    volume = calcular(n);

    printf("O volume da esfera eh de:%.2f", volume);

    return 0;
