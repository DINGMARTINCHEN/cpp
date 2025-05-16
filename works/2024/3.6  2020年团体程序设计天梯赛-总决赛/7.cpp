#include<bits/stdc++.h>
using namespace std;
void judge(string a)
{
    int sum1=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[a.size()-i-1]=='n')
        {
            sum1+=pow(2,i);
        } 
    }
    cout<<sum1+1<<endl;
}
int main()
{
    int n,m;
    cin>>m>>n;
    int b[n];
    string a[n];   
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        judge(a[i]);
    }
}