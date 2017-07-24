/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1035
*/
#include <stdio.h>

int main() {
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    if ((B > C) && (D > A) && ((C+D) > (A+B)) && (C > 0) && (D > 0) && (A % 2 == 0))
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}
