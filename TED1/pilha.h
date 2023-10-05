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



/* void imprimirLabirinto(int maze[n][n])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (maze[i][j] == 1)
            {
                printf("+  ");
            }
            else if (maze[i][j] == 2)
            {
                printf("1  ");
            }
            else if (maze[i][j] == 3)
            {
                printf("O  ");
            }
            else if (maze[i][j] == 5)
            {
                printf("X  ");
            }
            else
            {
                printf("   ");
            }
           
        }
        printf("\n");
    }

    // Aguarda um pequeno intervalo de tempo (opcional, para animação)
    // Você pode ajustar o tempo de pausa de acordo com suas preferências
    usleep(100000); // Pausa por 50 milissegundos (50,000 microssegundos)
} */