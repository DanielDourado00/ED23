#include "stack.h"

/* 3. Faça uma programa que use uma pilha para inverter a ordem das
letras de cada palavra de uma string, preservando a ordem das
palavras. */
/* .h da pilha usando array */
   

void start(stk *sk){
    sk->top = NULL;
}

int iSempty(stk *sk){
    if(sk->top == NULL){
        return 1;
    }else{
        return 0;
    }
}

void push(stk *sk, char data){
    no *new = (no*)malloc(sizeof(no));
    new->data = data;
    new->next = sk->top;
    sk->top = new;
}

void pop(stk *sk){
    if(iSempty(sk)){
        printf("Pilha esta vazia\n");
    }else{
        no *aux = sk->top;
        sk->top = sk->top->next;
        free(aux);
    }
}