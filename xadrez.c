#include <stdio.h>



int main() {
      /* Peças: Torre, Bispo e Rainha
       Estruturas: for, while e do-while
    */
    int torre = 1;
    int moveTorre = 5;
    // mover a torre 5 casas para a direita com for
    printf ("Movimento da Torre:\n");

    for (torre <= 1; torre <= moveTorre; torre++){
    
        printf ("Direita (casa %d)\n", torre);
    }
    
         printf ("\n"); // Espaço entre os movimentos das peças

     // estrutura while

    int bispo = 1;
    int moveBispo = 5;

     printf ("Movimento do Bispo:\n");

    while(bispo <= moveBispo){
        printf ("Cima, direita (casa %d)\n", bispo); // Direção do bispo
        bispo++;
    }

             printf ("\n"); 
    // estrutura do-while 

    int rainha = 1;
    int moveRainha = 8;

    printf ("Movimento da rainha:\n");

    do {
        printf ("Esquerda (casa %d)\n", rainha); // Direção da rainha
        rainha++;
    }while (rainha <= moveRainha);

    printf ("Fim dos movimentos!");
  
    
    return 0;

}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

   

