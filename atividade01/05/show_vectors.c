#include <stdio.h>

void showVectors(int numbers[], int odd_vector[], int even_vector[])
{
    int i;
    int j = 0;
    int k = 0;

    for(i = 0; i < 20; i++)
        if(numbers[i] % 2 == 0)
        {
            even_vector[j] = numbers[i];
            j++;

        }else
        {
            odd_vector[k] = numbers[i];
            k++;
        }
    for(int i = 0; i < 20; i++)
    {
        printf("vetor principal: %d\n", numbers[i]);
    }

    for(int i = 0; i < j; i++)
    {
        printf("vetor par: %d\n", even_vector[i]);
    }

    for(int i = 0; i < k; i++)
    {
        printf("vetor impar: %d\n", odd_vector[i]);
    }
}
