/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1014
 */
#include <stdio.h>

int main() {
    int distanciaTotal;
    double totalCombustivel, consumoCombustivel;

    scanf("%d %lf", &distanciaTotal, &totalCombustivel);
    consumoCombustivel = distanciaTotal / totalCombustivel;

    printf("%.3lf km/l\n", consumoCombustivel);

    return 0;
}