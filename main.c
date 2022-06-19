#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ArvoreBinaria.h"

int main(void)
{
    int n, i, item, H = 0;
    Node *raiz;
    scanf("%d", &n);
    scanf("%d", &item);
    raiz = criar(item);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &item);
        inserir(item, raiz);
    }
    H = altura(raiz) - 1;
    printf("%d", H);
}
