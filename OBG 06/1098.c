#include <stdio.h>

int main() {
    double i = 0, j = 1;
    int count = 0, count2 = 0;
    char msg[20];
    while (i < 2) {
        if (count2 < 3)
            sprintf(msg, "I=%.0lf J=%.0lf", i, j);
        else
            sprintf(msg, "I=%.1lf J=%.1lf", i, j);
        printf("%s\n",msg);

        if (count2 == 14)
            count2 = -1;

        if (count == 2) {
            j -= 1.8;
            i += 0.2;
            count = 0;
        } else {
            j++;
            count++;
        }

        count2++;
    }
}