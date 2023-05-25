/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        04 - Faça um Programa que peça as quatro notas de 10 alunos,
        calcule e armazene num vetor a média de cada aluno,
        imprima o número de alunos com média maior ou igual a 7.0
*/

#include <stdio.h>

void  receiveNotes(float notes[][10])
{
    int i;
    int j;
    

    for(i = 0; i < 10; i++)
        for(j = 0; j < 4; j++)
            scanf("%f", &notes[j][i]);

}
