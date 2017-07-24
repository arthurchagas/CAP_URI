#include <stdio.h>

#define linhas 12
#define colunas 12

int main() {
    int colunaDaOperacao, i, j;
    double matriz[linhas][colunas], soma = 0;
    char operacao;

    scanf("%d %c", &colunaDaOperacao, &operacao);
    for (i = 0; i < linhas; ++i)
        for (j = 0; j < colunas; ++j) {
            scanf("%lf", &matriz[i][j]);

            if (j == colunaDaOperacao)
                soma += matriz[i][j];
        }

    switch (operacao) {
        case 'S':
            printf("%.1lf\n", soma);
            break;
        case 'M':
            printf("%.1lf\n", soma/linhas);
            break;
        default: break;
    }

    return 0;
}