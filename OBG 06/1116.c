#include <stdio.h>

int main() {
    int numeroDePares, i;

    scanf("%d", &numeroDePares);
    for (i = 0; i < numeroDePares; i++) {
        int tempA, tempB;
        scanf("%d %d", &tempA, &tempB);
        if (tempB == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", (double) tempA/tempB);
    }


    return 0;
}