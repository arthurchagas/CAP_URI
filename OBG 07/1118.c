#include <stdio.h>

int main() {
    double somaNotas = 0;
    int notaValida = 0, continuar = 1;

    while (1) {
        double nota;

        if (continuar == 1) {
            scanf("%lf", &nota);

            if (nota < 0 || nota > 10)
                printf("nota invalida\n");
            else {
                somaNotas += nota;
                notaValida++;
                if (notaValida == 2) {
                    printf("media = %.2lf\n", somaNotas / 2);
                    notaValida = 0;
                    somaNotas = 0;

                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &continuar);
                    if (continuar == 2)
                        break;
                }
            }
        } else {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &continuar);
            if (continuar == 2)
                break;
        }
    }

    return 0;
}