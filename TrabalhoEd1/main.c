/* fazer um labirinto que use pilha para aplicar o algoritmo de Backtracking, */
/* cada caminho percorrido deve ser empilhado na pilha, caso nao ache uma saida, devo desempilhar e tentar novamente
posso mover nas quatros direções cardiais.
O labirinto vai ser uma matriz bidimencional na qual irá ser lida uma entrada atraves de um arquivo labirinto.txt 
que sera ira ler uma entrada "n" que representara as dimensoes do labirinto
Em seguida, nas próximas n linhas do arquivo, você
deverá inserir a matriz do labirinto como números inteiros separados por espaço
considerando a seguinte legenda:
• 1 – Parede.
• 0 – Caminho livre/vazio.
• 2 – Posição inicial do personagem.
• 3 – Posição de chegada.

Segue um exemplo do arquivo de entrada “labirinto.txt”:
9
1 1 1 1 1 1 1 1 1
1 2 1 0 0 0 1 0 1
1 0 1 0 1 0 0 0 1
1 0 0 0 1 0 1 0 1
1 1 1 1 1 0 1 3 1
1 1 1 1 1 0 1 1 1
1 0 0 0 0 0 0 0 1
1 1 0 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1

Exiba também, em tempo real, o personagem andando no labirinto mostrando o seu “rastro”
indo e voltando (pode ser com um ponto, ou qualquer outro caractere que quiser).*/


#include "libs.h"
#include "pilha.h"
#include "lab.h"


int main(int argc, char *argv[])
{

    printf("\nInforme o nome do arquivo que esta o labirinto\n");
    char filename[100];
    scanf("%s", filename);
    printf("\nO nome do arquivo eh: %s\n", filename);

    ReadMaze(filename);

    return 0;
}