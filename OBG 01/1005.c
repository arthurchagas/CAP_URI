/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1005
 */
#include <stdio.h>

int main() {
    double notaA, notaB, pesoA, pesoB, mediaPond;
    pesoA = 3.5;
    pesoB = 7.5;

    scanf("%lf", &notaA);
    scanf("%lf", &notaB);
    mediaPond = (notaA * pesoA + notaB * pesoB)/(pesoA + pesoB);

    printf("MEDIA = %.5lf\n", mediaPond);

    return 0;
}