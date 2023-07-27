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

// Função para criar um novo nó
Node* criar_novo_no(int valor)
{
    Node* novo_no = (Node*)malloc(sizeof(Node));
    novo_no->numero = valor;
    novo_no->ant = NULL;
    novo_no->prox = NULL;
    return novo_no;
}

// Função para inserir um novo nó no início da lista
void inserir_no_inicio(Node** lista, int data) 
{
    Node* novo_no = criar_novo_no(data);
    if (*lista == NULL) {
        *lista = novo_no;
    }
    else {
        novo_no->prox = *lista;
        (*lista)->ant = novo_no;
        *lista = novo_no;
    }
}

// Função para inserir um novo nó no fim da lista
void inserir_no_fim(Node** lista, int valor)
{
    Node* novo_no = criar_novo_no(valor);
    if (*lista == NULL) {
        *lista = novo_no;
    }
    else {
        Node* temp = *lista;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo_no;
        novo_no->ant = temp;
    }
}

// Função para excluir o nó do início da lista
void excluir_no_inicio(Node** lista) 
{
    if (*lista == NULL) {
        printf("A lista está vazia.\n");
    }
    else {
        Node* temp = *lista;
        *lista = (*lista)->prox;
        if (*lista != NULL) {
            (*lista)->ant = NULL;
        }
        free(temp);
    }
}

// Função para excluir o nó do fim da lista
void excluir_no_fim(Node** lista) 
{
    if (*lista == NULL) {
        printf("A lista está vazia. Não é possível excluir.\n");
    }
    else {
        Node* temp = *lista;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        if (temp->ant != NULL) {
            temp->ant->prox = NULL;
        }
        else {
            *lista = NULL;
        }
        free(temp);
    }
}

// Função para exibir a lista
void imprimir(Node* lista)
{
    if (lista == NULL)
    {
        printf("Lista vazia");
        return;
    }
    printf("Lista: ");
    while (lista != NULL) {
        printf("%d ", lista->numero);
        lista = lista->prox;
    }
    printf("\n");
}

// Função para buscar um valor na lista
void buscar(Node* lista, int valor)
{
    int encontrou = 0;
    Node* temp = lista;
    while (temp != NULL)
    {
        if (temp->numero == valor)
        {
            encontrou = 1;
        }
        temp = temp->prox;
    }
    if (encontrou == 1)
    {
        printf("Encontrou o numero\n");
    }
    else
    {
        printf("Nao encontrou o numero\n");
    }
    
}
