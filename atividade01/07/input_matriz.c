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

#include <stdio.h>

void  receiveNumbers(int dimension, int A[][dimension])
{

    for(int i = 0; i < dimension; i++)
    {
        for(int j = 0; j < dimension; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Operacao Finalizada");

}
