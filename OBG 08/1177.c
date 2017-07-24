#include <stdio.h>

#define nSize 1000

int main() {
    int nMax, i, n;

    scanf("%d", &nMax);
    for (i = 0, n = 0; i < nSize; i++, n++) {
        if (n == nMax)
            n = 0;
        printf("N[%d] = %d\n", i, n);
    }
    return 0;
}