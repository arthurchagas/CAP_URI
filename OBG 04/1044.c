/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 19/04/2017
 *
 * Objetivo: URI 1044
*/
#include <stdio.h>
#include <math.h>

int main() {
    int A,B;

    scanf("%d %d", &A, &B);
    if (fmod(A,B) == 0 || fmod(B,A) == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}