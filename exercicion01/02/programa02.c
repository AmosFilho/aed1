/*
        Aluno: Amós do Carmo Moreira Filho
        Matrícula: 2015310002

        Atividade 01
	02 - Faça um Programa que leia um vetor de 10 números reais
         e mostre-os na ordem inversa.
*/

#include <stdio.h>
#include "data_output_program.c"
#include "data_input_program.c"

int main()
{
        int i;
        float numeros[10];

        //entradas de dados
        numbersInput(numeros);

        //Saída de dados
        numbersOutput(numeros);

        return 0;
}
