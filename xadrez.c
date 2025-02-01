#include <stdio.h>

// Função recursiva para movimentação do Bispo
void movimento_bispo(int x, int y, int limite) {
    if (x < 0 || x >= limite || y < 0 || y >= limite) return;

    // Movimentação diagonal para cima e para a direita
    printf("Bispo em: (%d, %d)\n", x, y);
    movimento_bispo(x + 1, y + 1, limite);
    movimento_bispo(x - 1, y - 1, limite);
    
    // Movimentação diagonal para cima e para a esquerda
    printf("Bispo em: (%d, %d)\n", x, y);
    movimento_bispo(x + 1, y - 1, limite);
    movimento_bispo(x - 1, y + 1, limite);
}

// Função para movimentação da Torre
void movimento_torre(int x, int y, int limite) {
    // Movimentação para a direita
    for (int i = y; i < limite; i++) {
        printf("Torre em: (%d, %d)\n", x, i);
    }
    // Movimentação para a esquerda
    for (int i = y; i >= 0; i--) {
        printf("Torre em: (%d, %d)\n", x, i);
    }
    // Movimentação para cima
    for (int i = x; i >= 0; i--) {
        printf("Torre em: (%d, %d)\n", i, y);
    }
    // Movimentação para baixo
    for (int i = x; i < limite; i++) {
        printf("Torre em: (%d, %d)\n", i, y);
    }
}

// Função para movimentação da Rainha
void movimento_rainha(int x, int y, int limite) {
    // Movimentação para a direita
    for (int i = y; i < limite; i++) {
        printf("Rainha em: (%d, %d)\n", x, i);
    }
    // Movimentação para a esquerda
    for (int i = y; i >= 0; i--) {
        printf("Rainha em: (%d, %d)\n", x, i);
    }
    // Movimentação para cima
    for (int i = x; i >= 0; i--) {
        printf("Rainha em: (%d, %d)\n", i, y);
    }
    // Movimentação para baixo
    for (int i = x; i < limite; i++) {
        printf("Rainha em: (%d, %d)\n", i, y);
    }
    // Movimentação diagonal para cima e para a direita
    for (int i = 1; i < limite; i++) {
        if (x + i < limite && y + i < limite) {
            printf("Rainha em: (%d, %d)\n", x + i, y + i);
        }
    }
    // Movimentação diagonal para cima e para a esquerda
    for (int i = 1; i < limite; i++) {
        if (x + i < limite && y - i >= 0) {
            printf("Rainha em: (%d, %d)\n", x + i, y - i);
        }
    }
    // Movimentação diagonal para baixo e para a direita
    for (int i = 1; i < limite; i++) {
        if (x - i >= 0 && y + i < limite) {
            printf("Rainha em: (%d, %d)\n", x - i, y + i);
        }
    }
    // Movimentação diagonal para baixo e para a esquerda
    for (int i = 1; i < limite; i++) {
        if (x - i >= 0 && y - i >= 0) {
            printf("Rainha em: (%d, %d)\n", x - i, y - i);
        }
    }
}

// Função para movimentação do Cavalo (com loops aninhados)
void movimento_cavalo(int x, int y, int limite) {
    int movimentos[8][2] = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };
    for (int i = 0; i < 8; i++) {
        int novo_x = x + movimentos[i][0];
        int novo_y = y + movimentos[i][1];
        if (novo_x >= 0 && novo_x < limite && novo_y >= 0 && novo_y < limite) {
            printf("Cavalo em: (%d, %d)\n", novo_x, novo_y);
        }
    }
}

int main() {
    int limite = 8;  // Tabuleiro 8x8
    int x = 4, y = 4;  // Posição inicial do jogador

    printf("Movimentacao do Bispo:\n");
    movimento_bispo(x, y, limite);

    printf("\nMovimentacao da Torre:\n");
    movimento_torre(x, y, limite);

    printf("\nMovimentacao da Rainha:\n");
    movimento_rainha(x, y, limite);

    printf("\nMovimentacao do Cavalo:\n");
    movimento_cavalo(x, y, limite);

    return 0;
}
