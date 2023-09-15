#ifndef STACK_H
#define STACK_H

#include "libs.h"

typedef struct node{        //usados para representar os elementos individuais da pilha
    char data;               //dados da pilha (pratos)
    struct node *next;      //um ponteiro que apota para o proximo no da pilha(andar) encadeando os nós
}no;

typedef struct stack{       //representa a pilha em si (conjunto de pratos) indicar quem esta no topo
    struct node *top;       //ponteiro para o no superior (endereço do proximo prato para fazer a ligacao encadeada)
}stk;


/* inicializar a pilha */
void start(stk *sk);
int iSempty(stk *sk);
void push(stk *sk, char data);
void pop(stk *sk);

#endif