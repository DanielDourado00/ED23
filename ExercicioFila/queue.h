#ifndef QUEUE_H
#define QUEUE_H

#include "libs.h"
/* deselvolvendo minha estrutura de fila dinamica */

 struct node{               // estrutura de um nó (celula)
    int data;
    struct node *next;
};
typedef struct node node;

struct queue{               // estrutura da fila
    node *head;             // ponteiro para o inicio da fila onde head aponta para o primeiro elemento
    node *tail;             // ponteiro para o final da fila
    int size;               // tamanho da fila
};
typedef struct queue queue;

queue *create_queue();      // cria uma fila
void insere(queue *q, int data, int tempo);   // insere um elemento na fila onde q é a fila e data é o elemento a ser inserido
#endif // QUEUE_H