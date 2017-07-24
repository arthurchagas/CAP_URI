#include <stdio.h>
#include <math.h>

int digitos (int);

int main() {
    int entrada, digitosEntrada, i, j;
    char format[10], string[10];
    scanf("%d", &entrada);

    while (entrada != 0) {
        digitosEntrada = digitos((int) pow(2, 2*entrada - 2));

        for (i = 1; i <= entrada; i++) {
            for (j = 1; j <= entrada; j++) {
                sprintf(format, "%%%dd", digitosEntrada);
                sprintf(string, format, (int) pow(2, j + i - 2));
                printf(string);
                if (j != entrada)
                    printf(" ");
            }

            printf("\n");
        }

        printf("\n");
        scanf("%d", &entrada);
    }

    return 0;
}

int digitos (int numero) {
    int n = 1;

    if (numero > 9)
        while ((numero /= 10) != 0)
            n++;

    return n;
}