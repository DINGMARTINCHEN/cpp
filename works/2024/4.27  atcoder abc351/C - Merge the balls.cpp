#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int aa[n];
    int point=0;
    aa[point]=a[0];
    for(int i=0;i<n;i++)
    {
        // cout<<endl<<"i的值"<<i+1<<" ";
        // cout<<"当前处理的值"<<a[i]<<" 左边的球";
        for(int j=0;j<point;j++)
        {
            // cout<<aa[j]<<" ";
        }
        // cout<<endl<<endl;
        if(a[i]==aa[point])
        {
            aa[point]=a[i]+1;
        }
        else
        {
            point++;
            aa[point]=a[i];
        }
    }
    cout<<point;
}