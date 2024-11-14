/*

Exercice  : Gestion des Annulations d'Actions (Système de Gestion d'Actions)

* Implémenter un système de gestion d'actions pour un éditeur de texte en utilisant une
pile.

* Chaque action effectuée (par exemple : ajouter, supprimer ou modifier un texte) doit
être enregistrée dans une pile.

* Implémenter la fonctionnalité "Annuler" qui permet de revenir à l'action précédente.

* Ajouter une fonctionnalité "Restaurer" qui permet de réappliquer une action annulée.

* Tests : Créer un cas où plusieurs actions sont effectuées, puis tester les fonctionnalités
d'annulation et de restauration.

*/
#include<stdio.h>
#include<stdlib.h>

char action[200];
// tableau qui contien tout les action
int top =-1;
// le top qui contien la l'indice de la dernier element ajoute

// une fonction qui ajoute un element
void push(char c ){
    if(top == 199){printf("la pile est plien ");}
    else {
        top++;
        action[top]= c;
    }
}

// returne  la derrnirer element supprime
void Restaurer(){
    top++;
}
//delete la dernier element
void pop (){
    if(top == -1){printf("il est vide ");}
    else {
        top--;

    }
}
void main(){
    push('d');
    push('a');
    push('t');
    push('a');
    push('-');
    push('i');
    push('s');
    push('-');
    push('k');
    push('i');
    push('l');
    push('l');
    push('e');
    push('r');
    push('!');
    push('.');
    pop();
    pop();
    pop();
    pop();
    pop();
    Restaurer();
    Restaurer();
    Restaurer();
    push('!');



    for(int i =0 ;i<=top;i++)
    {
        printf("%c",action[i]);
    }
}

