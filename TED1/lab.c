#include "lab.h"
#include "pilha.h"

/* vou precisar do */

/* variavel para tamanho da minha matriz */
int n;
/* variaveis para salver as coordenadas inciais (x e y) */
int startX, startY, endX, endY;

/* variavel para salver conteudo da matriz */

void ReadMaze(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        fclose(file);
        exit(1);
    }
    else
    {
        printf("Arquivo aberto com sucesso no lab.c\n");
    }

    fscanf(file, "%d", &n); // le o primeiro elemento do txt e guarda na variavel n

    int maze[n][n];         // cria a matriz com o tamanho n

    int i, j;               // variaveis para percorrer a matriz

    for (i = 0; i < n; i++)
    { // percorre as linhas
        for (j = 0; j < n; j++)
        {                                    // percorre as colunas
            fscanf(file, "%d", &maze[i][j]); // le os valores da matriz e salva na matriz

            if (maze[i][j] == 2)
            {
                /* maze[i][j] = 'X'; // Posição do personagem */
                startY = i; // representa a coluna
                startX = j; // representa a linha

                /* empilhar as coordendas iniciais */
                // empilhar(startX, startY);
            }
            else if (maze[i][j] == 3)
            {
                /* maze[i][j] = 'X'; // Posição do personagem */
                endY = i; // representa a coluna
                endX = j; // representa a linha

                /* empilhar as coordendas iniciais */
                // empilhar(startX, startY);
            }
        }
    }
    printf("\n");
    imprimirLabirinto(maze);            // funcao para imprimir o labirinto

    printf("valores de startX %d, startY %d, endX %d, endY %d, n %d em lab.c:\n", startX, startY, endX, endY, n);   
    solveMaze(startX, startY, endX, endY, n, maze); // funcao para resolver o labirinto
}

/* implementando backtracking para resolver o labirinto */

int solveMaze(int startX, int startY, int endX, int endY, int n, int maze[n][n]) {
    // Criar uma pilha para armazenar as coordenadas

    printf("entrou em solveMaze\n");

    Stack *stack = createStack();

    // Marcar a posição inicial como visitada
    maze[startX][startY] = 1;

    // Empilhar a posição inicial
    push(stack, startX, startY);

    while (!isEmpty(stack)) {
        int x, y;
        // Obter as coordenadas do topo da pilha
        peek(stack, &x, &y);

        // Verificar se chegamos à posição de chegada
        if (x == endX && y == endY) {
            imprimirLabirinto(maze);
            return 1; // Labirinto resolvido
        }else{
            printf("nao chegou na posicao final\n");
        }

        // Tentar mover para a direita
        if (y + 1 < n && maze[x][y + 1] == 0) {
            y++;
            printf("chegou aqui na parte de movimentacao\n");
            imprimirLabirinto(maze);
        }
        // Tentar mover para baixo
        else if (x + 1 < n && maze[x + 1][y] == 0) {
            x++;
            imprimirLabirinto(maze);
        }
        // Tentar mover para a esquerda
        else if (y - 1 >= 0 && maze[x][y - 1] == 0) {
            y--;
            imprimirLabirinto(maze);
        }
        // Tentar mover para cima
        else if (x - 1 >= 0 && maze[x - 1][y] == 0) {
            x--;
            imprimirLabirinto(maze);
        } else {
            // Se não for possível mover em nenhuma direção, desempilhe a posição atual
            pop(stack);
            continue;
        }
            
        // Marcar a nova posição como visitada e empilhar
        maze[x][y] = 5;
        push(stack, x, y);
    }

    // Se a pilha estiver vazia e não encontrarmos uma solução
    return 0;
}

bool PosicValida(int x, int y, int n, int maze[n][n])
{
    /* funcao para verificar se uma posicao é possivel, ela te que ser diferente de 1 (parede) */
    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] != 1)
    // se x e y forem maiores ou iguais a 0 e menores que n e a posicao for diferente de 1 (parede)
    {
        return true;
    }
    return false;
}

void imprimirLabirinto(int maze[n][n])
{
    /* system("clear"); // Limpa a tela */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }

    // Aguarda um pequeno intervalo de tempo (opcional, para animação)
    // Você pode ajustar o tempo de pausa de acordo com suas preferências
    usleep(50000); // Pausa por 50 milissegundos (50,000 microssegundos)
}