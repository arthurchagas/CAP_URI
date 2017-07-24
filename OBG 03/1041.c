/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 19/04/2017
 *
 * Objetivo: URI 1041
*/
#include <stdio.h>

int main() {
    double coordX, coordY;

    scanf("%lf %lf", &coordX, &coordY);

    if (coordX > 0 && coordY > 0)
        printf("Q1\n");
    else if (coordX > 0 && coordY < 0)
        printf("Q4\n");
    else if (coordX < 0 && coordY > 0)
        printf("Q2\n");
    else if (coordX < 0 && coordY < 0)
        printf("Q3\n");
    else if (coordX == 0 && coordY != 0)
        printf("Eixo Y\n");
    else if (coordX != 0 && coordY == 0)
        printf("Eixo X\n");
    else
        printf("Origem\n");

    return 0;
}