/*
    Nome:   Amós do Carmo Moreira Filho
    Mat:    7389217389123
    
    Bubblesort
*/

#include <stdio.h>

void bubblesort(int vetor[], int n)
{
    int i, j, temp;
    int contador1 = 0;
    int contador2 = 0;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            contador1++;

            if (vetor[j] > vetor[j+1])
            {
                contador2++;

                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

}

