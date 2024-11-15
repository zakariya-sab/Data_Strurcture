#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/*
lhadaf mn haxi rir bax ykon 3dna data structs 
    + ykono les fuction makay3tamdox 3la glabal data bax ila bit lcode mra okhra man3awdx n refactori :)
 */
#define STACK_MAX_SIZE 200
typedef struct
{
    char data[STACK_MAX_SIZE];
    int size;
} Stack;

// had func bax rir npripariw stack dyalna bax mantihox flmaxakil
Stack init_stack(){
    Stack st;
    for (int i = 0; i < STACK_MAX_SIZE; i++)
    {
        st.data[i] = '\0'; //n3mro the data b null
    }
    st.size = 0;
    return st;
}
void push(Stack* st, char d){
    //bina stack.size ykon sghr mn max size !
    assert(st->size < STACK_MAX_SIZE);

    st->data[st->size++] = d;
}
void pop(Stack* st){
    if(st->size == 0){
        printf("stack est vide!");
        return;
    }

    st->size--;
}

void print(Stack st){
    for (int i = 0; i < st.size; i++)
    {
        printf("%c",st.data[i]);
    }
    printf("\n");
}

// char action[200];
// tableau qui contien tout les action
// int top =-1;
// le top qui contien la l'indice de la dernier element ajoute

// une fonction qui ajoute un element
// void push(char c ){
//     if(top == 199){printf("la pile est plien ");}
//     else {
//         top++;
//         action[top]= c;
//     }
// }

// returne  la derrnirer element supprime
void Restaurer(Stack* st){
    st->size++;
}
//delete la dernier element
// void pop (){
//     if(top == -1){printf("il est vide ");}
//     else {
//         top--;

//     }
// }
void main(){
    Stack mainStack = init_stack();
    push(&mainStack, 'd');
    push(&mainStack, 'a');
    push(&mainStack, 't');
    push(&mainStack, 'a');
    push(&mainStack, '-');
    push(&mainStack, 'i');
    push(&mainStack, 's');
    push(&mainStack, '-');
    push(&mainStack, 'k');
    push(&mainStack, 'i');
    push(&mainStack, 'l');
    push(&mainStack, 'l');
    push(&mainStack, 'e');
    push(&mainStack, 'r');
    push(&mainStack, '!');
    push(&mainStack, '.');
    pop(&mainStack);
    pop(&mainStack);
    pop(&mainStack);
    pop(&mainStack);
    pop(&mainStack);
    Restaurer(&mainStack);
    Restaurer(&mainStack);
    Restaurer(&mainStack);
    push(&mainStack, '!');

    print(mainStack);
}