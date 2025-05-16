#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    // cin>>n>>pre;
    int times=0;//偶--美元   奇--马克
    double sum=100;
    // if(pre>100)
    // {
    //     sum=pre;
    //     times++;
    // }
    for(int i=0;i<2;i++)
    {
        double b;
        if(temp>100||temp>b)//转化不亏
        {
            if(times%2==0)//美元-->马克
            {
                sum*=(temp);
            }
            times++;
        }
        temp=b;  
    }
    double dollar=100.0,mark=0.0;
    int n;
    cin>>n;
    double pre=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pre=dollar;
        dollar=max(dollar,(mark/a*100));
        mark=max(mark,(pre/100*a));
    }
    printf("%.2lf",dollar);dollar;
}
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// #include<cstring>
// #include<cstdlib>
// #include<algorithm>
// #include<iomanip>
// using namespace std;
// int main(){
//     double dp1,dp2,tmp;//由于dp1的值变化后,无法计算dp2,所以要用临时变量记录未作处理前的dp1
//     int n,i,a;
//     cin>>n;
//     dp1=100.0;//初始有100美元
//     dp2=0;
//     for(i=1;i<=n;i++){
//         cin>>a;
//         tmp=dp1;
//         dp1=max(dp1,(dp2/a*100));//将马克换成美元进行比较
//         dp2=max(dp2,(tmp/100*a));//将美元换成马克进行比较
//     }
//     printf("%.2lf",dp1);//最后输出美元
//     return 0;
// }