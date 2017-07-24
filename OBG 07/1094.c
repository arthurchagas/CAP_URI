#include <stdio.h>

int main() {
    int numeroDeCasos, cobaiasTotal = 0, cobaiasCoelhos = 0, cobaiasRatos = 0, cobaiasSapos = 0, i;

    scanf("%d", &numeroDeCasos);
    for (i = 0; i < numeroDeCasos; i++) {
        int tempInt;
        char tempChar[1];

        scanf("%d %c", &tempInt, &tempChar[0]);
        cobaiasTotal += tempInt;

        if (tempChar[0] == 'C')
            cobaiasCoelhos += tempInt;
        else if (tempChar[0] == 'R')
            cobaiasRatos += tempInt;
        else if (tempChar[0] == 'S')
            cobaiasSapos +=tempInt;
    }

    printf("Total: %d cobaias\n", cobaiasTotal);
    printf("Total de coelhos: %d\n", cobaiasCoelhos);
    printf("Total de ratos: %d\n", cobaiasRatos);
    printf("Total de sapos: %d\n", cobaiasSapos);
    printf("Percentual de coelhos: %.2lf %%\n", 100 * (double) cobaiasCoelhos/cobaiasTotal);
    printf("Percentual de ratos: %.2lf %%\n", 100 * (double) cobaiasRatos/cobaiasTotal);
    printf("Percentual de sapos: %.2lf %%\n", 100 * (double) cobaiasSapos/cobaiasTotal);

    return 0;
}