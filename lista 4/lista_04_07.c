//Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os 
//dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.


#include <stdio.h>

    struct atletas{
        char nome[12];
        char esporte[12];
        int idade;
        float altura;
    };

int main(){

    struct atletas dados[5];

    int indice_idade_nome;
    int indice_altura_nome;
    int temp = 0;
    int vsup[5] = {0, 1, 2 , 3 , 4};
   

    for(int i = 0; i < 5; i++){
        printf("--Atleta[%d]--\n\n", i + 1);

        printf("Digite seu nome:");
        scanf(" %[^\n]", &dados[i].nome);

        //printf("Digite seu esporte:");
        //scanf(" %[^\n]", &dados[i].esporte);

        printf("Digite sua idade:");
        scanf(" %d", &dados[i].idade);
        

        //printf("Digite sua altura:");
        //scanf(" %[^\n]", &dados[i].altura);

        for(int u = 0; u < 5; u++){
            if(dados[vsup[i]].idade > dados[vsup[u]].idade){
                temp = vsup[i];
                vsup[i] = vsup[u];
                vsup[u] = temp;
            }
        }
    }
    printf("\n");

    printf("As idades em orden cresccente eh:\n");
    for(int i = 0; i < 5; i++){
        printf("[%s]-->[%d]\n", dados[vsup[i]].nome , dados[vsup[i]].idade);
    }

}   

    