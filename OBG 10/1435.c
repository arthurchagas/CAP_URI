#include <stdio.h>

int main() {
    int ordemMatriz, i, j, k;

    scanf("%d", &ordemMatriz);

    while (ordemMatriz != 0) {
        int matriz[ordemMatriz][ordemMatriz];
        for (k = 1; k <= ordemMatriz; ++k)
            for (i = k - 1; i < ordemMatriz - k + 1; ++i)
                for (j = k - 1; j < ordemMatriz - k + 1; ++j)
                    matriz[i][j] = k;

        for (i = 0; i < ordemMatriz; ++i) {
            for (j = 0; j < ordemMatriz; ++j) {
                printf("%3d", matriz[i][j]);
                if (j + 1 < ordemMatriz)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");

        scanf("%d", &ordemMatriz);
    }

    return 0;
}