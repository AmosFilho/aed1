/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        03 - Faça um Programa que leia 4 notas, mostre as notas e a média na tela.
*/

#include <stdio.h>

void  getTheAverage(float notes[])
{
    int i;
    float sum = 0.0;

    for(i = 0; i < 4; i++)
    {
        sum += notes[i];
        printf("nota %d: %.1f\n", i+1, notes[i]);
    }

    float average = sum/i;
    printf("Média: %.1f\n", average);
}
