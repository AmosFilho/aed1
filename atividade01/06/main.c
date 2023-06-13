/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        06 - Dadas duas matrizes reais A[m,n] e B[n,p],
        calcular o produto de A por B.

*/

#include "input_matriz.c"
#include "matrices_product.c"
#include "stdio.h"

int main(int argc, char *argv[])
{
    int m;
    int n;
    int p;

    //printf("Número de linhas de A: ");
    scanf("%d", &m);

    //printf("Número de colunas de A (e linhas de B): ");
    scanf("%d", &n);

    //printf("Número de colunas de B: ");
    scanf("%d", &p);


    float A[m][n];
    float B[n][p];
    float C[m][p];

    receiveNumbers(m, n, p, A, B);
    matricesProduct(m, n, p, A, B, C);

    return 0;
}
