#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='x')
        {
            for(int j=i;j<a.size();j++)
            {
                if(a[j]=='l')
                {
                    for(int p=j;p<a.size();p++)
                    {
                        if(a[p]=='s')
                        {
                            sum++;
                            a[i]='0';
                            a[j]='0';
                            a[p]='0';
                            break;
                        }
                    }
                }
            }
        }
    }
    cout<<sum;
}