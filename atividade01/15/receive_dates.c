/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        15 - Escreva um programa que receba dois structs do tipo dma,
        cada um representando uma data válida, e calcule o número 
        de dias que decorreram entre as duas datas.
*/

#include <stdio.h>
#include "dma.h"

void  receiveDates(struct dma *A, struct dma *B)
{
    scanf("%d %d %d", &A->dia, &A->mes, &A->ano);

    scanf("%d %d %d", &B->dia, &B->mes, &B->ano);
}
