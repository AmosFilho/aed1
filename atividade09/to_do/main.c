/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include "to_do_fila.h"

int main(int argc, char* argv[]) {
    struct Fila x;
    inicioFila(&x);

    struct armazenaValor novo;
    printf("Digite o que deseja adicionar na fila: ");
    scanf(" %[^\n]", novo.d);
    adicionaElem(&x, novo);
    removeElem(&x);
    mostraFila(&x);

    return 0;
}
