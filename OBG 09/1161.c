#include <stdio.h>

long long int fatorial (int, long long int);

int main() {
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
        printf("%lld\n", fatorial(a, 1)+fatorial(b, 1));
    return 0;
}

long long int fatorial (int n, long long int nAnterior) {
    return (n == 1 || n == 0) ? nAnterior : fatorial(n - 1, n*nAnterior);
}