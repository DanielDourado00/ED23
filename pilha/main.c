/* implementar uma pilha encadeada com as funcoes: criar pilha, verificar pilha vazia, push, pop, retorna o tamanho da pilha */
/* gcc -o stk main.c stack.c -lm */
#include "libs.h"
#include "stack.h"

int main(){

    int capacity;
    int value;
    char op;
    printf("Qual o tamanho da pilha que vc deseja? \n");
    scanf("%d", &capacity);                         // leio o tamanho da pilha que o usuario deseja
    stack *s = create_stack(capacity);              // crio a pilha com o tamanho que o usuario deseja indo ara a funcao create_stack quwe esta em stack.c
    is_empty(s);                                    //chama a funcao is_empty que esta em stack.c
    

    printf("Selecione no menu o que voce deseja: ");
    printf("Opcao 1: Verificar se a pilha esta vazia\n Opcao 2: Inserir na fila\n Opcao 3: Desempilhar\n Opcao 4: Saber o tamanho da pilha");
    scanf("");

    for (int i = 0; i < capacity; i++)              // loop para adicionar elementos na pilha
    {
        printf("Digite o valor que vc deseja adicionar na pilha: \n ");
        scanf("%d", &value);
        push(s, value);                             // chama a funcao push que esta em stack.c
    }

    return 0;
}