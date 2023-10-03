#include "lab.h"
 int n;
 
/* Função para ler o labirinto do arquivo */
void ReadMaze(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        fclose(file);
        exit(1);
    }else {
        printf("Arquivo aberto com sucesso\n");
    }

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
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}



/* funcao para de verificacao do maze */
/* bool PosicValida(int x, int y, int maze[n][n]){
    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] != '+'){       //verifica se a posicao eh valida
        return true;
    }
    return false;
} */

/* bool encontrar(int x, int y, int maze[n][n]){
    if (maze[x][y] == 'O'){                                             //verifica se chegou ao final
        return true;
    }


    if (PosicValida(x, y, maze)){                                       //verifica se a posicao eh valida
        
        maze[x][y] = '.';                                               //marca a posicao como visitada

        if (encontrar(x+1, y, maze)){                                   //verifica se a posicao abaixo eh valida
            maze[x + 1][y] = '|';  // Adiciona rastro vertical
            return true;
        }

        if (encontrar(x, y+1, maze)){                                   //verifica se a posicao a direita eh valida
            maze[x][y + 1] = '-';  // Adiciona rastro horizontal
            return true;
        }

        if (encontrar(x-1, y, maze)){                                   //verifica se a posicao acima eh valida
            maze[x - 1][y] = '|';  // Adiciona rastro vertical
            return true;
        }

        if (encontrar(x, y-1, maze)){                                   //verifica se a posicao a esquerda eh valida
            maze[x][y - 1] = '-';  // Adiciona rastro horizontal
            return true;
        }

        maze[x][y] = ' ';                                               //se nenhuma leva a saida, desmarco.
        return false;
    }
    return false;                                                       //se a posicao nao eh valida, retorna falso
} */
