#include <stdio.h>

int main() {
    int numeroTestes, peso1 = 2, peso2 = 3, peso3 = 5, i;
    double valor1, valor2, valor3, mediaPonderada;
    scanf("%d",&numeroTestes);
    for (i = 0; i < numeroTestes; i++) {
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
        mediaPonderada = (valor1 * peso1 + valor2 * peso2 + valor3 * peso3)/(peso1 + peso2 + peso3);
        printf("%.1lf\n", mediaPonderada);
    }
    return 0;
}