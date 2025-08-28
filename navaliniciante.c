#include <stdio.h>

int main() {
    int tabuleiro[10][10];  // tabuleiro 10x10
    int tamanhoNavio = 3;   // cada navio ocupa 3 posições
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    // 1) Inicializar o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2) Posicionar navio horizontal (linha 2, colunas 4 a 6)
    int linhaH = 2, colunaH = 4;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // 3) Posicionar navio vertical (coluna 7, linhas 6 a 8)
    int linhaV = 6, colunaV = 7;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // 4) Exibir o tabuleiro
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

