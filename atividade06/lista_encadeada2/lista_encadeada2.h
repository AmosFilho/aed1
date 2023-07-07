/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include <stdio.h>
#include <stdlib.h>

/* definição das estruturas de dados */
typedef struct no No;

struct no
{
	int dado;
	No* prox;
};

/*Cria a lista retornando nulo*/
No* criar()
{
	return NULL;
}

/*Inserir um valor no inicio da lista*/
No* inserir( No *lista, int dado )
{
	No *novo;

	novo = (No *)malloc( sizeof( No ) );
	novo->dado = dado;
	novo->prox = lista;
	
	return novo;
}

/*Exclui um valor no inicio da lista*/
No* excluir( No *lista )
{
	No *temp;

    temp = lista;

    lista = lista->prox;

    free(temp);

	return lista;

}

/*Imprime a lista*/
void imprimir( No *lista )
{
	No *temp;

	temp = lista;
	
	while(temp != NULL)
	{
		printf( "%d ", temp->dado );
		temp = temp->prox;
	}
	
	printf("\n");
}

/*Realiza uma busca pela lista a procura de valor*/
void buscar(No *lista, int valor)
{
    No *temp;
    temp = lista;
    int encontrou = 0;
    while(temp != NULL && encontrou == 0)
    {   
        if(temp->dado == valor)
        {
            encontrou = 1;
        }
        temp = temp->prox;
    
    }
    if(encontrou == 1)
    {
        printf("Achou o valor");
    }else
    {
        printf("Não encontrou o valor");
    }
    free(temp);

}
/*Percorre toda a lista*/
void percorrer(No *lista)
{
    No *temp;
    temp = lista;
    int valor;
    while( temp->prox != NULL)
    {
        valor = temp->dado;
    }
    printf("%d", valor);
}
/*Exclui um elemento em qualquer lugar de uma lista*/
void excluir_elemento(No **lista, int valor)
{
    No *aux, *no_remover = NULL;
    
    //Verifica se a lista está vazia
    if(*lista)
    {   
        if((*lista)->dado == valor)
        {
            no_remover = *lista;
            *lista = no_remover->prox;
            no_remover->prox = NULL;
        }else
        {
            aux = *lista;
            while(aux->prox && aux->prox->dado != valor)
            {
                aux = aux->prox;
            }
            if(aux->prox)
            {
                no_remover = aux->prox;
                aux->prox = no_remover->prox;
            }
        }
    }
    
    free(no_remover);
    
}
