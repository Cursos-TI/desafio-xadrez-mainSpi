#include <stdio.h>

int main() {
    // Declaração de variáveis constantes para o número de casas a serem movidas
    const int casas_bispo = 5;
    const int casas_torre = 5;
    const int casas_rainha = 8;

    // Movimentação do Bispo
    printf("Movimentação do Bispo (%d casas na diagonal superior direita):\n", casas_bispo);
    for (int i = 0; i < casas_bispo; i++) {
        printf("cima, direita\n");  // Movimento na diagonal superior direita
    }
    printf("\n");

    // Movimentação da Torre
    printf("Movimentação da Torre (%d casas para a direita):\n", casas_torre);
    for (int i = 0; i < casas_torre; i++) {
        printf("direita\n");  // Movimento para a direita
    }
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha (%d casas para a esquerda):\n", casas_rainha);
    for (int i = 0; i < casas_rainha; i++) {
        printf("esquerda\n");  // Movimento para a esquerda
    }
    printf("\n");

    return 0;
}