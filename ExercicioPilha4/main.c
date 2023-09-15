/* Crie um programa que receba uma sequência de caracteres contendo
uma expressão aritmé tica e que veriGica se a sequência de parênteses e
colchetes está bem-formada (ou seja, parênteses e colchetes sã o
fechados na ordem inversa àquela em que foram abertos).

Por exemplo:
A expressã o [A+(B*C)] está bem-formada,
enquanto que (A*([B+D)/C] está malformada.

*Utilize uma pilha para resolver o problema!
*Armazene a entrada em uma sequência de caracteres (string) e como é hábito
em C, o último caractere da string é \0. */

#include "libs.h"
#include "stack.h"

int main()
{
    stk sk;
    start(&sk);
    char str[100];
    int i;
    printf("Digite uma expressao: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '[')
        {                      // Se for ( ou [, empilha
            push(&sk, str[i]); // Se for ) ou ], desempilha
        }
        else if (str[i] == ')')
        { // Se str[i] for )
            if (sk.top->data == '(')
            {             // Se o topo da pilha for (
                pop(&sk); // Desempilha pq o par foi fechado
            }
            else
            {
                printf("Expressao mal-formada\n"); // Se nao, expressao mal-formada
                return 0;
            }
        }
        else if (str[i] == ']')
        { // Se str[i] for ]
            if (sk.top->data == '[')
            {             // Se o topo da pilha for [
                pop(&sk); // Desempilha pq o par foi fechado
            }
            else
            {
                printf("Expressao mal-formada\n");
                return 0;
            }
        }
    }
    if (iSempty(&sk))                           // Se a pilha estiver vazia (ou seja, se todos os pares foram fechados)
    {
        printf("Expressao bem-formada\n");      // A expressao esta bem-formada 
    }
    else
    {
        printf("Expressao mal-formada\n");      // Se nao, expressao mal-formada
    }
    return 0;
}