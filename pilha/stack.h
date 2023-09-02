#ifndef STACK_H
#define STACK_H

typedef struct stack stack;
typedef struct node node;

stack *create_stack(int capacity);      //cria a pilha
int is_empty(stack *stack);             //verifica se a pilha está vazia
void push(stack *stack, int item);      //adiciona um item na pilha
void pop(stack *stack);                  //remove um item da pilha

#endif // STACK_H
