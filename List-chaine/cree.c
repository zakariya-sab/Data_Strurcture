#include "hed.h"
// une fonction pour faciliser l'écriture 

// le role de la fonction est créer un node 

// nome : le nom qui va etre stockeé dans la struct "d" ,d->nom

// cp : le int qui va etre stocke dans la struct "d", d->age

maillon *cree(char *nome, int cp)
{
    maillon *tp = malloc(sizeof(maillon));
    tp->d->age = cp;
    tp->d->nom = nome;
    tp->svt = NULL;
    return tp;
}