/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 19/04/2017
 *
 * Objetivo: URI 1043
*/
#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);
    if ((fabs(A - B) < C && C < A + B) || (fabs(A - C) < B && B < A + C) || (fabs(B - C) < A && A < B + C))
        printf("Perimetro = %.1lf\n", fabs(A)+fabs(B)+fabs(C));
    else
        printf("Area = %.1lf\n", (fabs(A)+fabs(B))*fabs(C)/2);
    return 0;
}