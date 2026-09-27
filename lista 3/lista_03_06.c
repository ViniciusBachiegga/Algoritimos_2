//Escreva uma função que procure a ocorrência de um vetor menor dentro de um vetor 
//maior. 
//-Assinatura: int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s); 
//A  função  deve  procurar  se  a  sequência  exata  de  números  do  vetor  sub  existe 
//dentro de vetor. Se encontrar, retorne um ponteiro apontando para o início dessa 
//ocorrência no vetor original. Se não encontrar, retorne NULL. 

#include <stdio.h>
// tenho que colocar ponteiro na função, pois ela  não é void e retorna um ponteiro

int* buscar_subvetor(int *vetor_principal,int tamanho_principal, int *vetor_sub , int tamanho_sub){
    
    int inicio;
    int *inicio_ocorrencia = vetor_principal;
    int iguais = 0;
    int i = 0;
    int cont_iguais = 0;
    
    while(iguais == 0){
        if (*(vetor_principal + i) == *(vetor_sub + i)){
            iguais = i;
        }
        i++;
    }
    
    for(int i = 0; i < tamanho_sub; i++){
        
        if(*(vetor_principal + (iguais + i)) ==*(vetor_sub + i)){
            cont_iguais++;
        }
    }
    if(cont_iguais == tamanho_sub){
        *inicio_ocorrencia = iguais;
        return (inicio_ocorrencia);
    }else{
            return NULL;
        }
}


int main(){
    
    int tamanho_sub;
    int tamanho_principal;

    printf("Digite um tamanho para o vetor principal:");
    scanf("%d", &tamanho_principal);
    printf("\n");
    printf("Digite um tamanho para  o sub vetor:");
    scanf("%d", &tamanho_sub);

    int v1[tamanho_principal];
    int v2[tamanho_sub];
    int *vetor_principal = v1;
    int *vetor_sub = v2;
    int t;
    int u;


    for(int i = 0; i < tamanho_principal; i++){
        printf("Digite o valor do vetor principal[%d]:", i);
        scanf("%d", &t);
        *(vetor_principal + i) = t;
    }
    
    printf("\n");
    
    for(int i = 0; i < tamanho_sub; i++){
        printf("Digite o valor do sub_vetor [%d]:", i);
        scanf("%d", &u);
        *(vetor_sub + i) = u;
    }

    int *main;

    *main = *buscar_subvetor(vetor_principal, tamanho_principal, vetor_sub , tamanho_sub);
    if(main == NULL){
        printf("NULL");
    }

    printf("%d eh o indice que acontece comeca a ocorrencia", *main);
}