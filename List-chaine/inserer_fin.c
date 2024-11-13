#include "hed.h"

//la réponce de la Question 2 "Insérer en fin,"

// head :le pointeur sur la premiere element de la list 

// nome : le nom qui va etre stockeé dans la struct "d" ,d->nom

// cp : le int qui va etre stocke dans la struct "d", d->age

maillon *inser_fin(maillon *head, char *nome, int cp)
{
    if (head == NULL)
    {
        return inserer_debut(head, nome, cp);
    }
    else
    {
        maillon *tp = cree( nome, cp);
        maillon *pr = head;
        while (pr->svt != NULL)
        {
            pr = pr->svt;
        }
        pr->svt = tp;
    }
}