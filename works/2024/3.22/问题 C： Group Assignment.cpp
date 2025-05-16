#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
cin.tie(0),cout.tie(0);

    int n;
    cin>>n;
    string c;
    getline(cin,c);
    for(int i=0;i<n;i++)
    {
        string a,b;
        int sum=0;
        getline(cin,a);
        getline(cin,b);
        for(int j=0;j<a.size();j++)
        {
            if(a[j]=='0'&&b[j]=='0')
            {
                sum++;
            }
        }
        int z=double((a.size()-sum))*1.0/double(a.size())*100;
        cout<<z<<'\n';
    }
}