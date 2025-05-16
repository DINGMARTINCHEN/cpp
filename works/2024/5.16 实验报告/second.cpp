#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
typedef struct{
    int weight;//权重
    int parent,lch,rch;//双亲，左孩子，右孩子
}HTNode,*HuffmanTree;
 
int j = 0;
int k = 0;//设置两个全局变量j,k，用来接收两个最小权重在数组中的下标
 
int cmp(void* e1, void* e2)//配合qsort()函数的比较函数
{
    if(*(int*)e1 - *(int*)e2 > 0)return 1;
    else if(*(int*)e1 - *(int*)e2 < 0)return -1;
    else return 0;
 
}
 
int Select(HuffmanTree HT, int n)//找出权重最小的二个根结点在ＨＴ数组中的位置
{
    int i = 0;
    int p = 0;//用于控制数组arr，按顺序存储数据
    int arr[MAX_SIZE] = {0};//用于存储根结点的权重值，以便排序
    int count = 0;//用来记录arr数组中，有几个值需要排序
    for(i = 1; i <= n; i++)
    {
        if(HT[i].parent == 0&&HT[i].weight != 0)//必须是有权重值的根结点，才会被加入到arr数组当中
        {
            arr[++p-1] = HT[i].weight;
            count++;//arr有效元素个数+１，arr数组中初始化的0，不算有效元素
        }
    }
    qsort(arr, count, sizeof(int), cmp);//对arr数组中的权重值排序，而且只对有效元素排序，
    for(i = 1; i <= n; i++)
    {
        if(HT[i].weight == arr[0])//arr[0]是最小元素
        {
            j = i;
            break;
        }
    }
    for(i = 1; i <= n; i++)
    {
        if(HT[i].weight == arr[1] && i != j)//arr[1]是第二小的元素，且要保证arr[0]=arr[1]时,选取的两个下标不相同
        {
            k = i;
            break;
        }
    }
    return 0;
}
void CreatHuffmanTree(HuffmanTree HT, int n)
{
    int i = 0;
    int m = 0;
    if(n <= 1)return;
    m = 2*n - 1;
    HT = malloc(sizeof(HTNode)*(m+1));//有n个叶子，树就有2n-1个结点，0号位置不用，所以需要2n个结点大小
    for(i = 1; i <= m+1; i++)//将2n-1个元素初始化，lch,rch,parent设置为0
    {
        HT[i].lch = 0;
        HT[i].rch = 0;
        HT[i].parent = 0;
        HT[i].weight = 0;
    }
    for(i = 1; i <= n; i++)//设置叶子结点weight值（权重）
    {
        int input = 0;
        printf("请输入每个元素的权重:>");
        scanf("%d",&input);
        HT[i].weight = input;
    }
    //开始创建哈夫曼树
    for(i = 1; i < n; i++)//初始有n个根结点，就要新产生n-1个结点，循环一次产生一个
    {
        Select(HT, m+1);//得到权重最小的两个根结点在ＨＴ数组中的下标j,k
        HT[n+i].lch = j;//ＨＴ数组中有n个根结点，那么新生成的根结点下标从n+1开始
        HT[n+i].rch = k;//设置新根结点的孩子值
        HT[n+i].weight = HT[j].weight + HT[k].weight;//设置新根结点的权重值为两孩子权重值之和
        HT[j].parent = n+i;//新根结点的下标值为最小权值的两个结点的双亲
        HT[k].parent = n+i;
    }
}
int main()
{
    HuffmanTree HT = 0;
    CreatHuffmanTree(HT, MAX_SIZE);
    return 0;
}