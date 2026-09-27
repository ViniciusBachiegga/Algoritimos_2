//Escreva  uma  função  que  receba  um  vetor  de  inteiros,  seu  tamanho  e  um  número  X 
//(informado pelo usuário). A função deve buscar X no vetor e retornar um ponteiro para 
//a primeira posição de memória onde X foi encontrado. 
//-Se X não estiver no vetor, a função deve retornar NULL. 
//-Apresente o resultado na main.

#include <stdio.h>
int* verificar(int m, int *v, int n){

    for(int i = 0; i < m; i++){     
        if(*(v + i) == n){
           return(&*(v + i)); // mostra o valor para onde ele esta apontado
        }
    }

    return(NULL);

}


int main(){

    int n;
    int m;
    int t;

    printf("Digite um numero para ser comparado:");
    scanf("%d", &n);
    
    printf("\n");
    
    printf("Digite o tamannho do vetor:");
    scanf("%d", &m);

    int v[m];
    int *p = v;

    for(int i = 0; i < m; i++){
        printf("Digite um numero:");
        scanf("%d", &t);
        *(p + i) = t;
    }

    int *valor;

    valor = verificar(m , p , n);

    if(valor == NULL){
        printf("NULL");
    }else{
        valor = verificar(m , p , n);
        printf("O endereco de memoria do numero commparado eh de: %p", &valor);
    }

    return 0;
    
}