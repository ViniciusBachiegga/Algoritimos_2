//Crie  uma  estrutura  representando  uma  hora.  Essa  estrutura  deve  conter  os  campos 
//hora,  minuto  e  segundo.  Agora,  escreva  um  programa  que  leia  um  vetor  de  cinco 
//posições dessa estrutura e imprima a maior hora.

#include <stdio.h>

    struct hora{
        int hora;
        int minutos;
        int segundos;
    };

int main(){

    struct hora vetor[5];
    int maior_hora = 0;
    int maior_minuto = 0;
    int maior_seguundos = 0;


    for(int i = 0; i < 5; i++){
        printf("Digite uma hora:");
        scanf("%d", &vetor[i].hora);
        printf("Digite um minuto:");
        scanf("%d", &vetor[i].minutos);
        printf("Digite um segundo:");
        scanf("%d", &vetor[i].segundos);
        printf("\n");

        if(maior_hora < vetor[i].hora){
            maior_hora = vetor[i].hora;
            maior_minuto = vetor[i].minutos;
            maior_seguundos = vetor[i].segundos;
        
        }else if(maior_hora == vetor[i].hora){
                maior_hora = vetor[i].hora;
                if(maior_minuto < vetor[i].minutos){
                    maior_minuto = vetor[i].minutos;
                    maior_seguundos = vetor[i].segundos;
                    
                }else if(maior_minuto == vetor[i].minutos){
                    
                    if(maior_seguundos < vetor[i].segundos);{
                        maior_hora = vetor[i].hora;
                        maior_minuto = vetor[i].minutos;
                        maior_seguundos = vetor[i].segundos;
                    }
                }
        }
    }

    printf("A maior hora eh:");
    printf("%d:", maior_hora);
    printf("%d:", maior_minuto);
    printf("%d", maior_seguundos);

    return 0;
}
