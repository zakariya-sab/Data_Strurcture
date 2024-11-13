#include "hed.h"
//la réponce de la Question 3 "Afficher les éléments de la liste " .

// head :le pointeur sur la premiere element de la list .

// nome : le nom qui on cherche .


void recherche(maillon *head, char *nome)
{
    maillon *tp = head;
    if (head == NULL)
    {
        printf(" La list est  vide ! ");
    }
    else
    {
        while (tp != NULL && strcmp(tp->d->nom, nome) != 0)
        {
            tp = tp->svt;
        }
    }
    if (tp != NULL)
    {
        printf("le nom est : %s", tp->d->nom);
    }
}