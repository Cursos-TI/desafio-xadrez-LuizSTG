#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int opcao;

    do {
        printf("*** MENU ***\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("0. Sair\n");
        printf("Escolha uma peça: ");
        scanf("%d", &opcao);

        int b = 1, r = 1; // reinicia contadores a cada escolha

        switch (opcao) {
            
        case 1: // Torre com FOR
            printf("Movimento da Torre:\n");
            for (int t = 1; t <= 5; t++) {
                printf("Direita\n");
            }
            break;

        case 2: // Bispo com WHILE
            printf("Movimento do Bispo:\n");
            while (b <= 5) {
                printf("Diagonal superior direita\n");
                b++;
            }
            break;

        case 3: // Rainha com DO WHILE
            printf("Movimento da Rainha:\n");
            do {
                printf("Esquerda\n");
                r++;
            } while (r <= 8);
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
