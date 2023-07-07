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

typedef struct descritor
{
    int qtde;
    No* lista;
}Descritor;


/*Cria um Descritor e atribui valores a ele*/
Descritor* criar()
{
    Descritor *d;
    d = (Descritor*)malloc(sizeof( Descritor ) );
    d->qtde = 0;
    d->lista = NULL;

	return d;
}

/*Insere um valor no inicio da lista encadeada*/
No* inserir( Descritor *d, int dado )
{
	No *novo;

	novo = (No *)malloc( sizeof( No ) );
	novo->dado = dado;
	novo->prox = d->lista;
	d->qtde++;
	return novo;
}

/*Excluir no inicio da lista*/
No* excluir( No *lista )
{
	No *temp;

    temp = lista;

    lista = lista->prox;

    free(temp);

	return lista;

}

/*Imprimir os Valores da lista recebendo o descritor da mesma*/
void imprimir( Descritor *d )
{
    printf("\n");
    printf("%d\n", d->qtde);

	No *temp;

	temp = d->lista;
	
	while(temp != NULL)
	{
		printf("%d ", temp->dado);
		temp = temp->prox;
	}

}

/*Verifica se uma lista possui um determinado valor dentro dela*/
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

    //Verifica através da flag se o número foi encontrado
    if(encontrou == 1)
    {
        printf("Achou o valor");
    }else
    {
        printf("Não encontrou o valor");
    }
    free(temp);

}
/*Função que percorre uma lista encadeada*/
void percorrer(No *lista)
{
    No *temp;
    temp = lista;
    int valor;
    while(temp->prox != NULL)
    {
        valor = temp->dado;
    }
    printf("%d", valor);
}
/*Busca um elemento na lista encadeada e o remove*/
void excluir_elemento(No **lista, int valor)
{
    No *aux, *no_remover = NULL;
    //Verifica se a lista é vazia
    if(*lista)
    {   
        //Verifica se o primeiro valor da lista é o valor procurado
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
/*Adiciona um novo nó no início da lista*/
No* adicionar_inicio( Descritor *d, int dado )
{
	No *novo;

	novo = (No *)malloc( sizeof( No ) );
	novo->dado = dado;
	novo->prox = d->lista;
    d->lista = novo;
    d->qtde++;
	
	return d->lista;
}
/*Adiciona um novo nó no final da lista*/
No* adicionar_fim( Descritor *d, int dado )
{
	No *novo;
	novo = (No *)malloc( sizeof( No ) );
	novo->dado = dado;
	novo->prox = NULL;
    No* temp = d->lista;
    if(d->lista == NULL)
    {
        d->lista = novo;
    }else
    {
        while(temp->prox != NULL)
        {
            temp = temp->prox;
        }
	    temp->prox = novo;
	
    }
    d->qtde++;
    return d->lista;
}
/*Exclui o nó no início da lista*/
No* excluir_inicio( Descritor *d )
{
	No *temp;

    temp = d->lista;

    d->lista = d->lista->prox;

    free(temp);
    
    d->qtde--;
    
	return d->lista;

}
/*Exclui o nó no fim da lista*/
No* excluir_fim( Descritor *d )
{
	No *temp;
    
    temp = d->lista;

    while(temp->prox->prox != NULL)
    {
        temp = temp->prox;
    }

    No* aux = temp->prox;
    temp->prox = NULL;

    free(aux);
    d->qtde--;
	return d->lista;

}
