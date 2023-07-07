/*
    Nome:   Amós do Carmo Moreira Filho
    Mat:    2015310002
    
    Insertionsort
*/

#include <stdio.h>

void insertionsort(int vetor[], int n)
{
    int i, key, j;
    int contador1 = 0;
    int contador2 = 0;

    for (i = 1; i < n; i++)
    {
        key = vetor[i];
        j = i - 1;
        
        contador1++;

        while (j >= 0 && vetor[j] > key)
        {
            vetor[j + 1] = vetor[j];
            j = j-1;
            contador2++;
        }
        
        vetor[j + 1] = key;
    }
}

