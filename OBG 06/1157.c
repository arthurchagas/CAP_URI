#include <stdio.h>

int main() {
    int i, start;

    scanf("%d", &start);
    for (i = 1; i <= start; i++)
        if (start % i == 0)
            printf("%d\n", i);

    return 0;
}