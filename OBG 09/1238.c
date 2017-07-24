#include <stdio.h>
#include <string.h>

#define TAMANHO_MAXIMO 51

int main() {
    char stringA[TAMANHO_MAXIMO + 1], stringB[TAMANHO_MAXIMO + 1], stringSaida[2 * TAMANHO_MAXIMO + 1];
    int N, i, j, k;

    scanf("%d ", &N);
    for (i = 0; i < N; i++) {
        scanf("%s %s", stringA, stringB);

        if (strlen(stringA) > strlen(stringB)) {
            for (j = 0, k = 0; k <= strlen(stringB); j += 2, ++k) {
                stringSaida[j] = stringA[k];
                stringSaida[j + 1] = stringB[k];
            }

            strcat(stringSaida, stringA + k);
        } else if (strlen(stringA) < strlen(stringB)) {
            for (j = 0, k = 0; k <= strlen(stringA); j += 2, ++k) {
                stringSaida[j] = stringA[k];
                stringSaida[j + 1] = stringB[k];
            }

            strcat(stringSaida, stringB + k - 1);
        } else {
            for (j = 0, k = 0; k < strlen(stringA); j += 2, ++k) {
                stringSaida[j] = stringA[k];
                stringSaida[j + 1] = stringB[k];
            }

            strcat(stringSaida, stringB + k);
        }

        stringSaida[strlen(stringA) + strlen(stringB)] = '\0';

        printf("%s\n", stringSaida);
        stringA[0] = '\0';
        stringB[0] = '\0';
        stringSaida[0] = '\0';
    }
    return 0;
}
