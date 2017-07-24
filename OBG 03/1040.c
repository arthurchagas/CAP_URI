/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 19/04/2017
 *
 * Objetivo: URI 1040
*/
#include <stdio.h>

int main() {
    double n1, n2, n3, n4, mediaFinal, nExame;
    int peso1, peso2, peso3, peso4;
    peso1 = 2;
    peso2 = 3;
    peso3 = 4;
    peso4 = 1;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    mediaFinal = (n1 * peso1 + n2 * peso2 + n3 * peso3 + n4 * peso4)/(peso1 + peso2 + peso3 + peso4);
    printf("Media: %.1lf\n", mediaFinal);

    if (mediaFinal >= 7.0)
        printf("Aluno aprovado.\n");
    else if (mediaFinal < 5.0)
        printf("Aluno reprovado.\n");
    else {
        printf("Aluno em exame.\n");
        scanf("%lf", &nExame);
        printf("Nota do exame: %.1lf\n", nExame);
        mediaFinal = (mediaFinal + nExame) / 2;
        if (mediaFinal >= 5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediaFinal);
        }
    }

    return 0;
}