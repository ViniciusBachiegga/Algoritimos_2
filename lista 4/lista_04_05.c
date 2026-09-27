//Crie  uma  estrutura  capaz  de  armazenar  o  nome  e  a  data  de  nascimento  de  uma 
//pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba 
//os nomes da pessoa mais nova e da mais velha.

#include <stdio.h>

    struct data_nacimento{
        char nome[20];
        int dia;
        int mes;
        int ano;
    };

int main(){

    struct data_nacimento dados[6];

    int maior_ano = 0;
    int maior_mes = 0;
    int maior_dia = 0;
    int indice_mais_velho = 0;

    int menor_ano = 0;
    int menor_mes = 0;
    int menor_dia = 0;
    int indice_mais_novo = 0;
    int cont_iguais= 0;

    
    for(int i = 0; i < 6; i++){
        printf("Pessoa[%d]\n", i + 1);
        
        printf("Digite seu nome:");
        scanf(" %[^\n]", &dados[i].nome);
        
        printf("\n");

        printf("Digite o ano do seu nascimento:");
        scanf("%d", &dados[i].ano);

        printf("\n");

        printf("Digite o mes do seu nascimento:");
        scanf("%d", &dados[i].mes);

        printf("\n");

        printf("Digite o dia do seu nascimento:");
        scanf("%d", &dados[i].dia);

        if(menor_ano < dados[i].ano){
            menor_ano = dados[i].ano;
            menor_mes = dados[i].mes;
            menor_dia = dados[i].dia;

            indice_mais_novo = i;
        }   else if(menor_ano == dados[i].ano){
                menor_ano = dados[i].ano;
                indice_mais_novo = i;

                    if(maior_mes < dados[i].mes){
                        menor_mes = dados[i].mes;
                        menor_dia = dados[i].dia;

                        indice_mais_novo = i;
                    }   else if(menor_dia == dados[i].dia){
                            cont_iguais++;
                            printf("Tem %d pessoas com a mesma idade\n", cont_iguais + 1);
                        }
            }
    }

    for(int i = 0; i < 6; i++){
        if(maior_ano > dados[i].ano){
            maior_ano = dados[i].ano;
            maior_mes = dados[i].mes;
            maior_dia = dados[i].dia;

            indice_mais_velho = i;
        }       else if(maior_ano == dados[i].ano){
                    maior_ano = dados[i].ano;
                    indice_mais_velho = i;

                        if(maior_mes > dados[i].mes){
                            maior_mes = dados[i].mes;
                                maior_dia = dados[i].dia;

                                indice_mais_velho = i;
                        }
                }
    }
    
    printf("\n");

    printf("A pessoa mais nova eh o: %s\n", dados[indice_mais_novo].nome);
    printf("A pessoa mais velha eh o: %s", dados[indice_mais_velho].nome);

    return 0;

}