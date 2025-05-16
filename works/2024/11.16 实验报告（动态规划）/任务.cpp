#include<bits/stdc++.h>
using namespace std;
#define MAX 201
int a[MAX];//a[i],A机器 处理i作业花费时间 
int b[MAX];//b[i],B机器 处理i作业花费时间 
int f[MAX][10000];// f[i][j],在处理i作业时A机器花费j时间的情况下B机器花费的最小时间 
int suma=0;//如果所有作业全部由A机器处理，最大时间限制 
int min(int x,int y)
{
    return x<y?x:y;
}
int max(int x,int y)
{
    return x>y?x:y;
}
int dealWith(int n)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=suma;j++)
        {
            if(a[i]<=j)
            {
                f[i][j]=min(f[i-1][j-a[i]],f[i-1][j]+b[i]);
            }
            else
            {
                f[i][j]=f[i-1][j]+b[i];
            }
    
            
        }
    
    }
    int m=99999;
    for(int j=1;j<=suma;j++)
    {
        int t;
        t=max(j,f[n][j]);
        m=min(m,t);    
    
    }
    
    return m;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        suma+=a[i]; 
    } 
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    int m=dealWith(n); 
    printf("%d\n",m);
    return 0;
 } 