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
    int x;
    int y;
    struct Node* ant;
    struct Node* prox;

} Node;

// Função para criar um novo nó
Node* criar_novo_no(int x, int y)
{
    Node* novo_no = (Node*)malloc(sizeof(Node));
    novo_no->x = x;
    novo_no->y = y;
    novo_no->ant = NULL;
    novo_no->prox = NULL;
    return novo_no;
}

// Função para inserir um novo nó no início da lista
void inserir_no_inicio(Node** lista, int x, int y)
{
    Node* novo_no = criar_novo_no(x, y);
    if (*lista == NULL) {
        *lista = novo_no;
    }
    else {
        novo_no->prox = *lista;
        (*lista)->ant = novo_no;
        *lista = novo_no;
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
        printf("(%d, %d) ", lista->x, lista->y);
        lista = lista->prox;
    }
    printf("\n");
}

void mostrar_labirinto(int linhas, int colunas, int labirinto[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", labirinto[i][j]);
        }
        printf("\n");
    }
}

void percorrer_labirinto(int linhas, int colunas, int lab[][colunas])
{
    int inicio[2];
    int fim[2];
    Node* temp = NULL;
    printf("Digite as coordenadas de inicio (x y): ");
    scanf("%d %d", &inicio[0], &inicio[1]);

    printf("Digite as coordenadas de fim (x y): ");
    scanf("%d %d", &fim[0], &fim[1]);

    if (lab[inicio[0]][inicio[1]] == 0) 
    {
        printf("Nao pode comecar na parede\n");
        return;
    }
    else if (lab[fim[0]][fim[1]] == 0)
    {
        printf("Nao pode terminar na parede\n");
        return;
    }
    else if (inicio[0] == fim[0] && inicio[1] == fim[1])
    {
        printf("Nem precisa me perguntar, pois voce ja chegou onde sempre quis estar\n");
        return;
    }
    else 
    {
        lab[inicio[0]][inicio[1]] = 0;
        inserir_no_inicio(&temp, inicio[0], inicio[1]);

    }
    int valor_caminho = 0;
    int encerrou = 0;
    mostrar_labirinto(linhas, colunas, lab);
    while (valor_caminho < 50 && encerrou == 0 )
    {
        if (temp == NULL) {
            printf("Labirinto nao tem solução\n");
            encerrou = 1;
        }
        else if (temp->x == fim[0] && temp->y == fim[1])
        {
            printf("Voce chegou no final!\n");
            encerrou = 1;
        }
        else if (temp->x > 0 && lab[temp->x-1][temp->y] == 1)
        {
            printf("Cima ");
            lab[temp->x - 1][temp->y] = 0;
            inserir_no_inicio(&temp, temp->x-1, (temp->y));
            
        }
        else if (temp->y + 1 < colunas && lab[temp->x][temp->y+1] == 1)
        {
            printf("Direita ");
            lab[temp->x][temp->y + 1] = 0;
            inserir_no_inicio(&temp, temp->x, (temp->y + 1 ));
        }
        else if (temp->x + 1 < linhas && lab[temp->x+1][temp->y] == 1)
        {
            printf("Baixo ");
            lab[temp->x + 1][temp->y] = 0;
            inserir_no_inicio(&temp, (temp->x+1), temp->y);
        }
        else if (temp->y > 0 && lab[temp->x][temp->y - 1] == 1)
        {
            printf("Esquerda ");
            lab[temp->x][temp->y - 1] = 0;
            inserir_no_inicio(&temp, temp->x, (temp->y - 1));
        }
        else
        {
            printf("Deletar");
            excluir_no_inicio(&temp);
        }
        valor_caminho++;
        printf("%d %d\n", temp->x, temp->y);
    }
    printf("Foram precisas %d verificacoes\n", valor_caminho);
    imprimir(temp);
    
    free(temp);

}
