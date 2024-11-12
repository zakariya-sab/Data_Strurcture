// file a priorite
//code insertion dans une  file prioritaire
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    int priorite;
} node;
node *rear = NULL;
node *front = NULL;
node *cree(int data, int prio)
{
    node *new = malloc(sizeof(node));
    new->data = data;
    new->priorite = prio;
    new->next = NULL;
    return new;
}
void push(int data, int prio)
{
    // 1er cas : le cas vide
    if (front == NULL)
    {
        front = rear = cree(data, prio);
    }
    // 2eme cas : inserstion au debut

    else if ( front->priorite > prio)
    {
        node *ptr = cree(data, prio);
        ptr->next = front;
        front = ptr;
    }
    // 3eme cas : insertion au milieu
    else if (rear->priorite > prio)
    {
        node *current = front;
        node *previous = front;
        while ( current != NULL && current->priorite < prio)
        {
            previous = current;
            current = current->next;
        }
        node *new = cree(data, prio);
        new->next = current;
        previous->next = new;
    }
    //la 4eme cas : insertion au fin
    else
    {
        node *new = cree(data, prio);
        rear->next = new;
        rear = new;
    }
}
