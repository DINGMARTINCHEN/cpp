#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int sum=0;
    bool flag=false;
    int b=-1;
    int flag1=0;
    int summ=0;
    for(int i=0;i<9999;i++)
    {
        getline(cin,a);
        sum++;
        if(a[0]=='.'&&a.size()==1)
        {
            break;
        }
        if(flag==false)
        {
            string c="chi1 huo3 guo1";
            b=a.find(c);
            if(b!=-1)
            {
                flag1=sum;
                flag=true;
                for(int j=0;j<b;j++)
                {
                    if(a[j]==' ')
                    {
                        summ++;
                    }
                }
            }
        }
    }
    if(flag==false)
    {
        cout<<sum-1<<endl<<"-_-#";
    }
    else
    {
        cout<<sum-1<<endl<<flag1<<" "<<summ+1;
    }
}