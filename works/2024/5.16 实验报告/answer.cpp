#include <bits/stdc++.h>
using namespace std;

typedef struct{
    unsigned int weight;
    unsigned int parent;
    unsigned int lChild;
    unsigned int rChild;
} Node, *HuffmanTree;

typedef char *HuffmanCode;

void select(HuffmanTree *huffmanTree, int n, int *s1, int *s2){
    int i=0,min;
    for(i = 1; i <= n; i++){
        if((*huffmanTree)[i].parent == 0){
            min = i;
            break;
        }
    }
    for(i = 1; i <= n; i++)
      if((*huffmanTree)[i].parent == 0)
        if((*huffmanTree)[i].weight < (*huffmanTree)[min].weight)
          min = i;
    *s1 = min;
    for(i = 1; i <= n; i++){
        if((*huffmanTree)[i].parent == 0 && i != (*s1)){
            min = i;
            break;
        }
    }
    for(i = 1; i <= n; i++)
      if((*huffmanTree)[i].parent == 0 && i != (*s1))
        if((*huffmanTree)[i].weight < (*huffmanTree)[min].weight)
          min = i;
    *s2 = min;
}

void createHuffmanTree(HuffmanTree *huffmanTree, int w[], int n)
{
    int m = 2 * n - 1;
    int s1,s2,i;
    *huffmanTree = (HuffmanTree)malloc((m + 1) * sizeof(Node));
    for(i = 1; i <= n; i++){
        (*huffmanTree)[i].weight = w[i];
        (*huffmanTree)[i].lChild = 0;
        (*huffmanTree)[i].parent = 0;
        (*huffmanTree)[i].rChild = 0;
    }
    for(i = n + 1; i <= m; i++){
        (*huffmanTree)[i].weight = 0;
        (*huffmanTree)[i].lChild = 0;
        (*huffmanTree)[i].parent = 0;
        (*huffmanTree)[i].rChild = 0;
    }
    for(i = n + 1; i <= m; i++){
        select(huffmanTree, i-1, &s1, &s2);
        (*huffmanTree)[s1].parent = i;
        (*huffmanTree)[s2].parent = i;
        (*huffmanTree)[i].lChild = s1;
        (*huffmanTree)[i].rChild = s2;
        (*huffmanTree)[i].weight = (*huffmanTree)[s1].weight + (*huffmanTree)[s2].weight;
    }
    cout<<(*huffmanTree)[m].weight;
}

int main(void)
{
    HuffmanTree HT;
    // HuffmanCode HC;
    int *w,i,n,wei,m;
    scanf("%d",&n);
    w=(int *)malloc((n+1)*sizeof(int));
    for(i=1; i<=n; i++){
        fflush(stdin);
        scanf("%d",&wei);
        w[i]=wei;
    }
    createHuffmanTree(&HT, w, n);
    return 0;
}
