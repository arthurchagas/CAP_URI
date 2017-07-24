#include <stdio.h>

int main() {
    double entrada, soma = 0;
    int positivos = 0, i;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &entrada);
        if (entrada > 0) {
            soma += entrada;
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", soma/positivos);

    return 0;
}