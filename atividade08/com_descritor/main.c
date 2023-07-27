/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include "lista_duplamente_encadeada_descritor.h"

int main(int argc, char* argv[]) 
{
    Descritor* d = criar_descritor();

    inserir_no_inicio(d, 3);
    inserir_no_inicio(d, 2);
    inserir_no_inicio(d, 1);
    imprimir(d);

    inserir_no_fim(d, 4);
    inserir_no_fim(d, 5);
    inserir_no_fim(d, 6);
    imprimir(d);

    buscar(d, 4);
    buscar(d, 9);

    excluir_no_inicio(d);
    excluir_no_inicio(d);
    excluir_no_inicio(d);
    imprimir(d);

    excluir_no_fim(d);
    excluir_no_fim(d);
    imprimir(d);

    excluir_no_fim(d);
    imprimir(d);

    printf("Tamanho: %d\n", d->qtde);

    return 0;
}
