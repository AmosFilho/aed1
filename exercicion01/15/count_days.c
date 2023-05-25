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
#include <stdlib.h>

void  countDays(struct dma date1, struct dma date2)
{
    int days = 0;
    
    days += abs(date1.ano - date2.ano) * 360;
    
    days += abs(date1.mes - date2.mes) * 30;
    
    days += abs(date1.dia - date2.dia);

    printf("dias entre as datas: %d", days);
   
}
