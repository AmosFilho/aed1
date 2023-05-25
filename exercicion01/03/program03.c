/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        03 - Faça um Programa que leia 4 notas, mostre as notas e a média na tela.
*/

#include "data_input_notes.c"
#include "output_note_average.c"

int main(int argc, char *argv[])
{
    float notes[4];
    receiveNotes(notes);
    getTheAverage(notes);

    return 0;
}
