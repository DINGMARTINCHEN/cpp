#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        int sum=0;
        cin>>a>>b;
        string aa,bb;
        cin>>aa>>bb;
        for(int j=0;j<max(a,b);j++)
        {
            if(aa[j]==bb[j])
            {
                sum++;
            }
        }
        while(a)
        {
            if(aa[a]==bb[a])
            {
                a--;
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}