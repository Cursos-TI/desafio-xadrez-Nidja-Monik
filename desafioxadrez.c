#include <stdio.h>

// Desafio Xadrez

// Peça - TORRE - Mover 5 casas para a direita 
void moverTorre(int casas) {
    if (casas <= 0) { // Caso base
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Peça - BISPO - Mover 5 casas na diagonal para cima e à direita
void moverBispo(int direcao) {
    if (direcao <= 0) { 
        return;
    }
    printf("Cima-Direita\n");
    moverBispo(direcao - 1); 
}

// Peça - RAINHA - Mover 8 casas para a esquerda
void moverRainha(int movimento) {
    if (movimento <= 0) { 
        return;
    }
    printf("Esquerda\n");
    moverRainha(movimento - 1); 
}

// Peça - CAVALO - Move 2 casas em uma direção e depois uma casa perpendiculamente (forma um L)
void moverCavalo() {
    for (int i = 0; i < 1; i++) { 
        for (int j = 0; j < 2; j++) { 
            if (j == 1 && i > 0) continue; 
            printf("Cima\n");
        }
        if (i == 0) {
             printf("Direita\n");
        } else {
            break;
        }
    }
}

int main() {
    printf("--- Movimento da Torre ---\n");
    moverTorre(5); // A main chama a função recursiva da Torre

    printf("\n--- Movimento do Bispo ---\n");
    moverBispo(5); // A main chama a função recursiva do Bispo

    printf("\n--- Movimento da Rainha ---\n");
    moverRainha(8); // A main chama a função recursiva da Rainha

    printf("\n--- Movimento do Cavalo ---\n");
    moverCavalo(); // A main chama a função do Cavalo

    return 0;
}