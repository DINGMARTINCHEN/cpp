// https://www.luogu.com.cn/problem/P1152
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n],b[n];
    /*
    об╠Й  0  1  2  3  4  5  
    a     1  4  2 -1  6
    b        3 -2 -3  7   */
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        b[i]=abs(a[i]-a[i-1]);
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            if(b[i]>b[j])
            {
                swap(b[i],b[j]);
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(b[i]!=i)
        {
            cout<<"Not jolly";
            return 0;
        }
    }
    cout<<"Jolly";
    return 0;
}