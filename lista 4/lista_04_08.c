//Escreva  um  programa  que  contenha  uma  estrutura  representando  uma  data  válida. 
//Essa  estrutura  deve  conter  os  campos  dia,  mês  e  ano.  Em  seguida,  leia  duas  datas  e 
//armazene  nessa  estrutura.  Calcule  e  exiba  o  número  de  dias  que  decorreram  entre  as 
//duas datas.

#include <stdio.h>

    struct data{
        int dia;
        int mes;
        int ano;
    };

int main(){

    struct data datas[2]; 

    int quantidade_dias;
    int quantidade_meses;
    int quantidade_anos;

    int dias;
    int meses;
    int anos;

    int dias_reais;

    for(int i = 0; i < 2; i++){
        printf("--DATA[%d]--\n", i + 1);
        printf("Digite um dia:");
        scanf(" %d", &datas[i].dia);
        printf("\n");
        printf("Digite um mes:");
        scanf(" %d", &datas[i].mes);
        printf("\n");
        printf("Digite um ano:");
        scanf(" %d", &datas[i].ano);
        printf("\n");
    }



    quantidade_dias = datas[0].dia - datas[1].dia;
    if(quantidade_dias < 0){
        quantidade_dias = quantidade_dias * (-1);
    }
    
    dias = quantidade_dias * 1;


    quantidade_meses = datas[0].mes - datas[1].mes;
    if(quantidade_meses < 0){
        quantidade_meses = quantidade_meses * (-1);
    }
    
    meses = quantidade_meses * 30;

    

    quantidade_anos = datas[0].ano - datas[1].ano;
    if(quantidade_anos < 0){
        quantidade_anos = quantidade_anos * (-1);
    }
    
    anos = quantidade_anos * 365;

    dias_reais = dias + meses + anos;

    if(dias_reais < 0){
        dias_reais = dias_reais * (-1);
    }

    printf("Os dias que decoorem eh:%d", dias_reais);
}