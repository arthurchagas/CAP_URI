#include <stdio.h>

int main() {
    int casosDeTeste, i, dias = 0;
    double comidaDisponivel;

    scanf("%d", &casosDeTeste);
    for (i = 0; i < casosDeTeste; ++i) {
        scanf("%lf", &comidaDisponivel);

        while (comidaDisponivel > 1) {
            ++dias;
            comidaDisponivel = comidaDisponivel/2;
        }

        printf("%d dias\n", dias);
        dias = 0;
    }
    return 0;
}