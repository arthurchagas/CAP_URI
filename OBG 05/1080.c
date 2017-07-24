#include <stdio.h>

int main() {
    int i, maior, posicao;

    for (i = 0; i < 100; i++) {
        int temp;
        scanf("%d", &temp);
        if (i == 0) {
            maior = temp;
            posicao = i+1;
        } else {
            if (temp > maior) {
                maior = temp;
                posicao = i+1;
            }
        }
    }

    printf("%d\n%d\n", maior, posicao);
    return 0;
}