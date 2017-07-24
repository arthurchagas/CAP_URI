#include <stdio.h>
#include <string.h>

#define STRING_MAX 51

char deslocarPosMaiusculo (char, int);

int main() {
    int casosDeTeste, i, j, posDeslocar;
    char string[STRING_MAX];

    scanf("%d ", &casosDeTeste);

    for (i = 0; i < casosDeTeste; ++i) {
        scanf("%s", string);
        scanf("%d", &posDeslocar);

        for (j = 0; j < strlen(string); ++j)
            string[j] = deslocarPosMaiusculo(string[j], posDeslocar);

        printf("%s\n", string);
    }
    return 0;
}

char deslocarPosMaiusculo (char c, int deslocar_posicoes) {
    if ((int) c <= (int) 'A' + deslocar_posicoes - 1)
        return (char) (c + 26 - deslocar_posicoes);
    else
        return (char) (c - deslocar_posicoes);
}