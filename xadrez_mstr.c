#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Esse bloco arquivo traz os códigos do nível Mestre desse desafio.

 // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

// Movimento da Torre
void movTorre(int num)
{
    int a=1;
    while (num > 0){
    printf("Direita\n");
    num--;
    a++;
}
}

//_____________________________________________________________________________
//movimentação do Bispo
void movBispo(int num)
{
    int a;
while(num > 0) 
{
    a=1;
    printf("Cima\n");
    while(a > 0){
        printf("Direita\n");
        a--;  
        }
    num--;
} 
}

//__________________________________________________________________
 //movimentação da Rainha
 void movRainha(int num)
 {
    int a;
    for(a=1, num; num>0 ; a++, num--){
    printf("Esquerda\n");
}
}
//__________________________________________________________________
//movimentação do Cavalo
    // Usar loops aninhados, sendo pelo menos um "for".
void movCavalo(int num)
{
    int a=1;
    for (num; num > 0; num--){
        while(a<=2){
            printf("Cima\n");
            a++;
        }
        printf("Direita\n");
        break; //Esse break evita que o cavalo realize mais de um movimento por vez, independente da variável num escolhida
    }
}
//_____________________________________________________________________
//Separador de linhas
linha()
{
    printf("__________________________________________\n");
}
//_____________________________________________________________________
// Programa principal
int main() {

int i, selecao; 

printf("//____________________________________________________________________//\n");
printf("//Escolha o número da peça que vc deseja conferir o deslocamento:     //\n");
printf("//1 - Torre                                                           //\n");
printf("//2 - Bispo                                                           //\n");
printf("//3 - Rainha                                                          //\n");
printf("//4 - Cavalo                                                          //\n");
printf("//____________________________________________________________________//\n");
scanf("%d", &i);
linha();

switch (selecao = i)
{
case 1:{
    //movimentação da Torre
    movTorre(5);
    linha();
    break;
}
    case 2:{
    movBispo(5);
    linha();
    break;
}
case 3:{
    movRainha(8);
    linha();
break;
}
case 4:{
    movCavalo(10);   // valor de entrada indiferente para a função, desde que seja maior que 0
    linha();
break;
}
default:
printf("Entrada incorreta!");
linha();
break;
}

return 0;
}