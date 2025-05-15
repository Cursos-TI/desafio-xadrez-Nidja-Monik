#include <stdio.h>

int main () {

    // Desafio Xadrez
    // Peça - TORRE - Mover 5 casas para a direita 
    printf("### TORRE ###\n"); 

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");  
    }

    // Peça - Bispo - Mover 5 casas na diagonal para cima e à direita
    printf("### BISPO ###\n"); 

    do {
        printf("");
    }


    // Peça - Rainha - Mover 8 casas para a esquerda 
    printf("### RAINHA ###\n"); 

    int n = 0;

    while (n < 8) {
        printf("Esquerda\n");
        n++; 
    }
    
   return 0; 
}