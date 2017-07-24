#include <stdio.h>
#include <math.h>

#define GRAOS_POR_GRAMA 12

int main() {
    int casosDeTeste, i, numQuadrados;
    unsigned long long int numGraos;

    scanf("%d", &casosDeTeste);
    for (i = 0; i < casosDeTeste; ++i) {
        scanf("%d", &numQuadrados);

        numGraos = (unsigned long long int) pow(2, numQuadrados) - 1;
        numGraos /= GRAOS_POR_GRAMA;

        printf("%llu kg\n", numGraos/1000);
    }
    return 0;
}
