#include<bits/stdc++.h>
#define RANDNUM 15000 // ������ĸ���

using namespace std;

void QuickSort(int *arr, int low, int high)//��������
{
    int i = low;
    int j = high;
    int k = arr[low];
    if (low > high)
        return;
    while (i < j)
    {
        while (i < j && arr[j] >= k) // ���������ҵ�һ��С��k����
            j--;
        if (i < j)
            arr[i++] = arr[j];
        while (i < j && arr[i] < k) // ���������ҵ�һ�����ڵ���k����
            i++;
        if (i < j)
            arr[j--] = arr[i];
    }

    arr[i] = k;

    // �ݹ����
    QuickSort(arr, low, i - 1);  // ����k���
    QuickSort(arr, i + 1, high); // ����k�ұ�
}
void shellSort(int *a, int len)//ϣ������
{
    int i, j, k, tmp, gap; // gap Ϊ����
    for (gap = len / 2; gap > 0; gap /= 2)
    { // ������ʼ��Ϊ���鳤�ȵ�һ�룬ÿ�α����󲽳�����,
        for (i = 0; i < gap; ++i)
        { // ���� i Ϊÿ�η���ĵ�һ��Ԫ���±�
            for (j = i + gap; j < len; j += gap)
            {                // �Բ���Ϊgap��Ԫ�ؽ���ֱ�����򣬵�gapΪ1ʱ������ֱ������
                tmp = a[j];  // ����a[j]��ֵ
                k = j - gap; // j��ʼ��Ϊi��ǰһ��Ԫ�أ���i���gap���ȣ�
                while (k >= 0 && a[k] > tmp)
                {
                    a[k + gap] = a[k]; // ����a[i]ǰ�ұ�tmp��ֵ���Ԫ������ƶ�һλ
                    k -= gap;
                }
                a[k + gap] = tmp;
            }
        }
    }
}
void InsertSort(int *a, int len)//��������
{
	for (int j=1; j<len; j++)
	{
		int key = a[j];
		int i = j-1;
		while (i>=0 && a[i]>key)
		{
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
}



//------------------������
// Heapsort.cpp : �������̨Ӧ�ó������ڵ㡣
void swap(int arr[], int a, int b)		//����Ԫ�أ�
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void adjustHeap(int arr[], int i, int length)		//�����󶥶ѣ����ǵ������̣������ڴ󶥶��ѹ����Ļ����ϣ�
{
	int temp = arr[i];//��ȡ����ǰԪ��i
	for (int k = i * 2 + 1; k<length; k = k * 2 + 1)//��i�������ӽ�㿪ʼ��Ҳ����2i+1����ʼ
	{
		if (k + 1<length&&arr[k]<arr[k + 1])//������ӽ��С�����ӽ�㣬kָ�����ӽ��
		{
			k++;
		}
		if (arr[k] >temp)//����ӽڵ���ڸ��ڵ㣬���ӽڵ�ֵ�������ڵ㣨���ý��н�����
		{
			arr[i] = arr[k];
			i = k;
		}
		else
		{
			break;
		}
	}
	arr[i] = temp;//��tempֵ�ŵ����յ�λ��
}
void Heapsort(int arr[], int length)
{
	//1.�����󶥶�
	for (int i = length / 2 - 1; i >= 0; i--)
	{
		//�ӵ�һ����Ҷ�ӽ��������ϣ�������������ṹ
		adjustHeap(arr, i, length);
	}
	for (int j = length - 1; j>0; j--)
	{
		swap(arr, 0, j);//���Ѷ�Ԫ����ĩβԪ�ؽ��н���
		adjustHeap(arr, 0, j);//���¶Զѽ��е���
	}
 
}
//------------------������

//----------�鲢����
void merge(int* a, int low, int mid, int hight)  //�ϲ�����
{
	int* b = new int[hight - low + 1];  //�� new ����һ����������
	int i = low, j = mid + 1, k = 0;    // kΪ b �����С��
	while (i <= mid && j <= hight)  
	{
		if (a[i] <= a[j])
		{
			b[k++] = a[i++];  //����С�������� b ��������
		}
		else
		{
			b[k++] = a[j++];
		}
	}
	while (i <= mid)  // j ���н�������ʣ��� i ���в����� b ������ 
	{
		b[k++] = a[i++];
	}
	while (j <= hight)// i ���н�������ʣ��� j ���в����� b ������ 
	{
		b[k++] = a[j++];
	}
	k = 0;  //��С��Ϊ 0 ��ʼ����
	for (int i = low; i <= hight; i++)  //�� b �����ֵ���ݸ����� a
	{
		a[i] = b[k++];
	}
	delete[]b;     // ������������󣬽���Ŀռ�����ͷţ����٣�
}
void mergesort(int* a, int low, int hight) //�鲢����
{
	if (low < hight)
	{
		int mid = (low + hight) / 2;
		mergesort(a, low, mid);          //�� a[low,mid]��������
		mergesort(a, mid + 1, hight);    //�� a[mid+1,hight]��������
		merge(a, low, mid, hight);       //���кϲ�����
	}
}
//----------�鲢����



int main()
{
    int numbersnum=0;
    cout<<"����������";
    cin>>numbersnum;
    int iRandNum[RANDNUM]; // ��������

    clock_t first, second; // ��¼��ʼ�ͽ���ʱ�䣨�Ժ���Ϊ��λ��
    double t;
    int temp, a[RANDNUM], b[RANDNUM];
    int i, j, index;

    for (i = 0; i < RANDNUM; i++) // ����1��������
    {

        iRandNum[i] = rand() % 10000;
    }
    for (i = 0; i < RANDNUM; i++)
    {
        a[RANDNUM] = iRandNum[RANDNUM];
        b[RANDNUM] = iRandNum[RANDNUM];
    }
    // printf("��ʼ����ǰ%d����Ϊ:\n",numbersnum);
    // for (i = 0; i < numbersnum; i++)
    // {
    //     printf("%d  ", iRandNum[i]);
    //     int c=sqrt(numbersnum);
    //     if (i %c == 0 && i > 0)
    //         printf("\n");
    // }
    printf("\n");
    first = clock(); // ��ʼʱ��
    // �˴������������

    i = 0;
    while (i < numbersnum)
    {
        QuickSort(iRandNum, 0, RANDNUM - 1); // ��������
        i++;
    }

    second = clock(); // ����ʱ��
                      // ��ʾ�����㷨���õ�ʱ��
    t = (double)(second - first) / CLK_TCK;
    printf("��������%lf seconds", t);
    printf("\n");

    first = clock();

    i = 0;
    while (i < numbersnum)
    {
        shellSort(a, RANDNUM);
        i++;
    }

    second = clock();
    t = (double)(second - first) / CLK_TCK;
    printf("ϣ������ %lf seconds", t);

    printf("\n");
    first = clock();
    for (i = 0; i < RANDNUM - 1; i++)//----numbersnum
    {
        index = i;
        for (j = i + 1; j < RANDNUM; j++)//-----numbersnum
        {
            if (b[j] < b[index])
                index = j;
        }
        temp = b[index];
        b[index] = b[i];
        b[i] = temp;
    }

    second = clock();
    t = (double)(second - first) / CLK_TCK;
    printf("ѡ������ %lf seconds", t);
    printf("\n");

    //-----------------��������
    first = clock(); // ��ʼʱ��
    // �˴������������

    i = 0;
    while (i < numbersnum)
    {
        InsertSort(iRandNum, RANDNUM ); // ��������
        i++;
    }

    second = clock(); // ����ʱ��
                      // ��ʾ�����㷨���õ�ʱ��
    t = (double)(second - first) / CLK_TCK;
    printf("��������%lf seconds", t);
    printf("\n");


    //-----------------������
    first = clock(); // ��ʼʱ��
    // �˴������������

    i = 0;
    while (i < numbersnum)
    {
        Heapsort(iRandNum,RANDNUM ); // ������
        i++;
    }

    second = clock(); // ����ʱ��
                      // ��ʾ�����㷨���õ�ʱ��
    t = (double)(second - first) / CLK_TCK;
    printf("������%lf seconds", t);
    printf("\n");


    //-----------------�鲢����
    first = clock(); // ��ʼʱ��
    // �˴������������

    i = 0;
    while (i < numbersnum)
    {
        mergesort(iRandNum,0,RANDNUM-1 ); // �鲢����
        i++;
    }

    second = clock(); // ����ʱ��
                      // ��ʾ�����㷨���õ�ʱ��
    t = (double)(second - first) / CLK_TCK;
    printf("�鲢����%lf seconds", t);
    printf("\n");
}