#include <stdio.h>
#include <string.h>

int main() {
    int casosDeTeste, i, valorBaseDigito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &casosDeTeste);
    for (i = 0; i < casosDeTeste; i++) {
        int somaLEDs = 0, j;
        char entrada[101];

        scanf("%s", entrada);
        for (j = 0; j < strlen(entrada); j++)
            somaLEDs += valorBaseDigito[entrada[j] - 48];

        printf("%d leds\n", somaLEDs);
    }

    return 0;
}