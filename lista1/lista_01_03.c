//Faça um procedimento que recebe por parâmetro o tempo de duração de uma fábrica
//expressa em segundos e imprima esse tempo em horas, minutos e segundos.

#include <stdio.h>

int calcularh(int tempo){
    int horas;

    horas = tempo / 3600;

    return(horas);
}

int calcularmin(int tempo){
    int minutos;

    minutos = (tempo % 3600) / 60;

    return(minutos);
}

int calcularseg(int tempo){
    int segundos;

    segundos = tempo % 60;

    return(segundos);
}

int main(){

    int tempo;
    int horas;
    int minutos;
    int segundos;

    printf("Digite o tempo de trabalho em segundos:");
    scanf("%d", &tempo);

    horas = calcularh(tempo);
    minutos = calcularmin(tempo);
    segundos = calcularseg(tempo);

    printf("o tempo eh de: %d hrs : %d min : %d sec", horas , minutos , segundos);

    return 0;
}