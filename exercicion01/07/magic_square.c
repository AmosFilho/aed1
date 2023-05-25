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
#include <stdbool.h>

void  checkMagicSquare(int dimension, int A[][dimension])
{
    bool is_magic_square = true;
    int saved_sum = 0;
    int diagonal_sum = 0;
    int sec_diagonal_sum = 0;
    int k;
    
    //check the lines sum
    for(int i = 0; i < dimension; i++)
    {
        int sum = 0;
        for(int j = 0; j < dimension; j++)
        {
            sum += A[i][j];
        }
        if(i = 0)
        {
            saved_sum = sum;

        }else if(sum != saved_sum)
        {
            is_magic_square = false;
        }
    }
    printf("terminou as linhas");
    // check the column sum
    for(int i = 0; i < dimension; i++)
    {
        int sum = 0;
        for(int j = 0; j < dimension; j++)
        {
            sum += A[j][i];
        }
        if(sum != saved_sum)
        {
            is_magic_square = false;
        }
    }
    printf("terminou as colunas");
    //check the main diagonal 
    for(int i = 0; i < dimension; i++)
    { 
        diagonal_sum += A[i][i];
       
    }
    if(diagonal_sum != saved_sum)
    {
        is_magic_square = false;
    }
    printf("terminou a diagonal principal");
    //check the  secondary diagonal
    for(int i = 0; i < dimension; i++)
    {
        k = dimension - 1 - i;
        sec_diagonal_sum += A[i][k];
    }
    if(sec_diagonal_sum != saved_sum)
    {
        is_magic_square = false;
    }
    printf("terminou a diagonal secundária");
    //print the result
    if(is_magic_square)
    {
        printf("Is magic square");
    }else
    {
        printf("It's not a magic square");
    }
}
