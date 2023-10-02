#include "queue.h"

/* fila do tipo dinamica */

queue *create_queue(){
    queue *q = (queue *) malloc(sizeof(queue));
    q->head = NULL;                             // inicializa a fila com a cabeca apontando para NULL
    q->tail = NULL;                             // inicializa a fila com a cauda apontando para NULL
    return q;
}

void insere(queue *Queue, int data, int tempo){
    node *new_node = (node *) malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    if(Queue->head == NULL){
        Queue->head = new_node;
        Queue->tail = new_node;
    }else{
        Queue->tail->next = new_node;
        Queue->tail = new_node;
    }
}