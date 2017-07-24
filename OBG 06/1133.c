#include <stdio.h>

int main() {
    int A, B, i;

    scanf("%d", &A), scanf("%d", &B);
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    for (i = A+1; i < B; i++)
        if (i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);

    return 0;
}