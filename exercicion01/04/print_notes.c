/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        04 - Faça um Programa que peça as quatro notas de 10 alunos,
        calcule e armazene num vetor a média de cada aluno,
        imprima o número de alunos com média maior ou igual a 7.0
*/

#include <stdio.h>

void  getTheAverage(float notes[][10], float student_average[])
{
    int i;
    int j;
    int count = 0;
    
    for(i = 0; i < 10; i++)
    {
        float sum = 0.0;
        for(j = 0; j < 4; j++)
            sum += notes[j][i];
        student_average[i] = sum/4.0f;
        if(student_average[i] >= 7.0f )
        {
            count++;
        }
    }
    printf("Alunos na Média: %d\n", count);
    
}
