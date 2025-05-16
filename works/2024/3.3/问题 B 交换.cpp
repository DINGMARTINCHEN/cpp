#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long pre=0,sum1=0,sum2=0,sum3=0,maxn=0;
    bool flag=false;
    for(long long i=0;i<a.size();i++)//开头连续的长度的计算
    {
        if(a[i]=='1')
        {
            sum1++;
        }
        else
        {
            flag=true;//如果全是1 直接输出      如果不是 在计算中间和结尾i的长度
            break;
        }
    }
    if(flag==true)
    {
        for(long long i=a.size()-1;i;i--)//结尾连续长度
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
        for(long long i=0;i<a.size();i++)//中间连续的最长的
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