#include <stdio.h>

int main() {
    int i, quantValores = 5, quantPar = 0;

    for (i = 0; i < quantValores; i++) {
        int entrada;
        scanf("%d", &entrada);

        if (entrada % 2 == 0)
            quantPar++;
    }
    printf("%d valores pares\n", quantPar);

    return 0;
}