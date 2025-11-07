#include <stdio.h>


//  Torre 
// A torre se move 5 casas para a direita 
void Torre(int casasRestantes) {
    if (casasRestantes == 0) return; // caso base
    printf("Direita\n");
    Torre(casasRestantes - 1); // chamada recursiva
}

// Rainha 
// A rainha se move 8 casas para a esquerda 
void Rainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    Rainha(casasRestantes - 1);
}

//  Bispo 
// O bispo usa loops aninhados
// para se mover 4 casas na diagonal superior direita
void Bispo(int linhas, int colunas) {
    if (linhas == 0) return;  
    
    // loop aninhado: vertical mais horizontal
    for (int i = 0; i < 1; i++) { // movimento vertical 
        for (int j = 0; j < 1; j++) { // movimento horizontal 
            printf("Cima Direita\n");
        }
    }

    Bispo(linhas - 1, colunas - 1); 
}

// Função 

int main() {
    
    // 1. Movimento da Torre 
    
    printf("Movimento da Torre\n");
    Torre(5); // 5 casas para a direita
    printf("\n");

    
    // 2. Movimento do Bispo 
    
    printf("Movimento do Bispo\n");
    Bispo(5, 5); // 5 casas na diagonal (Cima Direita)
    printf("\n");

    // 3. Movimento da Rainha 
    
    printf("Movimento da Rainha\n");
    Rainha(8); // 8 casas para a esquerda
    printf("\n");

    
    // 4. Movimento do Cavalo 
   
    printf("Movimento do Cavalo\n");

    // Cavalo: movimento em "L" . 2 casas para cima, 1 para a direita
    int casasCima = 2;
    int casasDireita = 1;

    // loops aninhados com múltiplas variáveis e controle de fluxo
    for (int i = 1, j = 1; i <= casasCima; i++, j++) {
        printf("Cima\n");

        // controle de fluxo: se já subiu duas casas, vai para a direita
        if (i == casasCima) {
            int k = 0;
            while (k < casasDireita) {
                printf("Direita\n");
                k++;

            
            }
        }
    }

    return 0;
}
