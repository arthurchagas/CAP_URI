/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1001
 */
#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159; // Valor de pi fornecido
    double raio, volume;

    scanf("%lf", &raio);
    volume = 4.0/3.0 * pi * pow(raio,3); // 4/3*pi*raio^3

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}