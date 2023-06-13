/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        15 - Escreva um programa que receba dois structs do tipo dma,
        cada um representando uma data válida, e calcule o número
        de dias que decorreram entre as duas datas.

*/

#include "dma.h"
#include "receive_dates.c"
#include "count_days.c"
#include "stdio.h"

int main(int argc, char *argv[])
{
    struct dma first_date, second_date;

    receiveDates(&first_date, &second_date);
    
    countDays(first_date, second_date);

    return 0;
}
