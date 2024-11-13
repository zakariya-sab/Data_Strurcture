#include "hed.h"
 
//la réponce de la Question 1 "Insérer au début"

// head :le pointeur sur la premiere element de la list 

// nome : le nom qui va etre stockeé dans la struct "d" ,d->nom

// cp : le int qui va etre stocke dans la struct "d", d->age

maillon *inserer_debut(maillon* head, char *nome, int cp)
{
    maillon *tp = cree(nome, cp);
    tp->svt = head;
    head =tp;
    return head;
}