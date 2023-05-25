#include <stdio.h>

void  matricesProduct(int m, int n, int p, float A[][n], float B[][p], float C[][p])
{
    for(int i = 0; i < m; i++)
    {    for(int j = 0; j < p; j++)
         {  
            C[i][j] = 0;

            for(int k = 0; k < n; k++)
            {
               C[i][j] += A[i][k] * B[k][j];
            }
         }
    }
    for(int i = 0; i < m; i++)
    {    for(int j = 0; j < p; j++)
         {   
            printf("%.2f \n", C[i][j]);
         }
    }
}
