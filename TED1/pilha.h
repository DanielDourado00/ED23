#ifndef PILHA_H
#define PILHA_H

#include "libs.h"




/* estrutura para pilha dinamica onde */


typedef struct node
{
    int x;                  /* coordenada x */
    int y;                  /* coordenada y */
    struct node *next;      /* proximo no */
} Node;

typedef struct stack
{
    Node *top;              /* topo da pilha */
} Stack;                    

/* funcoes para pilha */

/* funcao para criar a pilha */
Stack *createStack();

/* funcao push na qual vai receber as coordenadas do labirinto para empilhar */

void push(Stack *stack, int x, int y);

/* funcao pop na qual vai desempilhar a pilha */
void pop(Stack *stack);

/* funcao para verificar se a pilha esta vazia */
int isEmpty(Stack *stack);

/* erificar o elemento no topo da pilha sem remover. */
void peek(Stack *stack, int *x, int *y);



#endif // PILHA_H