#include <stdio.h>

#define linhas 12
#define colunas 12

int main() {
    double matriz[linhas][colunas], soma = 0;
    char operacao;
    int i, j;

    scanf("%c", &operacao);
    for (i = 0; i < linhas; ++i)
        for (j = 0; j < colunas; ++j) {
            scanf("%lf", &matriz[i][j]);

            if (i+j > linhas-1 && i < j)
                soma += matriz[i][j];
        }

    switch (operacao) {
        case 'S':
            printf("%.1lf\n", soma);
            break;
        case 'M':
            printf("%.1lf\n", soma/(linhas*colunas/4 - linhas/2));
            break;
        default: break;
    }

    return 0;
}