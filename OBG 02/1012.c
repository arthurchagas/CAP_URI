/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1012
 */
#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, areaTrianguloAC, areaCirculoC, areaTrapezioAB, areaQuadradoB, areaRetanguloAB;
    double pi = 3.14159; // Valor de pi fornecido

    scanf("%lf %lf %lf", &A, &B, &C);
    areaTrianguloAC = (A * C)/2;        // (base*altura)/2
    areaCirculoC = pi * pow(C,2);       // pi*raio^2
    areaTrapezioAB = (A + B) * C/2;     // (base1+base2)*altura/2
    areaQuadradoB = pow(B,2);           // aresta^2
    areaRetanguloAB = A * B;            // aresta1*aresta2

    printf("TRIANGULO: %.3lf\n", areaTrianguloAC);
    printf("CIRCULO: %.3lf\n", areaCirculoC);
    printf("TRAPEZIO: %.3lf\n", areaTrapezioAB);
    printf("QUADRADO: %.3lf\n", areaQuadradoB);
    printf("RETANGULO: %.3lf\n", areaRetanguloAB);

    return 0;
}