#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    // cin>>n>>pre;
    int times=0;//ż--��Ԫ   ��--���
    double sum=100;
    // if(pre>100)
    // {
    //     sum=pre;
    //     times++;
    // }
    for(int i=0;i<2;i++)
    {
        double b;
        if(temp>100||temp>b)//ת������
        {
            if(times%2==0)//��Ԫ-->���
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
//     double dp1,dp2,tmp;//����dp1��ֵ�仯��,�޷�����dp2,����Ҫ����ʱ������¼δ������ǰ��dp1
//     int n,i,a;
//     cin>>n;
//     dp1=100.0;//��ʼ��100��Ԫ
//     dp2=0;
//     for(i=1;i<=n;i++){
//         cin>>a;
//         tmp=dp1;
//         dp1=max(dp1,(dp2/a*100));//����˻�����Ԫ���бȽ�
//         dp2=max(dp2,(tmp/100*a));//����Ԫ������˽��бȽ�
//     }
//     printf("%.2lf",dp1);//��������Ԫ
//     return 0;
// }