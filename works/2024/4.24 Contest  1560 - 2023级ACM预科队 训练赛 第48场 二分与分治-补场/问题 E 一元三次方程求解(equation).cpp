#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    double i,j,k;
    int sum=0;
    cin>>a>>b>>c>>d;
    for(i=-100;i<=100;i+=0.001)
    {
        for(j=-100;j<=100;j+=0.001)
        {
            for(k=-100;k<=100;k+=0.001)
            {
                cout<<sum<<endl;
                sum++;
                if(a*i*i*i+b*j*j+c*k+d==0)
                {
                    printf("%.2f %.2f %.2f\n",i,j,k);
                }
            }
        }
    }
    return 0;
}

/*
������
��ͷ��
��ͷ��ͷ����ͷ

*/