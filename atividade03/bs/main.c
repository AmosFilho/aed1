#include "bubblesort.c"
#include "time.h"
#include "printsort.c"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int *vetor;
    int n = 10000;
    double start, finish, elapsed;
    FILE *dados;
    int index = 0;

    vetor = (int*)malloc(n * sizeof(int));
    if(vetor == NULL)
    {
        printf("Erro ao alocar memória para o vetor");
        return 0;
    }
    dados = fopen("/home/user_2015310002/repositorio/atividade03/dados/nova10000.txt", "r");
    if(dados == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 0;
    }
    while(fscanf(dados, "%d", &vetor[index]) == 1)
    {
        index++;
        //printf("%d ", index);
    }
    fclose(dados);
    //printf("%d", index);

    // ler o vetor
    //for (int i = 0; i < n; i++)
        //scanf("%d", &vetor[i]);

    // inicia o cronometro
    start = (double) clock() / CLOCKS_PER_SEC;

    bubblesort(vetor, n);

    // finaliza o cronometro
    finish = (double) clock() / CLOCKS_PER_SEC;

        // calcula o tempo
    elapsed = (double) finish - start;

        printf( "%f s \n", elapsed);

    printsort(vetor, n);
    
    free(vetor);

    return 0;
}
