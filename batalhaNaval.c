#include <stdio.h>

int main() {
    // Declaração do tabuleiro (10x10) e inicialização com 0 (água)
    int tabuleiro[10][10] = {0};

    // Dimensão fixa dos navios (3 posições cada)
    int navioHorizontal[3] = {3, 3, 3}; // Representação do navio horizontal
    int navioVertical[3] = {3, 3, 3};   // Representação do navio vertical

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linhaNavioHorizontal = 1; // Linha do navio horizontal
    int colunaNavioHorizontal = 2; // Coluna inicial do navio horizontal
    int linhaNavioVertical = 4; // Linha inicial do navio vertical
    int colunaNavioVertical = 5; // Coluna do navio vertical

    // Validação simples para garantir que os navios não ultrapassem os limites
    if (colunaNavioHorizontal + 3 <= 10 && linhaNavioVertical + 3 <= 10) {
        // Posicionando o navio horizontal no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = navioHorizontal[i];
        }

        // Posicionando o navio vertical no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = navioVertical[i];
        }

        // Exibição do tabuleiro
        printf("Tabuleiro de Batalha Naval:\n");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Erro: Os navios ultrapassam os limites do tabuleiro.\n");
    }

    return 0;
}
