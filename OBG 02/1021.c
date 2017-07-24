/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 18/04/2017
 *
 * Objetivo: URI 1021
*/
#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int moedas1c, moedas5c, moedas10c, moedas25c, moedas50c, moedas100c, notas2r, notas5r, notas10r, notas20r, notas50r, notas100r;

    scanf("%lf", &valor);
    moedas1c = valor*100;
    notas100r = moedas1c/10000;
    moedas1c = fmod(moedas1c,10000);
    notas50r = moedas1c/5000;
    moedas1c = fmod(moedas1c,5000);
    notas20r = moedas1c/2000;
    moedas1c = fmod(moedas1c,2000);
    notas10r = moedas1c/1000;
    moedas1c = fmod(moedas1c,1000);
    notas5r = moedas1c/500;
    moedas1c = fmod(moedas1c,500);
    notas2r = moedas1c/200;
    moedas1c = fmod(moedas1c,200);
    moedas100c = moedas1c/100;
    moedas1c = fmod(moedas1c,100);
    moedas50c = moedas1c/50;
    moedas1c = fmod(moedas1c,50);
    moedas25c = moedas1c/25;
    moedas1c = fmod(moedas1c,25);
    moedas10c = moedas1c/10;
    moedas1c = fmod(moedas1c,10);
    moedas5c = moedas1c/5;
    moedas1c = fmod(moedas1c,5);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",notas100r);
    printf("%d nota(s) de R$ 50.00\n",notas50r);
    printf("%d nota(s) de R$ 20.00\n",notas20r);
    printf("%d nota(s) de R$ 10.00\n",notas10r);
    printf("%d nota(s) de R$ 5.00\n",notas5r);
    printf("%d nota(s) de R$ 2.00\n",notas2r);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",moedas100c);
    printf("%d moeda(s) de R$ 0.50\n",moedas50c);
    printf("%d moeda(s) de R$ 0.25\n",moedas25c);
    printf("%d moeda(s) de R$ 0.10\n",moedas10c);
    printf("%d moeda(s) de R$ 0.05\n",moedas5c);
    printf("%d moeda(s) de R$ 0.01\n",moedas1c);

    return 0;
}
