#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    int hen=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char a;
            cin>>a;
            if(a=='x')
            {
                sum++;
            }
        }
        if(hen==0)
        {
            hen=sum;
        }
    }
    int shu=sum/hen;
    // cout<<hen<<" "<<shu;
    int c=__gcd(hen,shu);
    for(int i=0;i<shu/c;i++)
    {
        for(int j=0;j<hen/c;j++)
        {
            cout<<'x';
        }
        cout<<endl;
    }
    return 0;
}
// .......
// ..xxxx.
// ..xxxx.
// ..xxxx.
// ..xxxx.
// ..xxxx.
// ..xxxx.
// .......
/*
��3        21 ȥҽԺ��Ͱ||�籣��
��4        22 ����
��5        23 ��Ѫ���ͼ�
��6        24 ȥҽԺ���
��7        25 ��
*/