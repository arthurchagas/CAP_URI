/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 20/04/2017
 *
 * Objetivo: URI 1052
*/
#include <stdio.h>
#include <string.h>

int main() {
    int mes;
    char stringMes[10];

    scanf("%d",&mes);
    switch(mes) {
        case 1: strcpy(stringMes,"January"); break;
        case 2: strcpy(stringMes,"February"); break;
        case 3: strcpy(stringMes,"March"); break;
        case 4: strcpy(stringMes,"April"); break;
        case 5: strcpy(stringMes,"May"); break;
        case 6: strcpy(stringMes,"June"); break;
        case 7: strcpy(stringMes,"July"); break;
        case 8: strcpy(stringMes,"August"); break;
        case 9: strcpy(stringMes,"September"); break;
        case 10: strcpy(stringMes,"October"); break;
        case 11: strcpy(stringMes,"November"); break;
        case 12: strcpy(stringMes,"December"); break;
        default: break;
    }

    printf("%s\n", stringMes);
    return 0;
}