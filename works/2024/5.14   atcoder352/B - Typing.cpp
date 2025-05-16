#include<bits/stdc++.h>
using  namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int j=0;
    for(int i=0;i<b.size();i++)
    {
        if(a[j]==b[i])
        {
            cout<<i+1<<" ";
            j++;
        }
    }
}