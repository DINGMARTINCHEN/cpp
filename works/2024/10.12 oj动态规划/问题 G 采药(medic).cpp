#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[1005][1005];
int w[1005],v[1005];

signed main() 
{
    int t,n;
    cin>>t>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=t;j>=0;j--)
        {
            if(j>=w[i])
            {// �����ǰ���������㹻װ����Ʒ i�������װ����Ʒ i �Ͳ�װ����Ʒ i ������ֵ
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
            }
            else
            {// �����ǰ��������������װ����Ʒ i����װ����Ʒ i
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][t];
    return 0;
}
/*
int main()
{
}

signed main() 
{
    int t,n;
    cin>>t>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=t;j>=0;j--)
        {
            if(j>=w[i])
            {
                // �����ǰ���������㹻װ����Ʒ i�������װ����Ʒ i �Ͳ�װ����Ʒ i ������ֵ
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
            }
            else
            {
                // �����ǰ��������������װ����Ʒ i����װ����Ʒ i
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][t];
    return 0;
}


 */