/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        06 - Dadas duas matrizes reais A[m,n] e B[n,p], calcular o produto de A por B.
*/

#include <stdio.h>

void  receiveNumbers(int m, int n, int p, float A[][n], float B[][p])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {    
            scanf("%f", &A[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {    for(int j = 0; j < p; j++)
        {
            scanf("%f", &B[i][j]);
        }
    }
}
