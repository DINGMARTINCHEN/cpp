#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e4+5;

signed main()
{
    int n;
    cin>>n;
    int px[n+5],py[n+5];//ԭ����
    int x[n+5],y[n+5];//���������
    for(int i=0;i<n;i++)
    {
        cin>>px[i]>>py[i];
        x[i]=px[i];
        y[i]=py[i];
    }
    sort(x,x+n);//����
    sort(y,y+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(x[n/2]-px[i])+abs(y[n/2]-py[i]);//��ѡ�ص����ÿ��С���ѵ�x�����������м�ֵ��y�����������м�ֵ����ָ�������
    }
    cout<<ans;
}
