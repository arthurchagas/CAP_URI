#include <stdio.h>

int main() {
    int A, N, i, soma = 0;
    scanf("%d %d", &A, &N);

    if (N <= 0) {
        while (1) {
            scanf("%d", &N);
            if (N > 0)
                break;
        }
    }

    for (i = 0; i < N; i++) {
        soma += A;
        A++;
    }

    printf("%d\n", soma);
    return 0;
}