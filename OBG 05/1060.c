#include <stdio.h>

int main() {
    int numPositivo = 0, i;
    for (i = 0; i <= 5 ; i++) {
        double entrada;
        scanf("%lf", &entrada);
        if (entrada > 0)
            numPositivo++;
    }
    printf("%d valores positivos\n", numPositivo);
    return 0;
}