/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        07 - Dizemos que uma matriz quadrada inteira é um quadrado mágico
        (1) se a soma dos elementos de cada linha, a soma dos elementos de
        cada coluna e a soma dos elementos das diagonais principal e
        secundária são todas iguais. Dada uma matriz quadrada A[n,n] , 
        verificar se A é um quadrado mágico.

*/

#include "input_matriz.c"
#include "magic_square.c"
#include "stdio.h"

int main(int argc, char *argv[])
{
    int dimension;

    //printf("Dimensões de A: ");
    scanf("%d", &dimension);

    int A[dimension][dimension];

    receiveNumbers(dimension, A);
    checkMagicSquare(dimension, A);

    return 0;
}
