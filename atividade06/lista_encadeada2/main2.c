/* 
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/

#include <stdio.h>
#include "lista_encadeada2.h"

int main(int argc, char *argv[])
{
    No *lista;

	lista = criar();
    int valor;
    for(int i =0; i < 1000; i++)
    {
        scanf("%d", &valor);
        lista = inserir( lista, valor );
    }

	imprimir( lista );
    
    excluir_elemento(&lista, 3813);

    printf("--Margem--\n");

    imprimir( lista );

	return 0;
}
