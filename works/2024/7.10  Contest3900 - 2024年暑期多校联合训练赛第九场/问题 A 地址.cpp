#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    //012...1234@999()33#$S
    getline(cin,a);
    int num=0;
    int ans[4]={0};
    int j=0;
    bool flag=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<='9'&&a[i]>='0')
        {
            int temp=a[i]-'0';
            num*=10;
            num+=temp;
        }
        else if(a[i]=='.')
        {
            ans[j]=num;
            j++;
            cout<<num<<"+++";
            num=0;
        }
        else
        {
            ans[j]=num;
            cout<<num<<"---";
            j++;
            num=0;
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    for(int i=0;i<4;i++)
    {
        cout<<ans[i]<<endl;
    }
}
