/* O que vou precisar para meu labirinto?

-> ler >n< que sera o tamanho (quadrado) do meu labirinto, portanto preciso de uma variavel 
para guardar o primeiro elemento do txt e logo depois, guardar os proximos valores.

-> le os valores da matriz e salva na matriz.

-> converter os valores da matriz em caracteres, para que eu possa imprimir bonitin

-> tendo em vista que meus caminhos vazios sao ' ', devo andar com o personagem por eles até achar a saida
(ultilizar backtracking)

->criar uma funcao que percorra todo o espaço de estados possiveis (caminhos vazios) (BRUTAL FORCE)
|_ funcao para verificar se uma posicao é possivel, ela te que ser diferente de 1 (parede)
|_ funcao para verificar se a posicao é a chegada

-> para isso devo salver as coordenadas dentro da minha PILHA

-> tenho que empilhar as coordenadas na pilha sempre que eu andar por um caminho vazio e desempilhar quando eu voltar caso nao seja o melhor caminho

-> ao andar, devo deixar meu rastro:
Ideias:
        >caso eu ande para direita ou esquerda, meu rastro deve - na coluna, ou seja, supondo que minha posicao seja [1],[2], e eu me desloque para direita
        minha posicao sera [1],[3] e meu rastro devera ser - pos me desloquei horizontalmente
        >caso eu ande para cima ou para baixo, meu rastro deve ser | na linha, ou seja, supondo que minha posicao seja [1],[2], e eu me desloque para baixo
        minha posicao sera [2],[2] e meu rastro devera ser | pos me desloquei verticalmente
        
*/

#include "libs.h"

void ReadMaze(const char *filename); // funcao para ler o meu arquivo labirinto.txt
/* funcao para verificar se posicao x y é valida */

extern int n;

/* verificar o lab */
bool PosicValida(int x, int y, int maze[n][n]);      // funcao para verificar se uma posicao é possivel, ela te que ser diferente de 1 (parede)
    //x tem que ser maior ou igual a 0 e menor que n
    //y tem que ser maior ou igual a 0 e menor que n

/* funcao para verificar se a posicao é a chegada */
bool encontrar(int x, int y, int maze[n][n]);          // funcao para verificar se a posicao é a chegada
