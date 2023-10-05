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

    int maze[n][n]; // cria a matriz com o tamanho n

    int i, j; // variaveis para percorrer a matriz

    for (i = 0; i < n; i++)
    { // percorre as linhas
        for (j = 0; j < n; j++)
        {                                    // percorre as colunas
            fscanf(file, "%d", &maze[i][j]); // le os valores da matriz e salva na matriz

            if (maze[i][j] == 2)
            {
                /* maze[i][j] = 'X'; // Posição do personagem */
                startY = j; // representa a coluna
                startX = i; // representa a linha

                /* empilhar as coordendas iniciais */
                // empilhar(startX, startY);
            }
            else if (maze[i][j] == 3)
            {
                /* maze[i][j] = 'X'; // Posição do personagem */
                endY = j; // representa a coluna
                endX = i; // representa a linha

                /* empilhar as coordendas iniciais */
                // empilhar(startX, startY);
            }
        }
    }
    printf("\n");
    imprimirLabirinto(maze); // funcao para imprimir o labirinto

    printf("valores de startX %d, startY %d, endX %d, endY %d, n %d em lab.c:\n", startX, startY, endX, endY, endY);
    solveMaze(startX, startY, endX, endY, n, maze); // funcao para resolver o labirinto
}

/* implementando backtracking para resolver o labirinto */

int solveMaze(int startX, int startY, int endX, int endY, int n, int maze[n][n])
{

    // conteudo do endX e endY
    /*     printf("\t\t\tconteudo de endx: %d e endY: %d em SOLVEMAZE\n\n:", endX, endY); */
    // Criar uma pilha para armazenar as coordenadas
    int x = startX, y = startY;
    /* printf("entrou em solveMaze\n"); */

    Stack *stack = createStack();

    // Marcar a posição inicial como visitada
    maze[startX][startY] = 5;

    // Empilhar a posição inicial
    push(stack, startX, startY);

    while (!isEmpty(stack))
    {
        int x, y;
        /*         printf("entrou no while de solveMaze\n");
                printf("valor de x e y %d %d\n", x, y); */

        // Obter as coordenadas do topo da pilha
        peek(stack, &x, &y);

        // Verificar se chegamos à posição de chegada
        /*         printf("conteudo de x(linha)[cresce para baixo]: %d\n conteudo de y(coluna)[cresce para direita]: %d\n conteudo de endX: %d\n conteudo de endY: %d\n", x, y, endX, endY);
         */
        if (x == endX && y == endY)
        {
            printf("PARABÉNS VOCE CONSEGUEU SAIR DO LABIRINTO\n");
            printf("              .-=========-.\n");
            printf("              \\'-=======-'/\n");
            printf("              _|   .=.   |_\n");
            printf("             ((|  {{1}}  |))\n");
            printf("              \\|   /|\\   |/\n");
            printf("               \\__ '`' __/\n");
            printf("                 _`) (`_\n");
            printf("               _/_______\\_\n");
            printf("              /___________\\\n");
            return 1; // Labirinto resolvido
        }

        // Tentar mover para a direita
        if (y + 1 < n && (maze[x][y + 1] == 0 || maze[x][y + 1] == 3))
        {
            imprimirLabirinto(maze);
            y++;
            /*          printf("valor de y %d\n", y);
                        printf("valor de x %d\n", x);
                        printf("chegou aqui na parte de movimentacao\n"); */
        }
        // Tentar mover para baixo
        else if (x + 1 < n && (maze[x + 1][y] == 0 || maze[x + 1][y] == 3))
        {
            x++;
            imprimirLabirinto(maze);
        }
        // Tentar mover para a esquerda
        else if (y - 1 >= 0 && (maze[x][y - 1] == 0 || maze[x][y - 1] == 3))
        {
            y--;
            imprimirLabirinto(maze);
        }
        // Tentar mover para cima
        else if (x - 1 >= 0 && (maze[x - 1][y] == 0 || maze[x - 1][y] == 3))
        {
            x--;
            imprimirLabirinto(maze);
        }
        else
        {
            // Se não for possível mover em nenhuma direção, desempilhe a posição atual
            pop(stack);     // desempilhar
            maze[x][y] = 9; // marcar como visitado
            continue;
        }

        // Marcar a nova posição como visitada e empilhar
        maze[x][y] = 5;
        push(stack, x, y);
    }

    // Se a pilha estiver vazia e não encontrarmos uma solução

    // se nao foi possivel sair log isEmpty vai ser true entao vai imprimir a mensagem
    if (isEmpty(stack))
    {
        system("clear");

        printf("\n\n");
        printf("\t\t\t\t\t\t\t      L       OOO       SSS     EEEE      RRRR\n");
        printf("\t\t\t\t\t\t\t      L      O   O     S        E         R   R\n");
        printf("\t\t\t\t\t\t\t      L      O   O       SS     EEE       RRRR\n");
        printf("\t\t\t\t\t\t\t      L      O   O         S    E         R  R\n");
        printf("\t\t\t\t\t\t\t      L L L   OOO       SSS     EEEE      R   R\n");
        printf("\n\n");

    }

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

    system("clear");
    // printf("maze[1][1] %d\n", maze[1][1]);

    /*  getchar(); */
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
                printf("M  ");
            }
            else if (maze[i][j] == 3)
            {
                printf("O  ");
            }
            else if (maze[i][j] == 5)
            {
                printf(".  ");
            }
            /*             else if (maze[i][i] == 9)
                        {
                            printf("X  ");
                        } */
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    // Aguarda um pequeno intervalo de tempo (opcional, para animação)
    // Você pode ajustar o tempo de pausa de acordo com suas preferências
    usleep(1200000); // Pausa por 50 milissegundos (50,000 microssegundos)
}