//Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna
//essa idade expressa em dias.

int calcularanos (int anos){

    anos = anos * 365;

    return (anos);
}
int calcularmeses (int meses){

    meses = meses * 30;

    return (meses);
}
#include <stdio.h>
int main(){
    int anos;
    int meses;
    int dias;
    int a;
    int m;
    int d;
    int soma = 0;

    printf("Digite qunatos anos:");
    scanf("%d", &anos);
    printf("\n");
    printf("Digite qunatos meses:");
    scanf("%d", &meses);
    printf("\n");
    printf("Digite qunatos dias:");
    scanf("%d", &dias);
    printf("\n");

    a = calcularanos(anos);
    m = calcularmeses(meses);

    soma = a + m + dias;

    printf("voce tem aproximadamente %d dias", soma);

    return 0;
}
