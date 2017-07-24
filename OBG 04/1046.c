/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 19/04/2017
 *
 * Objetivo: URI 1046
*/
#include <stdio.h>

int main() {
    int inicial, final, tempo;
    scanf("%d %d", &inicial, &final);

    if (final > inicial)
        tempo = final - inicial;
    else if (final == inicial)
        tempo = 24;
    else {
        tempo = inicial - final;
        tempo = 24 - tempo;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    return 0;
}
