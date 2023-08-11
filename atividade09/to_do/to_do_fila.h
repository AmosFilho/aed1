/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct armazenaValor{
    char d[100];
};

struct Fila
{
    struct armazenaValor valor[100];
    int inicio, fim, tamanho;
};

void inicioFila(struct Fila *fila) 
{
    fila->inicio = fila->fim = -1;
    fila->tamanho = 0;
}

int filaVazia(struct Fila *fila) 
{
    return fila->tamanho == 0;
}

int filaCheia(struct Fila *fila)
{
    return fila->tamanho == 100;
}

void adicionaElem(struct Fila *fila, struct armazenaValor valor) 
{
    if (filaCheia(fila)) {
        printf("Fila cheia.\n");
        return;
}
    
    if (fila->fim == -1) 
    {
        fila->inicio = fila->fim = 0;
    }   else {
        fila->fim = (fila->fim + 1) % 100;
    }

    strcpy(fila->valor[fila->fim].d, valor.d);
    fila->tamanho++;
}

void removeElem(struct Fila *fila) 
{
    if (filaVazia(fila)) {
        printf("Fila vazia.\n");
        return;
    }

    printf("Fila completa %s\n", fila->valor[fila->inicio].d);
    fila->inicio = (fila->inicio + 1) % 100;
    fila->tamanho--;
}

void mostraFila(struct Fila *fila) 
{
    if (filaVazia(fila)) {
        printf("Fila vazia.\n");
        return;
    }

    printf("Fila: ");
    int i = fila->inicio;
    int cont = 0;

    while (cont < fila->tamanho)
    {
        printf("%d. %s\n", cont + 1, fila->valor[i].d);
        i = (i + 1) % 100;
        cont++;
    }
}
