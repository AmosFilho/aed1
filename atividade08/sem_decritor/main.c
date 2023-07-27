/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include "lista_duplamente_encadeada.h"

int main(int argc, char* argv[])
{
    Node* lista = NULL;

    inserir_no_inicio(&lista, 3);
    inserir_no_inicio(&lista, 2);
    inserir_no_inicio(&lista, 1);
    imprimir(lista);

    inserir_no_fim(&lista, 4);
    inserir_no_fim(&lista, 5);
    inserir_no_fim(&lista, 6);
    imprimir(lista);

    excluir_no_inicio(&lista);
    excluir_no_inicio(&lista);
    imprimir(lista);

    excluir_no_fim(&lista);
    excluir_no_fim(&lista);
    imprimir(lista);

    buscar(lista, 3);
    buscar(lista, 9);

    return 0;
}
