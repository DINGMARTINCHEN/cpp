#include<bits/stdc++.h>
#define RANDNUM 15000 // 随机数的个数

using namespace std;

void QuickSort(int *arr, int low, int high)//快速排序
{
    int i = low;
    int j = high;
    int k = arr[low];
    if (low > high)
        return;
    while (i < j)
    {
        while (i < j && arr[j] >= k) // 从右向左找第一个小于k的数
            j--;
        if (i < j)
            arr[i++] = arr[j];
        while (i < j && arr[i] < k) // 从左向右找第一个大于等于k的数
            i++;
        if (i < j)
            arr[j--] = arr[i];
    }

    arr[i] = k;

    // 递归调用
    QuickSort(arr, low, i - 1);  // 排序k左边
    QuickSort(arr, i + 1, high); // 排序k右边
}
void shellSort(int *a, int len)//希尔排序
{
    int i, j, k, tmp, gap; // gap 为步长
    for (gap = len / 2; gap > 0; gap /= 2)
    { // 步长初始化为数组长度的一半，每次遍历后步长减半,
        for (i = 0; i < gap; ++i)
        { // 变量 i 为每次分组的第一个元素下标
            for (j = i + gap; j < len; j += gap)
            {                // 对步长为gap的元素进行直插排序，当gap为1时，就是直插排序
                tmp = a[j];  // 备份a[j]的值
                k = j - gap; // j初始化为i的前一个元素（与i相差gap长度）
                while (k >= 0 && a[k] > tmp)
                {
                    a[k + gap] = a[k]; // 将在a[i]前且比tmp的值大的元素向后移动一位
                    k -= gap;
                }
                a[k + gap] = tmp;
            }
        }
    }
}
void InsertSort(int *a, int len)//插入排序
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



//------------------堆排序
// Heapsort.cpp : 定义控制台应用程序的入口点。
void swap(int arr[], int a, int b)		//交换元素；
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void adjustHeap(int arr[], int i, int length)		//调整大顶堆（仅是调整过程，建立在大顶堆已构建的基础上）
{
	int temp = arr[i];//先取出当前元素i
	for (int k = i * 2 + 1; k<length; k = k * 2 + 1)//从i结点的左子结点开始，也就是2i+1处开始
	{
		if (k + 1<length&&arr[k]<arr[k + 1])//如果左子结点小于右子结点，k指向右子结点
		{
			k++;
		}
		if (arr[k] >temp)//如果子节点大于父节点，将子节点值赋给父节点（不用进行交换）
		{
			arr[i] = arr[k];
			i = k;
		}
		else
		{
			break;
		}
	}
	arr[i] = temp;//将temp值放到最终的位置
}
void Heapsort(int arr[], int length)
{
	//1.构建大顶堆
	for (int i = length / 2 - 1; i >= 0; i--)
	{
		//从第一个非叶子结点从下至上，从右至左调整结构
		adjustHeap(arr, i, length);
	}
	for (int j = length - 1; j>0; j--)
	{
		swap(arr, 0, j);//将堆顶元素与末尾元素进行交换
		adjustHeap(arr, 0, j);//重新对堆进行调整
	}
 
}
//------------------堆排序

//----------归并排序
void merge(int* a, int low, int mid, int hight)  //合并函数
{
	int* b = new int[hight - low + 1];  //用 new 申请一个辅助函数
	int i = low, j = mid + 1, k = 0;    // k为 b 数组的小标
	while (i <= mid && j <= hight)  
	{
		if (a[i] <= a[j])
		{
			b[k++] = a[i++];  //按从小到大存放在 b 数组里面
		}
		else
		{
			b[k++] = a[j++];
		}
	}
	while (i <= mid)  // j 序列结束，将剩余的 i 序列补充在 b 数组中 
	{
		b[k++] = a[i++];
	}
	while (j <= hight)// i 序列结束，将剩余的 j 序列补充在 b 数组中 
	{
		b[k++] = a[j++];
	}
	k = 0;  //从小标为 0 开始传送
	for (int i = low; i <= hight; i++)  //将 b 数组的值传递给数组 a
	{
		a[i] = b[k++];
	}
	delete[]b;     // 辅助数组用完后，将其的空间进行释放（销毁）
}
void mergesort(int* a, int low, int hight) //归并排序
{
	if (low < hight)
	{
		int mid = (low + hight) / 2;
		mergesort(a, low, mid);          //对 a[low,mid]进行排序
		mergesort(a, mid + 1, hight);    //对 a[mid+1,hight]进行排序
		merge(a, low, mid, hight);       //进行合并操作
	}
}
//----------归并排序



int main()
{
    int numbersnum=0;
    cout<<"排序数量：";
    cin>>numbersnum;
    int iRandNum[RANDNUM]; // 存放随机数

    clock_t first, second; // 记录开始和结束时间（以毫秒为单位）
    double t;
    int temp, a[RANDNUM], b[RANDNUM];
    int i, j, index;

    for (i = 0; i < RANDNUM; i++) // 产生1万个随机数
    {

        iRandNum[i] = rand() % 10000;
    }
    for (i = 0; i < RANDNUM; i++)
    {
        a[RANDNUM] = iRandNum[RANDNUM];
        b[RANDNUM] = iRandNum[RANDNUM];
    }
    // printf("初始序列前%d个数为:\n",numbersnum);
    // for (i = 0; i < numbersnum; i++)
    // {
    //     printf("%d  ", iRandNum[i]);
    //     int c=sqrt(numbersnum);
    //     if (i %c == 0 && i > 0)
    //         printf("\n");
    // }
    printf("\n");
    first = clock(); // 开始时间
    // 此处加入排序程序

    i = 0;
    while (i < numbersnum)
    {
        QuickSort(iRandNum, 0, RANDNUM - 1); // 快速排序
        i++;
    }

    second = clock(); // 结束时间
                      // 显示排序算法所用的时间
    t = (double)(second - first) / CLK_TCK;
    printf("快速排序%lf seconds", t);
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
    printf("希尔排序 %lf seconds", t);

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
    printf("选择排序 %lf seconds", t);
    printf("\n");

    //-----------------插入排序
    first = clock(); // 开始时间
    // 此处加入排序程序

    i = 0;
    while (i < numbersnum)
    {
        InsertSort(iRandNum, RANDNUM ); // 插入排序
        i++;
    }

    second = clock(); // 结束时间
                      // 显示排序算法所用的时间
    t = (double)(second - first) / CLK_TCK;
    printf("插入排序%lf seconds", t);
    printf("\n");


    //-----------------堆排序
    first = clock(); // 开始时间
    // 此处加入排序程序

    i = 0;
    while (i < numbersnum)
    {
        Heapsort(iRandNum,RANDNUM ); // 堆排序
        i++;
    }

    second = clock(); // 结束时间
                      // 显示排序算法所用的时间
    t = (double)(second - first) / CLK_TCK;
    printf("堆排序%lf seconds", t);
    printf("\n");


    //-----------------归并排序
    first = clock(); // 开始时间
    // 此处加入排序程序

    i = 0;
    while (i < numbersnum)
    {
        mergesort(iRandNum,0,RANDNUM-1 ); // 归并排序
        i++;
    }

    second = clock(); // 结束时间
                      // 显示排序算法所用的时间
    t = (double)(second - first) / CLK_TCK;
    printf("归并排序%lf seconds", t);
    printf("\n");
}