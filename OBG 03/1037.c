/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1037
*/
#include <stdio.h>

int main() {
    double entrada;

    scanf("%lf", &entrada);

    if (entrada >= 0 && entrada <= 25)
        printf("Intervalo [0,25]\n");
    else if (entrada > 25 && entrada <= 50)
        printf("Intervalo (25,50]\n");
    else if (entrada > 50 && entrada <= 75)
        printf("Intervalo (50,75]\n");
    else if (entrada > 75 && entrada <= 100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

    return 0;
}
