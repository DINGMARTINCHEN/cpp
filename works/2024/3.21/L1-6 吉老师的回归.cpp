#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[40];
    int n,k;
    cin>>n>>k;
    int flag=0;
    getline(cin,a[0]);
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
        if(a[i].find("qiandao")==-1&&a[i].find("easy")==-1&&k==0)
        {
            cout<<a[i];
            return 0;
        }
        if(a[i].find("qiandao")==-1&&a[i].find("easy")==-1)
        {
            k--;
            flag++;
            // cout<<flag<<endl;
        }
    }
    
    // if(flag>n)
    // {
        cout<<"Wo AK le";
    // }
    // else{
    //     cout<<a[flag];
    // }
}