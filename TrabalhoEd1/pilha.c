#include "pilha.h"

/* pilha dinamica onde sua estrutura esta no pilha.h */
/* criando structs necessarios para pilha dinamica */


/* criando novo no */
node *criarnode(coordenadas coord){
    node *novo = (node *)malloc(sizeof(node));       // alocando memoria para novo no
    novo->coord = coord;                             // atribuindo coordenadas ao novo no
    novo->prox = NULL;                               // proximo no aponta para NULL
    return novo;                                     // retorna novo no criado para ser inserido na pilha
}

void empilhar(node **topo, coordenadas coord){       //ponteiro duplo para topo da pilha e coordenadas, pois topo da pilha é um ponteiro
    node *novo = criarnode(coord);                   // criando novo no e atribuindo a ele as coordenadas passadas como parametro para a funcao empilhar
    novo->prox = *topo;                              // novo no aponta para o topo
    *topo = novo;                                    // topo aponta para novo no
}

coordenadas desempilhar(node **topo){
    if(*topo == NULL){
        printf("Pilha vazia\n");
        exit(1);
    }
    node *aux = *topo;                               // auxiliar recebe o topo da pilha
    coordenadas coord = aux->coord;                  // coordenadas recebe as coordenadas do topo da pilha
    *topo = aux->prox;                               // topo aponta para o proximo no
    free(aux);                                       // libera memoria do no que foi desempilhado
    return coord;                                    // retorna coordenadas do no desempilhado
}

int empity(node *topo){
    if(topo == NULL){
        return 1;
    }
    return 0;
}

