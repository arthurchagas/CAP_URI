#include <stdio.h>
#include <math.h>

int main() {
    while (1) {
        int areaCasa, percentualTerreno, ladoCasaA, ladoCasaB, areaTerreno;

        scanf("%d", &ladoCasaA);
        if (ladoCasaA == 0)
            break;

        scanf("%d %d", &ladoCasaB, &percentualTerreno);

        areaCasa = ladoCasaA * ladoCasaB;
        areaTerreno = areaCasa*100/percentualTerreno;

        printf("%d\n", (int) sqrt(areaTerreno));
    }
    return 0;
}