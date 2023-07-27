/*
   Curso: Sistemas de Informação
   Disciplina: Algoritmos e Estruturas de Dados
   Aluno: Amós do Carmo Moreira Filho
   Matrícula: 2015310002
*/
#include <stdio.h>
#include <stdlib.h>

// Definir a estrutura do nó
typedef struct Node
{
    int numero;
    struct Node* ant;
    struct Node* prox;
} Node;

// Definir um descritor 
typedef struct descritor
{
    int qtde;
    Node* primeiro;
    Node* ultimo;

}Descritor;

/*Cria um Descritor e atribui valores a ele*/
Descritor* criar_descritor()
{
    Descritor* d;
    d = (Descritor*)malloc(sizeof(Descritor));
    d->qtde = 0;
    d->primeiro = NULL;
    d->ultimo = NULL;

    return d;
}

// Função para criar um novo nó
Node* criar_novo_no(int valor)
{
    Node* novo_no = (Node*)malloc(sizeof(Node));
    novo_no->numero = valor;
    return novo_no;
}

// Função para inserir um novo nó no início da lista
void inserir_no_inicio(Descritor *d, int dado)
{
    Node* novo_no = criar_novo_no(dado);
    if (d->primeiro == NULL)
    {
        d->primeiro = novo_no;
        d->ultimo = novo_no;
    }
    else 
    {
        novo_no->prox = d->primeiro;
        novo_no->ant = d->ultimo;
        d->ultimo->prox = novo_no;
        d->primeiro->ant = novo_no;
        d->primeiro = novo_no;

    }
    d->qtde++;
}

// Função para inserir um novo nó no fim da lista
void inserir_no_fim(Descritor *d, int valor)
{
    Node* novo_no = criar_novo_no(valor);
    if (d->ultimo == NULL)
    {
        d->primeiro = novo_no;
    }
    else 
    {
        novo_no->ant = d->ultimo;
        novo_no->prox = d->primeiro;
        d->ultimo->prox = novo_no;
        d->primeiro->ant = novo_no;
    }
    d->ultimo = novo_no;
    d->qtde++;
}

// Função para excluir o nó do início da lista
void excluir_no_inicio(Descritor *d)
{
    if (d->qtde == 0)
    {
        printf("A lista esta vazia. Não é possível excluir.\n");
    }
    else 
    {
        Node* temp = d->primeiro;
        if (d->qtde == 1)
        {
            d->primeiro = NULL;
            d->ultimo = NULL;
        }
        else 
        {
            temp->prox->ant = d->ultimo;
            d->ultimo->prox = temp->prox;
            d->primeiro = temp->prox;
        }
        d->qtde--;
        free(temp);
    }
}

// Função para excluir o nó do fim da lista
void excluir_no_fim(Descritor *d)
{
    if (d->qtde == 0) {
        printf("A lista está vazia. Não é possível excluir.\n");
    }
    else
    {
        Node* temp = d->ultimo;
        if (d->qtde == 1)
        {
            d->primeiro = NULL;
            d->ultimo = NULL;
        }
        else
        {
            d->primeiro->ant = d->ultimo->ant;
            d->ultimo->ant->prox = d->primeiro;
            d->ultimo = temp->ant;
        }
        d->qtde--;
        free(temp);

    }
    
}

// Função para exibir a lista
void imprimir(Descritor* d)
{
    if (d->qtde == 0) {
        printf("A lista esta vazia.\n");
        return;
    }
    printf("Lista: ");
    Node* temp = d->primeiro;
    do
    {
        printf("%d ", temp->numero);
        temp = temp->prox;

    } while (temp != d->primeiro);
    printf("\n");
}

//Realizar uma busca por um valor na lista
void buscar(Descritor* d, int valor)
{
    int encontrou = 0;
    if (d->qtde == 0) {
        printf("A lista esta vazia.\n");
        return;
    }
    Node* temp = d->primeiro;
    do
    {
        if (valor == temp->numero) {

            encontrou = 1;
            break;
        }
        temp = temp->prox;

    } while (temp != d->primeiro);

    if (encontrou == 1)
    {
        printf("Encontrou o numero\n");
    }
    else
    {
        printf("Nao encontrou o numero\n");
    }

}
