#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[999],b[999],c[999];
    int n,m;
    while(cin>>m)
    {
        for(int i=0;i<m;i++) cin>>a[i];
        cin>>n;
        for(int i=0;i<n;i++) cin>>b[i];
        int i,j,k;
        i=j=k=0;
        while(i<m && j<n)
        {
            if(a[i]<=b[j]) c[k++]=a[i++];
            else c[k++]=b[j++];
        }
        while(i<m) c[k++]=a[i++];
        while(j<n) c[k++]=b[j++];
        for(i=0;i<k;i++)
        {
            if(i) printf(" ");
            printf("%d",c[i]);
        }
        puts(" ");
    }
}