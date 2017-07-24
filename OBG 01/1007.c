/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1007
 */
#include <stdio.h>

int main() {
    int int1, int2, int3, int4, diferenca;

    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%d", &int3);
    scanf("%d", &int4);

    diferenca = int1 * int2 - int3 * int4;

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}