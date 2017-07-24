#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decToHex (long int, char *);

int main() {
    char num[10];

    scanf("%s", num);
    while (num[0] != '-') {
        if (num[1] == 'x')
            printf("%li\n", strtol(num, NULL, 16));
        else {
            char hex[9] = "";
            decToHex(strtol(num, NULL, 10), hex);
            printf("0x%s\n", hex);
        }

        scanf("%s", num);
    }
    return 0;
}

void decToHex (long int dec, char * hex) {
    int i, j;
    char base16chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (dec / 16 > 0) {
        hex[strlen(hex)] = base16chars[dec % 16];
        dec /= 16;
    }
    hex[strlen(hex)] = base16chars[dec];

    for (i = 0, j = (int) strlen(hex) - 1; i < (int) strlen(hex) / 2; ++i, --j) {
        char aux = hex[i];
        hex[i] = hex[j];
        hex[j] = aux;
    }
}