#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int b,c;
            cin>>b>>c;
            if(b<130)
            {
                cout<<"duo chi yu! ";
            }
            if(b==130)
            {
                cout<<"wan mei! ";
            }
            if(b>130)
            {
                cout<<"ni li hai! ";
            }
            if(c<27)
            {
                cout<<"duo chi rou!";
            }
            if(c>27)
            {
                cout<<"shao chi rou!";
            }
            if(c==27)
            {
                cout<<"wan mei!";
            }
        }
        if(a==0)
        {
            int b,c;
            cin>>b>>c;
            if(b<129)
            {
                cout<<"duo chi yu! ";
            }
            if(b==129)
            {
                cout<<"wan mei! ";
            }
            if(b>129)
            {
                cout<<"ni li hai! ";
            }
            if(c<25)
            {
                cout<<"duo chi rou!";
            }
            if(c>25)
            {
                cout<<"shao chi rou!";
            }
            if(c==25)
            {
                cout<<"wan mei!";
            }
        }
        if(i<n-1)
        {
            cout<<endl;
        }
    }
}