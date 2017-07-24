#include <stdio.h>

#define N_size 20

void swap (int *a, int *b);

int main() {
    int N[N_size], i, j;

    for (i = 0; i < N_size; i++)
        scanf("%d", &N[i]);

    for (i = 0, j = N_size-1; i <= j; i++, j--)
        swap(&N[i], &N[j]);

    for (i = 0; i < N_size; i++)
        printf("N[%d] = %d\n", i, N[i]);

    return 0;
}

void swap (int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}