#include <stdio.h>

int main() {
    int quantidadeDeTermos, i, seq[46];

    seq[0] = 0;
    seq[1] = 1;
    scanf("%d", &quantidadeDeTermos);
    for (i = 2; i < quantidadeDeTermos; i++) {
        if (i == 2)
            printf("%d %d ", seq[0], seq[1]);
        seq[i] = seq[i-1] + seq[i-2];
        printf("%d", seq[i]);
        if (i == quantidadeDeTermos-1)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}