#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i; // variável de controle
    int movimentos; //contador 

    //Movimento da torre utilizando for
    printf("Movimento da Torre:\n\n");

    //inicia com i = 0
    //executa até i for menor que 5
    //incremente o valor de i a cada execução (i++)
    for (i = 0; i < 5; i++) {
        printf("direita\n");
    }
    
printf("\n"); //pula a linha para melhor leitura do código
    
    //Movimento do bisto utilizando while
    printf("Movimento do Bispo:\n\n");
    
    movimentos = 0; //inicia a variavel de contagem dos movimentos

    // - Continua repetindo enquanto 'movimentos' for menor que 5
    while(movimentos < 5) {
        printf("Cima Direita\n");
        movimentos++; //incrementa o printf com o valor de movimentos
    }

printf("\n");

    //Movimento da rainha utilizando do-while
    printf("Movimento da rainha:\n\n");

    movimentos = 0; //reinicia a variavel de contagem dos movimentos
    
    do {
        printf("Esquerda\n");
        movimentos++; //incrementa o printf com a quantidade de movimentos
    }

    while (movimentos < 8); // Condição para continuar repetindo enquanto movimentos for menor que 8

    return 0; //retorna 0 idicando que o programa finalizou
}