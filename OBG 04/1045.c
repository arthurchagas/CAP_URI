/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 19/04/2017
 *
 * Objetivo: URI 1045
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double A, B, C, temp1, temp2;
    char msg1[22], msg2[22];
    scanf("%lf %lf %lf", &A, &B, &C);

    if (C > B) {
        temp1 = C;
        temp2 = B;
        C = temp2;
        B = temp1;
    }
    if (B > A) {
        temp1 = B;
        temp2 = A;
        B = temp2;
        A = temp1;
    }

    if (A >= B+C)
        strcpy(msg1,"NAO FORMA TRIANGULO");
    else {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2))
            strcpy(msg1,"TRIANGULO RETANGULO");
        else if (pow(A, 2) > pow(B, 2) + pow(C, 2))
            strcpy(msg1,"TRIANGULO OBTUSANGULO");
        else if (pow(A, 2) < pow(B, 2) + pow(C, 2))
            strcpy(msg1,"TRIANGULO ACUTANGULO");

        if (A == B && A == C && B == C)
            strcpy(msg2,"TRIANGULO EQUILATERO");
        else if ((A == B && A != C && B != C) || (A != B && B == C && A != C) || (A == C && B != C && A != B))
            strcpy(msg2,"TRIANGULO ISOSCELES");
    }

    printf("%s\n",msg1);
    if (A == B || A == C || B == C)
        printf("%s\n",msg2);
    return 0;
}
