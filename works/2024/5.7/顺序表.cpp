#include <stdio.h>

#include <stdlib.h>

#define LISTINITSIZE 20

#define INCREAMENT 5

typedef int ElemType;

typedef struct

{
    ElemType *elem;
    int length;
    int listsize;
} Seqlist;

void Initlist(Seqlist *L)
{
    int n, i;
    L->elem = (ElemType *)malloc(sizeof(ElemType) * LISTINITSIZE);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &L->elem[i]);
    }
    L->length = n;
    L->listsize = LISTINITSIZE;
}

void Prtlist(Seqlist L)
{
    int i;
    for (i = 0; i < L.length; i++)
    {
        printf("%d ", L.elem[i]);
    }
}

void fun(Seqlist *L)
{
    int i, t = L->elem[0], j;
    for (i = 0; i < L->length; i++)
    {
        if (t < L->elem[i])
        {
            t = L->elem[i];
        }
    }
    for (i = 0; i < L->length; i++)
    {
        if (t == L->elem[i])
        {
            j = i;
            break;
        }
    }

    for (i = L->length; j < i; j++)
    {
        L->elem[j] = L->elem[j + 1];
    }
    L->length--;
}
int main(void)
{
    Seqlist L;
    Initlist(&L);
    fun(&L);
    Prtlist(L);
}