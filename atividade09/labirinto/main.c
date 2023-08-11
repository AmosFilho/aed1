/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include "labirinto_pilha.h"

int main(int argc, char* argv[])
{
    int labirinto[6][6] = {
        {1, 0, 1, 1, 1, 1},
        {1, 0, 1, 0, 0, 1},
        {1, 1, 1, 0, 1, 1},
        {1, 0, 0, 0, 1, 0},
        {1, 1, 1, 0, 1, 0},
        {1, 1, 1, 1, 1, 1}
    };
    percorrer_labirinto(6, 6, labirinto);

    return 0;
}
