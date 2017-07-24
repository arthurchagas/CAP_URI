/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1002
 */
#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159; // Valor fornecido
    double raio, area;

    scanf("%lf", &raio);
    area = pi*pow(raio,2); // pi*raio^2
    printf("A=%.4lf\n",area);

    return 0;
}