//Crie  uma  estrutura  representando  um  atleta.  Essa  estrutura  deve  conter  o  nome  do 
//atleta,  seu  esporte,  idade  e  altura.  Agora,  escreva  um  programa  que  leia  os  dados  de 
//cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.

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

    int maior_idade = 0;
    int maior_altura = 0;

    for(int i = 0; i < 5; i++){
        printf("--Atleta[%d]--\n\n", i + 1);

        printf("Digite seu nome:");
        scanf(" %[^\n]", &dados[i].nome);

        printf("Digite seu esporte:");
        scanf(" %[^\n]", &dados[i].esporte);

        printf("Digite sua idade:");
        scanf(" %d", &dados[i].idade);

        printf("Digite sua altura:");
        scanf(" %[^\n]", &dados[i].altura);

        printf("\n");

        if(maior_idade < dados[i].idade){
            maior_idade = dados[i].idade;
            indice_idade_nome = i;
        }

        if(maior_altura > dados[i].altura){
            maior_altura = dados[i].altura;
            indice_altura_nome = i;
        }
    }

    printf("\n");

    printf("O atleta mais velho eh:[%s]\n", dados[indice_idade_nome].nome);
    printf("Que pratica [%s]\n", dados[indice_idade_nome].esporte);
    printf("O atleta mais alto eh:[%s]\n", dados[indice_altura_nome].nome);
    printf("Que pratica [%s]\n", dados[indice_altura_nome].esporte);

    return 0;
}