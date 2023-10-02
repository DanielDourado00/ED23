/* Inicio dos estudos com a data struct fila */

/* Faça um programa que simule uma :ila de processos em um
sistema operacional. Essa :ila tera
́
́
um tempo para utilizar cada um

dos seus processos. No caso de um processo estar sendo
executado e seu limite de tempo se encerrar, ele é removido e
colocado na :ila novamente; dessa maneira, o próximo processo
passa a ser executado, e assim por diante, atéque todos os
processos tenham sido executados.
• Este gerenciamento deve ser exibido automaticamente. Ou seja, apó s deRinir
os processos e seus tempos limite, e enRileirá-los, o processo se inicia.
• DeRina um tempo de espera padrã o em segundos para cada unidade de
tempo do seu sistema. Utilize a biblioteca time.h. */

#include "libs.h"
#include "queue.h"

int main()
{
    time_t tempo;
    int opcao;
    queue *fila = create_queue();
    int tempo = 2; // tempo de espera padrão em segundos para cada unidade de tempo do sistema
    do
    {

        printf("\nFila de processos\n");
        printf("1 - Inserir processo\n");
        printf("2 - Remover processo\n");
        printf("3 - Listar processos\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Insira o nome do processo: ");
            char nome[20];
            scanf("%s", nome);
            printf("Insira o tempo de execucao do processo: ");
            int tempo;
            scanf("%d", &tempo);
            insere(fila, nome, tempo);
            break;
        }
    } while (opcao != 4);               // enquanto a opcao for diferente de 4, o programa continua rodando
}
