#include<bits/stdc++.h>
using namespace std;
int aa[31]={10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000};
int main()
{
    int n;
    cin>>n;
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        // for(int j=0;j<31;j++)
        // {
        //     if(a==aa[j])
        //     {
        //         cout<<"YES"<<endl;
        //         flag=1;
        //         break;
        //     }
        // }
        flag=1;
        while(a!=1&&flag)
        {
            flag=0;
            for(int j=30;j>=0;j--)
            {
                if(a%aa[j]==0)
                {
                    a/=aa[j];
                    flag=1;
                    break;
                }
            }
        }
        if(a!=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}