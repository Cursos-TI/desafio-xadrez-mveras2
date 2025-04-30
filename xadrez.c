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

int i, selecao; 

printf("//____________________________________________________________________//\n");
printf("//Escolha o número da peça que vc deseja conferir o deslocamento:     //\n");
printf("//1 - Torre                                                           //\n");
printf("//2 - Bispo                                                           //\n");
printf("//3 - Rainha                                                          //\n");
printf("//4 - Cavalo                                                          //\n");
printf("//____________________________________________________________________//\n");
scanf("%d", &i);

switch (selecao = i)
{
case 1:{
    //movimentação da torre
    int a=1; // variável de controle do loop
    while (a<=5){
        printf("Movimento %d. Torre moveu-se uma casa para à Direita\n", a);
        a++;
    }
    printf("__________________________________________\n");
    break;
}
    case 2:{
    //movimentação do Bispo
    int b=1; // variável de controle do loop
    do{
        printf("Diagonal %d. Bispo moveu-se uma casa para Cima e uma para a Direita\n", b);
        b++;
    } while (b<=5);
    printf("__________________________________________\n");
break;
}
case 3:{
    //movimentação da Rainha
    for(int c=1; c<=8 ; c++){
        printf("Movimento %d. Rainha moveu-se uma casa à Esquerda\n", c);
    }
    printf("__________________________________________\n");
break;
}
case 4:{
    //________________________________________________________________________//   
    //             Movimentação das peças para o nível Aventureiro            //
    //________________________________________________________________________//

    //movimentação do cavalo
    // Usar loops aninhados, sendo pelo menos um "for".
    int e=1;
    for (int d=1; d<=1; d++){
        while(e<=2){
            printf("Movimento %d: Cavalo moveu-se uma casa para baixo\n", e);
            e++;
        }
        printf("Movimento %d: Cavalo moveu-se uma casa à Esquerda\n", d + e-1);
        printf("__________________________________________\n");
    }
break;
}
default:
printf("Entrada incorreta!");
break;
}

return 0;
}
