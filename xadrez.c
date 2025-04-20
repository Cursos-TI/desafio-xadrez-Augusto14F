#include <stdio.h>
int main() {

    #include<stdio.h>
int main () {

    //Código para mover a peça bispo, torre e rainha do jogo de tabuleiro xadrez

    int casas = 0;
    int passos = 1;

        printf("\nBispo\n"); // especificando a peça do xadrez
    
        while (casas < 5) //Bispo vai andar 5 casas para uma direção
    {
        printf("Diagonal superior direita \n"); //Imprime a direção do movimento do bispo
        casas++; 
    }
        printf("\nTorre\n"); // especificando a peça do xadrez

    for (int casas = 0; casas < 5; casas++) //Torre vai andar 5 casas para uma direção
    {
        printf("Lateral direita\n"); //Imprime a direção do movimento da torre
    }
 
        printf("\nRainha\n"); // especificando a peça do xadrez
    do
    {
        printf("Lateral esquerda\n");// imprime a direção do movimento da rainha
        passos++;

    } while (passos <= 8); //Rainha vai andar 8 casas para uma direção
    
    
    return 0;
}