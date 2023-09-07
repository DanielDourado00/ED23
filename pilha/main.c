/* implementar uma pilha encadeada com as funcoes: criar pilha, verificar pilha vazia, push, pop, retorna o tamanho da pilha */
/* gcc -o stk main.c stack.c -lm */
#include "libs.h"
#include "stack.h"

int main()
{

    int capacity;
    int value;
    int op;
    printf("Qual o tamanho da pilha que vc deseja? \n");
    scanf("%d", &capacity);            // leio o tamanho da pilha que o usuario deseja
    stack *s = create_stack(capacity); // crio a pilha com o tamanho que o usuario deseja indo ara a funcao create_stack quwe esta em stack.c

    do
    {
        printf("\n1: Verificar se a pilha esta vazia\n2: Inserir na fila\n3: Desempilhar\n4: Saber tamanho da pilha\n5: Sair\n");
        printf("Selecione no menu o que voce deseja:\n ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            is_empty(s); // chama a funcao is_empty que esta em stack.c
            break;
        case 2:
            for (int i = 0; i < capacity; i++) // loop para adicionar elementos na pilha
            {
                printf("\nDigite o valor que vc deseja adicionar na pilha: \n ");
                scanf("%d", &value);
                push(s, value); // chama a funcao push que esta em stack.c
            }
            break;
        case 3:
            pop(s); // chama a funcao pop que esta em stack.c
            break;
        case 4:
            print_stack(s); // chama a funcao print_stack que esta em stack.c
            break;
        }

    } while (op != 5);

    return 0;
}