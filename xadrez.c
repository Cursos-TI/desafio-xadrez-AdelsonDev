#include <stdio.h>
/*
movimneto de cima para baixo conforme o vídeo
 apresentado pelo professor Sérgio Cardoso
*/ 
// Função Recursiva - Torre
void moverTorre (int casa){
    if (casa > 0)
    {
        // direção da torre
       printf ("Direita (casa %d)\n", casa);
       moverTorre(casa - 1);
    }

   
}

    // Função Recursiva - Bispo
void moverBispo (int vertical){

    if (vertical > 0)
    {
            // loop interno para o deslocamento horizontal
        for (int horizontal = 1; horizontal <= 1; horizontal++)
        {
             // direção do Bispo
       printf ("Cima, Direita (casa %d)\n", vertical);
       
        }
        moverBispo(vertical - 1);
    }
}

    // Função Recursiva - Rainha
void moverRainha(int casa)
{
    if (casa > 0)
    {

        printf("Esquerda (casa %d)\n", casa);
        moverRainha(casa - 1);
    }
}

void moverCavalo() {
        printf("Movimento do Cavalo:\n");

        for (int vertical = 1; vertical <= 2; vertical++)
        {
            printf ("Cima\n"); // sobe duas casas
        }
        
         // Movimento lateral em L 
         for (int horinzontal = 1; horinzontal <= 2; horinzontal++)
         {
           if (horinzontal == 2)  // impede movimento exagerado
           {
            break;
           } else if (horinzontal == 0) 
           {
            continue; // ignorará se houver movimento 0
           }
           printf("Direita\n");
         }
         
}

    
        
int main() {

    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);

     printf("\n");

    moverCavalo();

    printf("\nFim dos movimentos!\n");


    return 0;
}
       







  



   

