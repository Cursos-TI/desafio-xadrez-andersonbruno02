#include <stdio.h>

// Nível Novato - Movimentação das Peças
void movimentacaoNovato() {
    // Constantes para o número de casas que cada peça pode se mover
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    // Movimentação do Bispo (5 casas na diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= casasBispo; i++) {
        printf("Diagonal Superior Direita - Casa %d\n", i);
    }

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita - Casa %d\n", i);
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    for (int i = 1; i <= casasRainha; i++) {
        printf("Esquerda - Casa %d\n", i);
    }
}

void movimentacaoAventureiro() {
    printf("\nMovimentação do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Cima - Casa %d\n", i);
    }
    for (int i = 1; i <= 1; i++) {
        printf("Direita - Casa %d\n", i);
    }
}

void movimentarBispo(int casas) {
    if (casas > 0) {
        printf("Diagonal Superior Direita - Casa %d\n", casas);
        movimentarBispo(casas - 1);
    }
}

// Função recursiva para movimentação da Torre
void movimentarTorre(int casas) {
    if (casas > 0) {
        printf("Direita - Casa %d\n", casas);
        movimentarTorre(casas - 1);
    }
}

// Função recursiva para movimentação da Rainha
void movimentarRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda - Casa %d\n", casas);
        movimentarRainha(casas - 1);
    }
}

int main() {
    movimentacaoNovato();
    movimentacaoAventureiro();
    movimentarBispo(5);
    movimentarTorre(5);
    movimentarRainha(8);
    return 0;
}