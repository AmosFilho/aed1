/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        05 - Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
        Armazene os números pares no vetor PAR e os números IMPARES no vetor impar.
        Imprima os três vetores.
*/

#include <stdio.h>

void  receiveNumbers(int numbers[])
{
    int i;

    for(i = 0; i < 20; i++)
        scanf("%d", &numbers[i]);

}
