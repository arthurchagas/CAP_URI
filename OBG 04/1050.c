/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 20/04/2017
 *
 * Objetivo: URI 1050
*/
#include <stdio.h>
#include <string.h>

int main() {
    char cidade[19];
    int ddd;

    scanf("%d", &ddd);

    if (ddd == 61)
        strcpy(cidade,"Brasilia");
    else if (ddd == 71)
        strcpy(cidade,"Salvador");
    else if (ddd == 11)
        strcpy(cidade,"Sao Paulo");
    else if (ddd == 21)
        strcpy(cidade, "Rio de Janeiro");
    else if (ddd == 32)
        strcpy(cidade,"Juiz de Fora");
    else if (ddd == 19)
        strcpy(cidade,"Campinas");
    else if (ddd == 27)
        strcpy(cidade,"Vitoria");
    else if (ddd == 31)
        strcpy(cidade,"Belo Horizonte");
    else
        strcpy(cidade,"DDD nao cadastrado");

    printf("%s\n",cidade);
    return 0;
}