#include "pilha.h"

/* funcao para criar a pilha */

Stack *createStack()
{
/* inicializar topo com -1 */
    Stack *stack = (Stack *)malloc(sizeof(Stack));  // alocar memoria para a pilha
    stack->top = NULL;      // topo da pilha vazia
    return stack;   
}

/* funcao push na qual vai receber as coordenadas do labirinto para empilhar */
void push(Stack *stack, int x, int y){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->x = x;
    newNode->y = y;
    newNode->next = stack->top;
    stack->top = newNode;
}

/* funcao pop na qual vai desempilhar a pilha */
void pop(Stack *stack){
    if(isEmpty(stack)){
        printf("Pilha vazia\n");
    }else{
        Node *aux = stack->top;
        stack->top = stack->top->next;
        free(aux);
    }
}

/* funcao para verificar se a pilha esta vazia */
int isEmpty(Stack *stack){
    return (stack->top == NULL);
}

/* erificar o elemento no topo da pilha sem removê-lo. */
void peek(Stack *stack, int *x, int *y){
    if(isEmpty(stack)){
        printf("Pilha vazia\n");
    }else{
        *x = stack->top->x;
        *y = stack->top->y;
    }
}

void imprimestack(Stack *stack){
    Node *aux = stack->top;
    while(aux != NULL){
        printf("x: %d, y: %d\n", aux->x, aux->y);
        aux = aux->next;
    }
}