#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
typedef struct{
    int weight;//Ȩ��
    int parent,lch,rch;//˫�ף����ӣ��Һ���
}HTNode,*HuffmanTree;
 
int j = 0;
int k = 0;//��������ȫ�ֱ���j,k����������������СȨ���������е��±�
 
int cmp(void* e1, void* e2)//���qsort()�����ıȽϺ���
{
    if(*(int*)e1 - *(int*)e2 > 0)return 1;
    else if(*(int*)e1 - *(int*)e2 < 0)return -1;
    else return 0;
 
}
 
int Select(HuffmanTree HT, int n)//�ҳ�Ȩ����С�Ķ���������ڣȣ������е�λ��
{
    int i = 0;
    int p = 0;//���ڿ�������arr����˳��洢����
    int arr[MAX_SIZE] = {0};//���ڴ洢������Ȩ��ֵ���Ա�����
    int count = 0;//������¼arr�����У��м���ֵ��Ҫ����
    for(i = 1; i <= n; i++)
    {
        if(HT[i].parent == 0&&HT[i].weight != 0)//��������Ȩ��ֵ�ĸ���㣬�Żᱻ���뵽arr���鵱��
        {
            arr[++p-1] = HT[i].weight;
            count++;//arr��ЧԪ�ظ���+����arr�����г�ʼ����0��������ЧԪ��
        }
    }
    qsort(arr, count, sizeof(int), cmp);//��arr�����е�Ȩ��ֵ���򣬶���ֻ����ЧԪ������
    for(i = 1; i <= n; i++)
    {
        if(HT[i].weight == arr[0])//arr[0]����СԪ��
        {
            j = i;
            break;
        }
    }
    for(i = 1; i <= n; i++)
    {
        if(HT[i].weight == arr[1] && i != j)//arr[1]�ǵڶ�С��Ԫ�أ���Ҫ��֤arr[0]=arr[1]ʱ,ѡȡ�������±겻��ͬ
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
    HT = malloc(sizeof(HTNode)*(m+1));//��n��Ҷ�ӣ�������2n-1����㣬0��λ�ò��ã�������Ҫ2n������С
    for(i = 1; i <= m+1; i++)//��2n-1��Ԫ�س�ʼ����lch,rch,parent����Ϊ0
    {
        HT[i].lch = 0;
        HT[i].rch = 0;
        HT[i].parent = 0;
        HT[i].weight = 0;
    }
    for(i = 1; i <= n; i++)//����Ҷ�ӽ��weightֵ��Ȩ�أ�
    {
        int input = 0;
        printf("������ÿ��Ԫ�ص�Ȩ��:>");
        scanf("%d",&input);
        HT[i].weight = input;
    }
    //��ʼ������������
    for(i = 1; i < n; i++)//��ʼ��n������㣬��Ҫ�²���n-1����㣬ѭ��һ�β���һ��
    {
        Select(HT, m+1);//�õ�Ȩ����С������������ڣȣ������е��±�j,k
        HT[n+i].lch = j;//�ȣ���������n������㣬��ô�����ɵĸ�����±��n+1��ʼ
        HT[n+i].rch = k;//�����¸����ĺ���ֵ
        HT[n+i].weight = HT[j].weight + HT[k].weight;//�����¸�����Ȩ��ֵΪ������Ȩ��ֵ֮��
        HT[j].parent = n+i;//�¸������±�ֵΪ��СȨֵ����������˫��
        HT[k].parent = n+i;
    }
}
int main()
{
    HuffmanTree HT = 0;
    CreatHuffmanTree(HT, MAX_SIZE);
    return 0;
}