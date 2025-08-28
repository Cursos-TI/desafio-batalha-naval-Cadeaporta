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

    // 2) Posicionar navio horizontal 
    int linhaH = 6, colunaH = 1;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // 3) Posicionar navio vertical 
    int linhaV = 6, colunaV = 7;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // Navio diagonal ↘ (principal)
int linhaD1 = 0, colunaD1 = 0;
for (int i = 0; i < tamanhoNavio; i++) {
    tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
}

// Navio diagonal ↙ (secundária)
int linhaD2 = 0, colunaD2 = 9;
for (int i = 0; i < tamanhoNavio; i++) {
    tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
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