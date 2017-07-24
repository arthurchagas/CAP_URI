#include <stdio.h>

int main() {
    int entrada, i;
    scanf("%d", &entrada);

    for (i = 1; i < 10000; i++) {
        if (i % entrada == 2)
            printf("%d\n", i);
    }
    return 0;
}