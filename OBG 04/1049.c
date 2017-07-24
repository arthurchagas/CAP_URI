/*
 * Autor: Luiz Arthur Chagas Oliveira		RA 744344
 * Revisor: Luiz Arthur Chagas Oliveira		RA 744344
 * Data: 20/04/2017
 *
 * Objetivo: URI 1049
*/
#include <stdio.h>
#include <string.h>

int main() {
    char plvr1[13], plvr2[9], plvr3[11], plvr4[12];

    scanf("%s %s %s", &plvr1[0], &plvr2[0], &plvr3[0]);

    if (!strcmp(plvr1,"vertebrado")) {
        if (!strcmp(plvr2,"ave")) {
            if (!strcmp(plvr3,"carnivoro"))
                strcpy(plvr4,"aguia");
            else
                strcpy(plvr4,"pomba");
        } else {
            if (!strcmp(plvr3,"onivoro"))
                strcpy(plvr4,"homem");
            else
                strcpy(plvr4,"vaca");
        }
    } else {
        if (!strcmp(plvr2,"inseto")) {
            if (!strcmp(plvr3,"hematofago"))
                strcpy(plvr4,"pulga");
            else
                strcpy(plvr4,"lagarta");
        } else {
            if (!strcmp(plvr3,"hematofago"))
                strcpy(plvr4,"sanguessuga");
            else
                strcpy(plvr4,"minhoca");
        }
    }

    printf("%s\n", plvr4);

    return 0;
}