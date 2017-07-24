#include <stdio.h>

int main() {
    int entrada, i;
    scanf("%d", &entrada);

    for (i = 1; i <= entrada; i++) {
        if (i % 2 != 0)
            printf("%d\n", i);
    }
    return 0;
}