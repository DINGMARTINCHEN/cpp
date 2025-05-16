#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],lowwarn,gap;
    int max=0,min=9999,minflag;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[i]<min)
        {
            min=a[i];
            minflag=i;
        }
        else{
            max=a[i];
        }
    }
    cin>>lowwarn>>gap;
// 如果所有轮胎的压力值与它们中的最大值误差在一个给定阈值内，并且都不低于系统设定的最低报警胎压，则说明情况正常，不报警；
// 如果存在一个轮胎的压力值与它们中的最大值误差超过了阈值，或者低于系统设定的最低报警胎压，则不仅要报警，而且要给出可能漏气的轮胎的准确位置；
// 如果存在两个或两个以上轮胎的压力值与它们中的最大值误差超过了阈值，或者低于系统设定的最低报警胎压，则报警要求检查所有轮胎。
    if(min>=lowwarn&&max-min<=gap)
    {
        cout<<"Normal";
        return 0;
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]<=lowwarn||max-a[i]>=gap)
        {
            sum++;
        }
    }
    if(sum==1)
    {
        cout<<"Warning: please check #"<<minflag+1<<"!";
    }
    else{
        cout<<"Warning: please check all the tires!";
    }
}