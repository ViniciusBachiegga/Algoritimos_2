//Implemente  um  programa  que  leia  o  nome,  a  idade  e  o  endereço  de  uma  pessoa  e 
//armazene  esses  dados  em  uma  estrutura.  Em  seguida,  imprima  na  tela  os  dados  da 
//estrutura lida.

#include <stdio.h>

struct endereco{
    char rua[20];
    int numero;
    char bairro[20];
};

struct dados_pessoais{
    char nome[12];
    int idade;
    struct endereco coordenadas;
};

int main(){

    struct dados_pessoais pessoa;

    printf("Digite sua rua:");
    scanf("%[^\n]", &pessoa.coordenadas.rua); // melhor que fgets
    // esse espaço no % serve para limpar o enter
    
    printf("\n");

    printf("Digite seu numero:");
    scanf(" %d", &pessoa.coordenadas.numero);

    printf("\n");

    printf("Digite seu bairro:");
    scanf(" %[^\n]", &pessoa.coordenadas.bairro);

    printf("\n");

    printf("Digite seu nome:");
    scanf(" %[^\n]", &pessoa.nome);

    printf("\nDigite sua idade:");
    scanf(" %d", &pessoa.idade);

    printf("\n");

    printf("Seu nome eh:%s \n", pessoa.nome);
    printf("Sua idade eh:%d \n", pessoa.idade);
    printf("Sua rua eh%s \n", pessoa.coordenadas.rua);
    printf("Seu numero eh:%d \n", pessoa.coordenadas.numero);
    printf("Seu bairro eh:%s \n", pessoa.coordenadas.bairro);

    return 0;
}
