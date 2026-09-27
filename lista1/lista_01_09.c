//Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna
//o valor de S.
//S = 1 + 1/1! + ½! + 1/3! + 1 /N!

#include <stdio.h>
float calcular(int num){
    float soma = 1;
    float fatorial = 1;

    for(int i = 1; i <= num; i++){
       
       fatorial = i * fatorial;
        soma = (1 / fatorial) + soma;
    }

    return(soma);
}
int main(){
    int num;
    float resultado;

    printf("Digite um numero:");
    scanf("%d", &num);

    resultado = calcular(num);

    printf("\n");
    printf("O resultado das somas eh de: %f", resultado);
    return 0;
}