#include <stdio.h>
#include <stdlib.h>   

#define TAM 10
#define TAM_NAVIO 3
#define SK_SIZE 5

int main() {
    int tabuleiro[TAM][TAM];
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0;

    int navioHorizontal[TAM_NAVIO] = {3,3,3};
    int navioVertical[TAM_NAVIO]   = {3,3,3};

    int linhaHorizontal = 4, colunaHorizontal = 2;
    int linhaVertical = 1, colunaVertical = 7;

    if (colunaHorizontal + TAM_NAVIO <= TAM && linhaHorizontal >= 0 && linhaHorizontal < TAM) {
        for (int k = 0; k < TAM_NAVIO; k++)
            tabuleiro[linhaHorizontal][colunaHorizontal + k] = navioHorizontal[k];
    } else {
        printf("Erro: navio horizontal fora dos limites!\n");
    }

    if (linhaVertical + TAM_NAVIO <= TAM && colunaVertical >= 0 && colunaVertical < TAM) {
        for (int k = 0; k < TAM_NAVIO; k++) {
            if (tabuleiro[linhaVertical + k][colunaVertical] == 0)
                tabuleiro[linhaVertical + k][colunaVertical] = navioVertical[k];
            else
                printf("Aviso: sobreposição ao posicionar navio vertical (posição %d,%d).\n",
                       linhaVertical + k, colunaVertical);
        }
    } else {
        printf("Erro: navio vertical fora dos limites!\n");
    }

    int overlay[TAM][TAM];
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            overlay[i][j] = 0;

    int center = SK_SIZE / 2;

    int cone[SK_SIZE][SK_SIZE];
    for (int r = 0; r < SK_SIZE; r++) {
        for (int c = 0; c < SK_SIZE; c++) {
            if (abs(c - center) <= r) cone[r][c] = 1;
            else cone[r][c] = 0;
        }
    }

    int cruz[SK_SIZE][SK_SIZE];
    for (int r = 0; r < SK_SIZE; r++)
        for (int c = 0; c < SK_SIZE; c++)
            cruz[r][c] = (r == center || c == center) ? 1 : 0;

    int octaedro[SK_SIZE][SK_SIZE];
    for (int r = 0; r < SK_SIZE; r++)
        for (int c = 0; c < SK_SIZE; c++)
            octaedro[r][c] = (abs(r - center) + abs(c - center) <= center) ? 1 : 0;

    int origemConeLinha = 2, origemConeColuna = 2;
    int origemCruzLinha = 6,  origemCruzColuna = 4;
    int origemOctLinha = 5,   origemOctColuna = 8;

    for (int r = 0; r < SK_SIZE; r++) {
        for (int c = 0; c < SK_SIZE; c++) {
            if (cone[r][c] == 1) {
                int boardR = origemConeLinha - center + r;
                int boardC = origemConeColuna - center + c;
                if (boardR >= 0 && boardR < TAM && boardC >= 0 && boardC < TAM)
                    overlay[boardR][boardC] = 1;
            }
        }
    }

    for (int r = 0; r < SK_SIZE; r++) {
        for (int c = 0; c < SK_SIZE; c++) {
            if (cruz[r][c] == 1) {
                int boardR = origemCruzLinha - center + r;
                int boardC = origemCruzColuna - center + c;
                if (boardR >= 0 && boardR < TAM && boardC >= 0 && boardC < TAM)
                    overlay[boardR][boardC] = 1;
            }
        }
    }

    for (int r = 0; r < SK_SIZE; r++) {
        for (int c = 0; c < SK_SIZE; c++) {
            if (octaedro[r][c] == 1) {
                int boardR = origemOctLinha - center + r;
                int boardC = origemOctColuna - center + c;
                if (boardR >= 0 && boardR < TAM && boardC >= 0 && boardC < TAM)
                    overlay[boardR][boardC] = 1;
            }
        }
    }

    printf("TABULEIRO COM NAVIOS (3) E ÁREAS DE HABILIDADE (5) \n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 3) printf("3 ");
            else if (overlay[i][j] == 1) printf("5 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("Legenda: 0 = Água | 3 = Navio | 5 = Área habilidade\n");

    return 0;
}
