/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1006
 */
#include <stdio.h>

int main() {
    double notaA, notaB, notaC, pesoA, pesoB, pesoC, mediaPond;

    pesoA = 2;
    pesoB = 3;
    pesoC = 5;

    scanf("%lf", &notaA);
    scanf("%lf", &notaB);
    scanf("%lf", &notaC);
    mediaPond = (notaA * pesoA + notaB * pesoB + notaC * pesoC)/(pesoA + pesoB + pesoC);

    printf("MEDIA = %.1lf\n", mediaPond);

    return 0;
}