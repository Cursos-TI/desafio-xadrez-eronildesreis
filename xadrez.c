
// Nível Novato
// Neste nível, o código utiliza loops para mover as peças de xadrez (Bispo, Torre, Rainha) conforme as direções especificadas.


#include <stdio.h>

// Constantes para os movimentos
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

void moverBispo() {
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Diagonal superior direita\n");
    }
}

void moverTorre() {
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
}

void moverRainha() {
    for (int i = 0; i < MOVIMENTOS_RAINHA; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    printf("Movimentação das peças no Xadrez:\n");

    printf("\nMovendo o Bispo:\n");
    moverBispo();

    printf("\nMovendo a Torre:\n");
    moverTorre();

    printf("\nMovendo a Rainha:\n");
    moverRainha();

    return 0;
}

// Nível Aventureiro
// Agora, para mover o cavalo em L, usaremos loops aninhados. O cavalo se move para baixo e à esquerda. A movimentação do cavalo será implementada com um for e um while.

#include <stdio.h>

void moverCavalo() {
    for (int i = 0; i < 1; i++) { // Movimentação de 1 vez para o L
        printf("Movendo para baixo e para a esquerda: ");
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
        }
    }
}

int main() {
    printf("Movimentação do Cavalo (L):\n");
    moverCavalo();
    return 0;
}

//Nível Mestre
// Para o nível mestre, modificaremos a movimentação do Bispo, Torre, Rainha e Cavalo usando recursão e loops aninhados com múltiplas variáveis ou condições.

#include <stdio.h>

// Constantes para os movimentos
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

// Função recursiva para o movimento do Bispo
void moverBispo(int movimentos) {
    if (movimentos == 0) return;
    printf("Diagonal superior direita\n");
    moverBispo(movimentos - 1);
}

// Função recursiva para o movimento da Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

// Função para mover o Cavalo com loops aninhados
void moverCavalo() {
    for (int i = 0; i < 1; i++) { // Movimenta uma vez em L
        printf("Movendo para baixo e para a esquerda: ");
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
        }
    }
}

int main() {
    printf("Movimentação das peças no Xadrez (Recursivo e Aninhado):\n");

    printf("\nMovendo o Bispo:\n");
    moverBispo(MOVIMENTOS_BISPO);

    printf("\nMovendo a Torre:\n");
    moverTorre(MOVIMENTOS_TORRE);

    printf("\nMovendo a Rainha:\n");
    moverRainha(MOVIMENTOS_RAINHA);

    printf("\nMovendo o Cavalo (L):\n");
    moverCavalo();

    return 0;
}
