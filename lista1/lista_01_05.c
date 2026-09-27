//Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
//quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito,
//6 = 1 + 2 + 3, que são seus divisores). A função deve retornar o valor inteiro 1 para
//verdadeiro e 0 caso contrário

#include <stdio.h>


int calculardiv (int num){
    int soma = 0; 
    int a;

    for(int i = 1; i < num ; i++){
        if( num % i == 0){
            soma = soma + i;
        }
    }   
    if(soma == num){
        printf("1, eh um numero perfeito ");
    }else{
        printf("0, nao eh um numero perfeito ");
    }

    return a;
}


int main(){

    int n;
    int resultado;

    printf("Caso o seu valor seja perfeito, aparecera o resultado 1 (um), se nao  for,  aparecera 0 (zero)\n");
    printf("Digite um valor para verificar se ele eh perfeito ou nao:");
    scanf("%d", &n);
    printf("\n");

    calculardiv(n);

    return 0;
}