/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 20/04/2017
 *
 * Objetivo: URI 1048
*/
#include <stdio.h>

int main() {
    int reajusteA = 15, reajusteB = 12, reajusteC = 10, reajusteD = 7, reajusteE = 4;
    double salarioInicial, salarioFinal, reajusteRecebido, reajusteRecebidoPercentual;

    scanf("%lf", &salarioInicial);

    if (salarioInicial <= 400)
        reajusteRecebidoPercentual = reajusteA;
    else if (salarioInicial > 400 && salarioInicial <= 800)
        reajusteRecebidoPercentual = reajusteB;
    else if (salarioInicial > 800 && salarioInicial <= 1200)
        reajusteRecebidoPercentual = reajusteC;
    else if (salarioInicial > 1200 && salarioInicial <= 2000)
        reajusteRecebidoPercentual = reajusteD;
    else
        reajusteRecebidoPercentual = reajusteE;

    reajusteRecebido = salarioInicial * reajusteRecebidoPercentual / 100;
    salarioFinal = salarioInicial + reajusteRecebido;

    printf("Novo salario: %.2lf\n", salarioFinal);
    printf("Reajuste ganho: %.2lf\n", reajusteRecebido);
    printf("Em percentual: %.0lf %%\n",reajusteRecebidoPercentual);

    return 0;
}