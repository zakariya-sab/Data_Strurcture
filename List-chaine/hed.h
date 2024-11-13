//header file

#ifndef HED_H
#define HED_H
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
typedef struct donnee
{
    char *nom;
    int age;
} donnee;

typedef struct maillon
{
    struct maillon *svt;
    struct donnee *d;
} maillon;
void afiche(maillon *head);
maillon *cree(char *nome, int cp);
maillon *inserer_debut(maillon* head, char *nome, int cp);
maillon *inser_fin(maillon *head, char *nome, int cp);
void recherche(maillon *head, char *nome);
#endif