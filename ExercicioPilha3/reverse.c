/* 3. Faça uma programa que use uma pilha para inverter a ordem das
letras de cada palavra de uma string, preservando a ordem das
palavras. */


#include "libs.h"
#include "inverte.h"

int main(){

    char data[30];
    stk sk;     //cria uma variavel do tipo stk (struct stack)

    printf("Digite uma string: ");
    fgets(data, sizeof(data), stdin);
    
    start(&sk);     //inicializa a pilha
    /* empilhar */
    int len = strlen(data); //tamanho da string

    for(int i = 0; i < len; i++){                       //percorre a string ate len (tamanho da string)
        if(data[i] != ' ' && data[i] != '\n'){          //se o caractere for diferente de espaco e quebra de linha
            push(&sk, data[i]);                         //empilha o caractere na pilha sk 
        }else{                                           
            while(!iSempty(&sk)){                       //enquanto a pilha nao estiver vazia
                printf("%c", sk.top->data);             //imprime o dado do topo
                pop(&sk);                               //desempilha
            }
            printf(" ");                                //imprime um espaco para separar as palavras
        }
    }
}