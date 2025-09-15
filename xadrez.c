#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoTorre(int casas)
{
    if (casas < 10)
    {
        printf("Direita\n");
        movimentoTorre(casas + 1);
    }
}

void movimentoRainha(int casas)
{
    if (casas < 10)
    {
        printf("Direita\n");
        movimentoRainha(casas + 1);
    }
}

void movimentoBispo(int casas)
{
    if (casas < 10)
    {
        printf("Direita\n");
        movimentoBispo(casas + 1);
    }
}

int main() {
    int opcao;

    do {
        printf("*** MENU ***\n");
        printf("\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("0. Sair\n");
        printf("\n");
        printf("Escolha uma peça: ");
        scanf("%d", &opcao);
        printf("\n");

        int b = 1, r = 1; // reinicia contadores a cada escolha

        switch (opcao) {
            
        case 1: // Torre com FOR
            printf("Movimento da Torre:\n");
            printf("\n");

            movimentoTorre(5);
            printf("\n");
            
            break;

        case 2: // Bispo com WHILE
            printf("Movimento do Bispo:\n");
            printf("\n");

            while (b <= 5) 
            {
                printf("Diagonal superior direita\n");
                b++;
            }
            printf("\n");

            break;

        case 3: // Rainha com DO WHILE
            printf("Movimento da Rainha:\n");
            printf("\n");

            movimentoRainha(2);
            printf("\n");

            printf("\n");
            
            break;

        case 4:
        
            printf("Movimeto do Cavalo\n");
            printf("\n");

            int movimentoL = 1;

            while (movimentoL--)
            {
                for (int c = 1; c <= 2; c++)
                {
                    printf("Cima\n"); //Imprime Cima duas vezes
                }
                printf("Direita\n"); //Imprime Direita uma vez
            }
            printf("\n");

            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}
