#ifndef PILHA_H
#define PILHA_H

#include "libs.h"

/* inciando pilha dinamica */
/* criando uma struct node onde tem coordenadas x e y para o labirinto */


/*===========================structs===========================*/
typedef struct{
    int x;  // coordenada x
    int y;  // coordenada y
}coordenadas;

typedef struct node{
    coordenadas coord;  // coordenadas do labirinto
    struct node *prox;  // proximo elemento
}node;
/*===========================structs===========================*/


/* funcao para iniciar pilha */
node *criarnode(coordenadas coord);
/* funcao para empilhar as coordendas */
void empilhar(node **topo, coordenadas coord);
/* funcao para desempilhar as coordenadas */
coordenadas desempilhar(node **topo);
/* verificar pilha vazia */
int empity(node *topo);

#endif
