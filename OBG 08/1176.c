#include <stdio.h>

unsigned long long int calcFibonacci (unsigned long long int termoAnterior, unsigned long long int termo, int nEsimoTermo, int nAtual);
unsigned long long int fibonacci (int nEsimoTermo);

int main() {
    int casosDeTeste, buffer, i;

    scanf("%d", &casosDeTeste);
    for (i = 0; i < casosDeTeste; i++) {
        scanf("%d", &buffer);
        printf("Fib(%d) = %llu\n", buffer, fibonacci(buffer));
    }

    return 0;
}

unsigned long long int calcFibonacci (unsigned long long int termoAnterior, unsigned long long int termo, int nEsimoTermo, int nAtual) {
    if (nAtual + 1 == nEsimoTermo) return termoAnterior + termo;

    return calcFibonacci(termo, termo + termoAnterior, nEsimoTermo, nAtual + 1);
}

unsigned long long int fibonacci (int nEsimoTermo) {
    if (nEsimoTermo == 0) return 0;
    if (nEsimoTermo == 1 || nEsimoTermo == 2) return 1;

    return calcFibonacci(1, 1, nEsimoTermo, 2);
}