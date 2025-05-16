// https://www.luogu.com.cn/problem/P1177

#include <bits/stdc++.h>
using namespace std;

int all[10]={5,2,4,3,9,1,6,10,7,8};//全局变量

void bouble()
{
    /*
    5 2 4 3 9 1 6 10 7 8

    5 4 3 9 2 6 10 7 8 1
    */
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)//两重循环，确保每个数都被移到正确的位置
        {
            if(all[j]<all[j+1])//把大的数放在前面//! 从大到小排
            {
                // int tmp=all[j];//交换数值
                // all[j]=all[j+1];
                // all[j+1]=tmp;
                swap(all[j],all[j+1]);//或者用这个函数
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<all[i]<<" ";
    }
    return ;
}

void choose()//选择最大/最小的；重复进行下去
{
    for(int i=0;i<10;i++)
    {
        int minn=all[i];
        int flag=i;//标记要与all[i]更换的元素位置
        for(int j=i+1;j<10;j++)
        {
            if(minn>all[j])
            {
                minn=all[j];//找到all[i]后面元素中比all[i]小，且最小的元素
                flag=j;//更新标记
            }
        }
        swap(all[flag],all[i]);
    }
    
    for(int i=0;i<10;i++)
    {
        cout<<all[i]<<" ";
    }
    return ;
}

void sswap__()
{
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(all[i]>all[j])
            {
                swap(all[i],all[j]);
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<all[i]<<" ";
    }

    return ;
}

bool compare(int a,int b)
{
    return a<b;
}

int main() 
{
   
    //1、冒泡排序
    bouble();

    //2、选择排序
    // choose();

    //3、交换排序
    // sswap__();

    // 4、调用sort函数
    // int a[10]={5,2,4,3,9,1,6,10,7,8};
    // //         0 1 2 3 4 5 6  7 8 9
    // // sort(a+0,a+10,compare);//（需要排序的起始位置，终止位置）
    // int a[11]={0,5,2,4,3,9,1,6,10,7,8};
    // sort(a,a+10,greater<int>());//降序排列
    // sort(a,a+10,less<int>());//升序排列
    // sort(a,a+10,compare);//自定义排序方式（结构体啥的可能用得到）
    // sort(a+1,a+11);

    /*
3、插入排序
4、希尔排序
5、归并排序
6、快速排序
7、堆排序
8、计数排序
9、桶排序
10、基数排序
    */

    return 0;
}