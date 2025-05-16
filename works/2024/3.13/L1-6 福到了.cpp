#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char a;
    cin>>a>>n;
    string line[104];
    string line2[104];
    getline(cin,line[0]);
    for(int i=0;i<n;i++)
    {
        getline(cin,line[i]);
        for(int j=0;j<line[i].size();j++)
        {
            if(line[i][j]==' ')
            {
                line2[i][line[i].size()-j-1]=' ';
            }
            else
            {
                line2[i][line[i].size()-j-1]=a;
            }
        }
    }
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(line[i][j]==' '&&line2[i][j]!=' ')
            {
                flag=true;
                break;
            }
        }
    }
    if(flag==false)
    {
        cout<<"bu yong dao le"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<line2[n-i-1][j];
        }
        if(i<n-1)
        {
            cout<<endl;
        }
        
    }
}