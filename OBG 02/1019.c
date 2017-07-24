/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1019
 */
#include <stdio.h>
#include <math.h>

int main() {
    int horas, minutos, segundos;

    scanf("%d", &segundos);
    horas = segundos/3600;
    segundos = fmod(segundos,3600);
    minutos = segundos/60;
    segundos = fmod(segundos,60);

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}