#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans[10050];
/*ans ����洢�����Ѿ����ŵĻ�Ľ���ʱ��
���ĳ��ȱ�ʾ��ǰ�Ѿ�ʹ�õĻ᳡������*/

struct act
{
    int l,r;
}a[10050];

bool cmp(act b,act c)
{
    if(b.l!=c.l)
    {
        return b.l<c.l;
    }
    return b.r<c.r;
}

signed main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].l>>a[i].r;
    }
    sort(a,a+n,cmp);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        bool flag=0;
        for(int j=0;j<cnt;j++)
        {
            if(ans[j]<=a[i].l)
            {
                ans[j]=a[i].r;
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            ans[cnt++]=a[i].r;
        }
    }
    cout<<cnt;
    return 0;
}