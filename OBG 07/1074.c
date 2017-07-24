#include <stdio.h>
#include <string.h>

int main() {
    int quantidadeDeCasos, i;

    scanf("%d", &quantidadeDeCasos);
    for (i = 0; i < quantidadeDeCasos; i++) {
        int num;
        char saida[13];

        scanf("%d", &num);
        if (num == 0)
            strcpy(saida, "NULL");
        else {
            if (num%2 == 0)
                strcpy(saida, "EVEN");
            else
                strcpy(saida, "ODD");

            strcat(saida, " ");

            if (num > 0)
                strcat(saida, "POSITIVE");
            else
                strcat(saida, "NEGATIVE");
        }

        printf("%s\n", saida);
    }

    return 0;
}