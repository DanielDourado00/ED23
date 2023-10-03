#include "lab.h"

/* lendo arquivo */

void ReadMaze(const char *filename)
{
    FILE *file = fopen(filename, "r");              // abrindo o arquivo para leitura
    if (file == NULL)                               // se o arquivo nao existir, entao saia do programa e mostre uma mensagem de erro
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int n;                                          // variavel para guardar o tamanho do labirinto
    fscanf(file, "%d", &n);                         // lendo o primeiro elemento do arquivo que sera o tamanho do labirinto
    printf("O tamanho do labirinto eh: %d\n", n);   // mostrando o tamanho do labirinto

    int maze[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; ++j)
        {
            fscanf(file, "%d", &maze[i][j]);
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
    fclose(file);
}

/* printar labirinto */

