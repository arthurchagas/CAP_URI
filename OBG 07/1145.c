#include <stdio.h>

int main() {
    int numPorLinha, limite, i;

    scanf("%d %d", &numPorLinha, &limite);
    for (i = 1; i <= limite; i++) {
        printf("%d", i);
        if (i % numPorLinha == 0)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}