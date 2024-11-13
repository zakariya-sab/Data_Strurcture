#include"hed.h"
// La réponse de la Question 4 "Afficher les éléments de la liste. "

// head :le pointeur sur la premiere element de la list 

void afiche(maillon *head)
{
    while(head!=NULL)
    {
        printf("%s",head->d->nom);
    }
}