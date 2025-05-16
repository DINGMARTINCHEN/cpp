#include<iostream>
using namespace std;
struct engage
{
    string name;
    int age;
    string gender;
    int sum=0;
};
int main()
{
    int n,x;
    cin>>n>>x;
    engage p[999];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].name>>p[i].age>>p[i].gender;
    }
    for(int i=0;i<x;i++)
    {
        string z;
        cin>>z;
        for(int j=0;j<n;j++)
        {
            if(p[j].name==z)
            {
                p[i].sum++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(p[i].sum<p[j].sum)
            {
                swap(p[i],p[j]);
            }
        }
    }
    for(int i=0;i<=n*0.8;i++)
    {
        cout<<p[i].name<<" "<<p[i].sum<<endl;
    }
}