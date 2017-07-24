/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 19/04/2017
 *
 * Objetivo: URI 1038
*/
#include <stdio.h>

int main() {
    int codigo, quantidade;
    double valor1, valor2, valor3, valor4, valor5, valorFinal;

    valor1 = 4.00; // Cachorro Quente
    valor2 = 4.50; // X Salada
    valor3 = 5.00; // X Bacon
    valor4 = 2.00; // Torrada Simples
    valor5 = 1.50; // Refrigerante
    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 1)
        valorFinal += valor1 * quantidade;
    else if (codigo == 2)
        valorFinal += valor2 * quantidade;
    else if (codigo == 3)
        valorFinal += valor3 * quantidade;
    else if (codigo == 4)
        valorFinal += valor4 * quantidade;
    else if (codigo == 5)
        valorFinal += valor5 * quantidade;

    printf("Total: R$ %.2lf\n", valorFinal);
    return 0;
}