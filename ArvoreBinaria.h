#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.c"

typedef struct
{
    int item;
    struct Node *left;
    struct Node *right;
} Node;

Node *criar(int item)
{
    Node *tree = (Node *)malloc(sizeof(Node));

    tree->item = item;
    tree->left = NULL;
    tree->right = NULL;

    return tree;
}

Node *inserir(int item, Node *tree)
{
    if (tree == NULL)
        tree = criar(item);
    else if (item < tree->item)
        tree->left = inserir(item, tree->left);
    else if (item > tree->item)
        tree->right = inserir(item, tree->right);

    return tree;
}

int altura(Node *tree)
{
    int direita = 0, esquerda = 0;
    if (tree != NULL)
    {
        esquerda = altura(tree->left) + 1;
        direita = altura(tree->right) + 1;
    }
    if (esquerda > direita)
    {
        return esquerda;
    }
    else
    {
        return direita;
    }
}