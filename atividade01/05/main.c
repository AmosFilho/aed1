/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
        05 - Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
        Armazene os números pares no vetor PAR e
        os números IMPARES no vetor impar.
        Imprima os três vetores.

*/

#include "receive_numbers.c"
#include "show_vectors.c"

int main(int argc, char *argv[])
{
    int numbers[20];
    int even_vector[20];
    int odd_vector[20];
    receiveNumbers(numbers);
    showVectors(numbers, odd_vector, even_vector);

    return 0;
}
