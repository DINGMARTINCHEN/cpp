#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long pre=0,sum1=0,sum2=0,sum3=0,maxn=0;
    bool flag=false;
    for(long long i=0;i<a.size();i++)//��ͷ�����ĳ��ȵļ���
    {
        if(a[i]=='1')
        {
            sum1++;
        }
        else
        {
            flag=true;//���ȫ��1 ֱ�����      ������� �ڼ����м�ͽ�βi�ĳ���
            break;
        }
    }
    if(flag==true)
    {
        for(long long i=a.size()-1;i;i--)//��β��������
        {
            if(a[i]=='1')
            {
                sum2++;
            }
            else
            {
                
                break;
            }
        }
        for(long long i=0;i<a.size();i++)//�м����������
        {
            if(a[i]=='1')
            {
                sum3++;
            }
            else
            {
                maxn=max(pre,sum3);
                pre=sum3;
                sum3=0;
            }
        }
    }
    cout<<max(sum1+sum2,maxn);
}