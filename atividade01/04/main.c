/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        04 - Faça um Programa que peça as quatro notas de 10 alunos,
        calcule e armazene num vetor a média de cada aluno,
        imprima o número de alunos com média maior ou igual a 7.0
*/

#include "receive_notes.c"
#include "print_notes.c"

int main(int argc, char *argv[])
{
    float student_average[10];
    float notes[4][10];
    receiveNotes(notes);
    getTheAverage(notes, student_average);

    return 0;
}
