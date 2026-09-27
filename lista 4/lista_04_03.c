//Crie  uma  estrutura  representando  um  aluno  de  uma  disciplina.  Essa  estrutura  deve 
//conter  o  número  de  matrícula  do  aluno,  seu  nome  e  as  notas  de  três  provas.  Agora, 
//escreva um programa que leia os dados de cinco alunos e os armazene nessa  estrutura. 
//Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.

#include <stdio.h>

    struct notas_alunos{
        char nome[12];
        int numero_matricula;
        float nota1;
        float nota2;
        float nota3;
    };

    
int main(){

    struct notas_alunos vetor[5];

   
    float maior_media = 0;
    int indice;

    for(int i = 0; i < 5; i++){
        float media = 0;
        printf("Digite seu nome:");
        scanf(" %[^\n]", &vetor[i].nome);
        printf("\n");
        printf("Digite sua matricula:");
        scanf("%d", &vetor[i].numero_matricula);
        printf("\n");
        printf("Digite a primeira nota:");
        scanf("%f", &vetor[i].nota1);
        printf("\n");
        printf("Digite a segunda nota:");
        scanf("%f", &vetor[i].nota2);
        printf("\n");
        printf("Digite a terceira nota:");
        scanf("%f", &vetor[i].nota3);
        printf("\n");

        media = (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3) / 3;

        if(maior_media < media){
            maior_media = media;
            indice = i;
        }
    }

    printf("%d\n", indice);
    printf("O aluno com maior media foi o aluno com os seguintes dados:");
    printf("Maior media:%f\n", maior_media);
    printf("Nome:%s\n", vetor[indice].nome);
    printf("Numero de matricula:%d\n", vetor[indice].numero_matricula);
    printf("Primeira nota:%f\n", vetor[indice].nota1);
    printf("Segunda nota:%f\n", vetor[indice].nota2);
    printf("Terceira nota:%f\n", vetor[indice].nota3);

    return 0;
}
