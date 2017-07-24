/*
 * Autor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Revisor: Luiz Arthur Chagas Oliveira       RA: 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1008
 */
#include <stdio.h>

int main() {
    int idFuncionario, horasTrabalhadas;
    double usdPorHora, salario;

    scanf("%d", &idFuncionario);
    scanf("%d", &horasTrabalhadas);
    scanf("%lf", &usdPorHora);
    salario = usdPorHora * horasTrabalhadas;

    printf("NUMBER = %d\n", idFuncionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}