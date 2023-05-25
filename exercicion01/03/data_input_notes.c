/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        03 - Faça um Programa que leia 4 notas, mostre as notas e a média na tela.
*/

#include <stdio.h>

void  receiveNotes(float notes[])
{
    int i;
    
    for(i = 0; i < 4; i++)
        scanf("%f", &notes[i]);
        
}
