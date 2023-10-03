/* O que vou precisar para meu labirinto?

-> ler >n< que sera o tamanho (quadrado) do meu labirinto, portanto preciso de uma variavel 
para guardar o primeiro elemento do txt e logo depois, guardar os proximos valores.

-> le os valores da matriz e salva na matriz.

-> converter os valores da matriz em caracteres, para que eu possa imprimir bonitin

-> tendo em vista que meus caminhos vazios sao ' ', devo andar com o personagem por eles até achar a saida
(ultilizar backtracking)

->criar uma funcao que percorra todo o espaço de estados possiveis (caminhos vazios) (BRUTAL FORCE)
|_ funcao para verificar se uma posicao é possivel, ela te que ser diferente de 1 (parede)





-> para isso devo salver as coordenadas dentro da minha PILHA


->
*/

#include "libs.h"

void ReadMaze(const char *filename); // funcao para ler o meu arquivo labirinto.txt
/* funcao para verificar se posicao x y é valida */
bool PosicValida(int x, int y, int maze[n][n]);      // funcao para verificar se uma posicao é possivel, ela te que ser diferente de 1 (parede)
bool encontrar(int x, int y, int maze[n][n]);          // funcao para verificar se a posicao é a chegada