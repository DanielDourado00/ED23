#include "stack.h"
#include "libs.h"

/* =======================structs======================= */

/* primeira struct stack para  */
struct stack
{
    node *top;    // topo da pilha uso node* pois o topo é um ponteiro
    int capacity; // capacidade da pilha
};

struct node
{
    int valor;         // guarda o dado
    struct node *prox; // guarda o endereço do proximo nó é usado struct pois o proximo nó é um ponteiro
};

/* ========================FUNÇOES======================== */

stack *create_stack(int capacity)
{
    stack *s = (stack*)malloc(sizeof(stack));
    s->capacity = capacity;
    s->top = NULL;                      //coloco null em vez de -1 pq o topo é um ponteiro entao nao tem como ser -1 pois -1 é um inteiro e ponteiro é um endereço de memoria
    printf("\nPilha criada com sucesso!!!!! /n");
    printf("\t\t o tamanho da pilha é %d\n", s->capacity);
    return s; // retorna a pilha criada
}

int is_empty(stack *s)
{
    {
        if (s->top == NULL)  // se o topo for igual a -1 a pilha está vazia
        {
            printf("\n A pilha está vazia\n");
        }
        else
        {
            printf("\n A pilha não está vazia\n");
            return 0; // pilha não está vazia
        }
    }
}

/* tendo em vista que top foi incicializado com = NULL e eu quero usar a funcao push para adicionar elementor na minha pilha com uma leitura do usuario */

void push (stack *s, int value)
{
    node *novo = (node*)malloc(sizeof(node)); // crio um novo nó
    novo->valor = value;                      // coloco o valor que o usuario digitou no novo nó
    novo->prox = s->top;                      // coloco o endereço do topo na variavel prox do novo nó
    s->top = novo;                            // coloco o endereço do novo nó no topo
    printf("\nO valor %d foi adicionado com sucesso\n", value);
}




