//Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
//representará a operação que se deseja efetuar com os números. Assim, se o símbolo
//for “ + ” , deverá ser realizada uma adição, se for “−”, uma subtração, se for “/”, uma
//divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da
//operação para o programa principal

#include <stdio.h>
float soma(float n1 , float n2 , char operacao){
    float soma = 0;

    if(operacao == '+'){
        soma = n1 + n2;
    }
    if(operacao == '-'){
        soma = n1 - n2;
    }
    if(operacao == '*'){
        soma = n1 *n2;
    }
    if(operacao == '/'){
        soma = n1 / n2;
    }

    return(soma);
}
int main(){
    float n1 , n2 , resultado;
    char operacao;

    printf("Digite um numero:");
    scanf("%f", &n1);
    printf("\n");
    printf("Digite outro numero:");
    scanf("%f", &n2);
    printf("\nDigite a operacao que deseja usar(EX: +,-,*,/):");
    scanf(" %c", &operacao);

    resultado = soma(n1 , n2 , operacao);

    printf("O resultado da operacao eh de: %.2f", resultado);
    return 0;
}