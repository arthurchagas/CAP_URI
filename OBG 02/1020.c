/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1020
*/
#include <stdio.h>
#include <math.h>

int main() {
    int dias, meses, anos;

    scanf("%d", &dias);
    anos = dias/365;
    dias = fmod(dias,365);
    meses = dias/30;
    dias = fmod(dias,30);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
