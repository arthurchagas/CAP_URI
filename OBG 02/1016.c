/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1016
 */
#include <stdio.h>
#include <math.h>

int main() {
    int velocidadeX, velocidadeY, velocidadeRelativa, distancia, tempo;
    velocidadeX = 60; // km/h
    velocidadeY = 90; // km/h
    velocidadeRelativa = abs(velocidadeX - velocidadeY); // km/h
    velocidadeRelativa = 60/velocidadeRelativa; // min/km

    scanf("%d", &distancia);
    tempo = distancia * velocidadeRelativa;

    printf("%d minutos\n", tempo);

    return 0;
}