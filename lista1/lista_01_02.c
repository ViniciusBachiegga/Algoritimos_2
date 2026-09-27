//Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo
//da fórmula de báskara e imprima as suas raízes, caso seja possível calcular.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular(float a , float b , float c){
    float delta;
    float baskara1;

    delta = ((pow(b, 2)) - (4 * a * c));

    baskara1 = (((b * (-1)) + sqrt(delta))  / (2 * a));

    return(baskara1);
}

float calcular2(float a , float b , float c){
    float delta;
    float baskara2;

    delta = ((pow(b, 2)) - (4 * a * c));

    baskara2 = (((b * (-1)) - sqrt(delta))  / (2 * a));

    return(baskara2);
}

int main(){

    float a;
    float b;
    float c;
    float x1;
    float x2;

    printf("Digite um valor para o A:");
    scanf("%f", &a);
    printf("\n");
    printf("Digite um valor para o B:");
    scanf("%f", &b);
    printf("\n");
    printf("Digite um valor para o C:");
    scanf("%f", &c);
    printf("\n");

    x1 = calcular(a , b , c);
    x2 = calcular2(a , b , c);

    printf("X1 = %.2f\n", x1);
    printf("X2 = %.2f", x2);

    return 0;
}