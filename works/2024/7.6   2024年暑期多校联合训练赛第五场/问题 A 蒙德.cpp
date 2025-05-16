#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(1)
    {
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==' ')
            {
                while(1)
                {
                    if(a[i+1]==' ')
                    {
                        i++;
                    }
                    else
                    {
                        cout<<' ';
                        break;
                    }
                }
                cout<<' ';
            }
            if(a[i]<='Z'&&a[i]>='A')
            {
                cout<<char(int(a[i])-int('A')+int('a'));
            }
            if(a[i]<='z'&&a[i]>='a')
            {
                cout<<a[i];
            }
        }
    }
}