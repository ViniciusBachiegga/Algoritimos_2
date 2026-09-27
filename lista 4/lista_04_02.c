//Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior 
//esquerdo  e  o  ponto  inferior  direito  do  retângulo.  Cada  ponto  é  definido  por  uma 
//estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia 
//uma  estrutura  Retângulo  e  exiba  a  área  e  o  comprimento  da  diagonal  e  o  perímetro 
//desse retângulo.

#include <stdio.h>
#include <math.h>

    struct ponto{

        int x;
        int y;
    };

    struct retangulo{

        struct ponto coordenadas_se;
        struct ponto coordenadas_id;
    };


int main(){
    
    struct retangulo dados;

    int altura;
    int base;
    float diagonal;
    float perimetro;
    float area = 0;
    int x;
    int y;

    printf("Digite o X do ponto superior esquerdo:");
    scanf("%d", &dados.coordenadas_se.x);
    printf("\n");
    printf("Digite o Y do ponto superior esquerdo:");
    scanf("%d", &dados.coordenadas_se.y);

    printf("\n");

    printf("Digite o X do ponto inferior direito:");
    scanf("%d", &dados.coordenadas_id.x);
    printf("\n");
    printf("Digite o Y do ponto inferior direito:");
    scanf("%d", &dados.coordenadas_id.y);

    printf("\n");


    altura = dados.coordenadas_se.y - dados.coordenadas_id.y;
    base = dados.coordenadas_id.x - dados.coordenadas_se.x;

    area = base * altura;

    diagonal = sqrt((base * base) + (altura * altura));

    perimetro = (base * 2) + (altura * 2);

    printf("A base do retangulo eh:%d\n", base);
    printf("A altura do retangulo eh:%d\n", altura);
    printf("A area do retangulo eh:%.2f\n", area);
    printf("A diagonal do retangolo eh:%2.f\n", diagonal);
    printf("O perimetro do retangulo eh:%.2f\n", perimetro);
    return 0;
}