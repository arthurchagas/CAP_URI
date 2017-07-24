#include <stdio.h>

#define nSize 100

int main() {
    double nZero;
    int i;

    scanf("%lf", &nZero);
    for (i = 0; i < nSize; i++, nZero /= 2)
        printf("N[%d] = %.4lf\n", i, nZero);
    return 0;
}