#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int b[10005],a[10005],cnt;

void mergesort(int left,int right)
{
    if(left==right)return ;
    int mid=(left+right)/2;
    mergesort(left,mid);
    mergesort(mid+1,right);
    int p=left,i=left,j=mid+1;
    while(i<=mid&&j<=right)
    {
        if(a[i]>a[j])
        {
            cnt+=mid+1-i;
            b[p++]=a[j++];
        }
        else
        {
            b[p++]=a[i++];
        }
    }
    while(i<=mid)
    {
        b[p++]=a[i++];
    }
    while(j<=right)
    {
        b[p++]=a[j++];
    }
    for(i=left;i<=right;i++)
    {
        a[i]=b[i];
    }
}

int main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    mergesort(1,n);
    cout<<cnt<<endl;
    return 0;
}
/*

冯子力超级下头男
下头男
*/