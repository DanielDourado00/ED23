#include "lab.h"

/* Função para ler o labirinto do arquivo */
void ReadMaze(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int n;
    fscanf(file, "%d", &n);
    printf("O tamanho do labirinto eh: %d\n", n);

    int maze[n][n];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; ++j) {
            fscanf(file, "%d", &maze[i][j]);
            
            /* Convertendo os valores em caracteres */
            if (maze[i][j] == 0) {
                maze[i][j] = ' ';  // Caminho livre


            } else if (maze[i][j] == 1) {
                maze[i][j] = '+';  // Parede
                
            } else if (maze[i][j] == 2) {
                maze[i][j] = 'X';  // Posição do personagem
            } else if (maze[i][j] == 3) {
                maze[i][j] = 'O';  // Chegada
            }
        }
    }

    fclose(file);

    /* Agora, você pode imprimir o labirinto com os caracteres corretos */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}


