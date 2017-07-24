#include <stdio.h>

int main() {
    int N[10], i, j;

    scanf("%d", &N[0]);
    for (i = 0, j = 1; i < 10; i++, j *= 2)
        printf("N[%d] = %d\n", i, N[0]*j);

    return 0;
}