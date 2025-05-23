#include <stdio.h>

int main () {

    // Desafio Xadrez
    // Peça - TORRE - Mover 5 casas para a direita 
    printf("### TORRE ###\n"); 

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");  
    }

    // Peça - BISPO - Mover 5 casas na diagonal para cima e à direita
    printf("### BISPO ###\n"); 

    int movimento  = 0;

    while (movimento < 5) 
    {
        printf("Cima, Direita\n"); 
        movimento++;
    }

    // Peça - RAINHA - Mover 8 casas para a esquerda
    printf("### RAINHA ###\n"); 
    
    int inicio = 0;
    
    do 
    {
      printf("Esquerda\n");
      inicio++;
    } while (inicio < 8);

    printf("--------------------------------------------------------------------------------------------------\n");

    //Peça - CAVALO - Move 2 casas em uma direção e depois uma casa perpendiculamente (forma um L)
    printf("### CAVALO ###\n");

    int movimentoCompleto = 1; 

    while (movimentoCompleto--) 
    {
      for (int i = 0; i < 2; i++) 
      {
        printf("Baixo\n");
      }
      printf("Esquerda\n");
    }

  return 0;
}
