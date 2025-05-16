#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    getline(cin,a);
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int max=0;
        getline(cin,a);
        for(int j=0;j<a.size();j++)
        {
            if(a[j]=='v')
            {
                sum++;
            }
            if(a[j]=='^'&&sum>0)
            {
                sum--;
            }
            if(max<sum)
            {
                max=sum;
            }
        }
        cout<<max<<endl;
    }
}