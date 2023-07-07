/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include <stdio.h>
#include "lista_encadeada3.h"

int main(int argc, char *argv[])
{
    No *lista;
    Descritor *d;
	d = criar();
    int valor;
    for(int i =0; i < 500; i++)
    {
        scanf("%d", &valor);
        d->lista = adicionar_inicio( d, valor );
    }
     for(int i =0; i < 500; i++)
    {
        scanf("%d", &valor);
        d->lista = adicionar_fim( d, valor );
    }

	imprimir(d);
    
    //Margem pra separar os resultados para comparação
    printf("\n--Margem--\n");

    d->lista = adicionar_inicio(d, 100);
    d->lista = adicionar_inicio(d, 23);
    d->lista = adicionar_fim(d, 100);
    d->lista = adicionar_fim(d, 23);
    d->lista = excluir_inicio(d);
    d->lista = excluir_fim(d);
    
    imprimir( d);

	return 0;
}
