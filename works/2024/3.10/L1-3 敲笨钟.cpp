#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string z;
    getline(cin,z);
    string a[22];
    int flag1[22]={0}, flag2[22]={0};
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
        for(int j=0;j<a[i].size();j++)
        {
            if(a[i][j]==',')
            {
                flag1[i]=j;

            }
            if(a[i][j]=='.')
            {
                flag2[i]=j;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int c=flag1[i],b=flag2[i];
        if(a[i][c-1]=='g'&&a[i][c-2]=='n'&&a[i][c-3]=='o'&&a[i][b-1]=='g'&&a[i][b-2]=='n'&&a[i][b-3]=='o')
        {
            // cout<<a[i];
            int sum=0;
            for(int j=0;sum<=10;j++)
            {
                if(a[i][j]==' ')
                {
                    sum++;
                }
                cout<<a[i][j];
            }
            cout<<"qiao ben zhong.";
        }
        else
        {
            cout<<"Skipped";
        }
        if(i<n-1)
        {
            cout<<endl;
        }
    }
}
