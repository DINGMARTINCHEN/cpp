// https://www.luogu.com.cn/problem/P1177

#include <bits/stdc++.h>
using namespace std;

int all[10]={5,2,4,3,9,1,6,10,7,8};//ȫ�ֱ���

void bouble()
{
    /*
    5 2 4 3 9 1 6 10 7 8

    5 4 3 9 2 6 10 7 8 1
    */
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)//����ѭ����ȷ��ÿ���������Ƶ���ȷ��λ��
        {
            if(all[j]<all[j+1])//�Ѵ��������ǰ��//! �Ӵ�С��
            {
                // int tmp=all[j];//������ֵ
                // all[j]=all[j+1];
                // all[j+1]=tmp;
                swap(all[j],all[j+1]);//�������������
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<all[i]<<" ";
    }
    return ;
}

void choose()//ѡ�����/��С�ģ��ظ�������ȥ
{
    for(int i=0;i<10;i++)
    {
        int minn=all[i];
        int flag=i;//���Ҫ��all[i]������Ԫ��λ��
        for(int j=i+1;j<10;j++)
        {
            if(minn>all[j])
            {
                minn=all[j];//�ҵ�all[i]����Ԫ���б�all[i]С������С��Ԫ��
                flag=j;//���±��
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
   
    //1��ð������
    bouble();

    //2��ѡ������
    // choose();

    //3����������
    // sswap__();

    // 4������sort����
    // int a[10]={5,2,4,3,9,1,6,10,7,8};
    // //         0 1 2 3 4 5 6  7 8 9
    // // sort(a+0,a+10,compare);//����Ҫ�������ʼλ�ã���ֹλ�ã�
    // int a[11]={0,5,2,4,3,9,1,6,10,7,8};
    // sort(a,a+10,greater<int>());//��������
    // sort(a,a+10,less<int>());//��������
    // sort(a,a+10,compare);//�Զ�������ʽ���ṹ��ɶ�Ŀ����õõ���
    // sort(a+1,a+11);

    /*
3����������
4��ϣ������
5���鲢����
6����������
7��������
8����������
9��Ͱ����
10����������
    */

    return 0;
}