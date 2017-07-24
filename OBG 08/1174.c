#include <stdio.h>

int main() {
    double X[100];
    int i;

    for (i = 0; i < 100; i++) {
        scanf("%lf", &X[i]);
        if (X[i] <= 10)
            printf("A[%d] = %.1lf\n", i, X[i]);
    }

    return 0;
}