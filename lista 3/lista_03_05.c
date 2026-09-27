//Crie  uma  função  que  varra  um  vetor  de  inteiros  uma  única  vez  e  retorne  três 
//informações simultaneamente (Devem ser apresentadas na Main). 
//-Assinatura: void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, 
//float *media); 
//-O  main  deve  passar  um  vetor  e  os  endereços  das  variáveis  onde  os  resultados 
//serão  armazenados.  Toda  a  varredura  do  vetor  deve  ser  feita  via  aritmética  de 
//ponteiros (*(vetor + i) ou avançando um ponteiro auxiliar).

#include <stdio.h>

void extrair_estastisticas(int *vetor,int tamanho, int *min, int *max, float *media){

    *max = *vetor;
    *min = *vetor;
    for(int i = 0; i < tamanho; i++){
        if(*(vetor + i) < *min){
            *min = *(vetor + i);
        }
    }
    for(int i = 0; i < tamanho; i++){
        if(*(vetor + i) > *max){
            *max = *(vetor + i);
        }
    }

    float soma = 0;
    float conta = 0;
    for(int i = 0; i < tamanho;i++){
        soma = *(vetor + i) +  soma;
    }

    conta = soma / tamanho;

    *media = conta;

}

int main(){

    int tamanho;
    int t;
    int maior = 0;
    int menor = 0;
    float conta = 0;

    printf("Digite o tamanho de um vetor:");
    scanf("%d", &tamanho);

    int v[tamanho];
    int *vetor = v;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor do vetor [%d]:", i);
        scanf("%d", &t);
        *(vetor + i) = t;
    }

   float *media = &conta;
    int *max = &maior;
    int *min = &menor;

   extrair_estastisticas(vetor , tamanho , min, max , media);

   printf("O maior valor eh: %d", *max);
   printf("\n");
   printf("O menor valor eh: %d", *min);
   printf("\n");
   printf("A media eh: %.2f", *media);
   
   return 0;
}
