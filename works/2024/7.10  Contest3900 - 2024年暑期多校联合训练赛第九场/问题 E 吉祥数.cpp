#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    // int i=0;
    // while(1)
    // {
    //     ull num;
    //     num=pow(3,i);
    //     i++;
    //     cout<<num<<",";
    //     if(i==22)
    //     {
    //         break;
    //     }
    // }
    ull num[22]={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441,1594323,4782969,14348907,43046721,129140163,387420489,1162261467,3486784401,10460353203,};
    ull a,b;
    // ull num[22];
    cin>>a>>b;
    // for(int i=0;i<=20;i++)
    // {
    //     num[i]=pow(3,i);
    // }
    int start_flag=0,end_flag=0;
    // for(int i=0;i<99;i++)
    // {
    //     if((num[i]<a&&num[i+1]>a)||num[i]==a)
    //     {
    //         start_flag=i;
    //     }
    //     if(num[i]>b)
    //     {
    //         break;
    //     }
    //     end_flag=i;
    // }
    for(int i=0;i<=20;i++)
        if(num[i]>=a){start_flag=i;break;}
    for(int i=20;i>0;i--)
        if(num[i]<=b){end_flag=i;break;}
    cout<<end_flag-start_flag+1<<endl;
    for(int i=start_flag;i<=end_flag;i++)
    {
        cout<<num[i];
        if(i!=end_flag)
        {
            cout<<" ";
        }
    }
}