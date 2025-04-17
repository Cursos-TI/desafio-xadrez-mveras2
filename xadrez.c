#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//________________________________________________________________________//   
//             Movimentação das peças para o nível novato                 //
//________________________________________________________________________//

//movimentação da torre
int a=1; // variável de controle do loop
while (a<=5){
    printf("Movimento %d. Torre moveu-se uma casa para a Direita\n", a);
    a++;
}
printf("__________________________________________\n");

//movimentação do Bispo
int b=1; // variável de controle do loop
do{
    printf("Movimento %d. Bispo moveu-se uma casa para Cima e uma para a Direita\n", b);
    b++;
} while (b<=5);
printf("__________________________________________\n");
   
//movimentação da Rainha
for(int c=1; c<=8 ; c++){
    printf("Movimento %d. Rainha moveu-se uma casa para a Esquerda\n", c);
}
printf("__________________________________________\n");

    return 0;
}
