#include<bits/stdc++.h>
using namespace std;
void judge(int b[],int len,int max)
{
    int a[1010];
    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    int stack[1010];
    int t1=0,t2=-1;
    stack[++t2]=a[0];
    for(int i=0;i<len;)
    {
        if(t2>=max&&t1!=len)
        {
            cout<<"NO"<<endl;
            return ;
        }
        else if(stack[t2]!=b[i])
        {
            stack[++t2]=a[++t1];
        }
        else
        {
            t2--;
            i++;
        }
    }
    if(t2!=-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    int max;
    cin>>max;
    int n,k;
    cin>>n>>k;
    int b[1010];
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        judge(b,n,max);
    }
    return 0;
}