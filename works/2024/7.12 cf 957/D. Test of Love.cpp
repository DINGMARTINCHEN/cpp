#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void process(ll n,ll k,ll m,string a)
{
    int pos=0;
    while(pos<n-1)
    {
        cout<<pos<<"----"<<a[pos]<<"    ";
        if(a[pos]=='L')//��ԭľ��
        {
            bool flag1=0;//
            for(ll i=pos+m;i>pos;i--)//
            {
                if(a[i]=='L'&&i-pos<=m)//�ҵ������ԭľ�����������ԭľ
                {
                    pos=i;
                    flag1=1;
                    cout<<pos<<"+++"<<a[pos]<<"   ";
                    break;
                }
            }
            if(flag1==0)//�Ҳ��������ԭľ��������ԭľ�ĵط�
            {
                pos+=m;
                    cout<<pos<<"9999"<<a[pos]<<"   ";
                if(a[pos]=='C')
                {
                    cout<<"NO"<<endl;
                    return ;
                }
            }
        }
        if(a[pos]=='W')//��ˮ��
        {
            k--;
            pos++;
            if(a[pos]=='C')
            {
                cout<<"NO"<<endl;
                return ;
            }
            if(k<0)
            {
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
    return ;
}

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        string a;
        cin>>a;
        a='L'+a+'L';
        n+=2;
        process(n,m,k,a);
    }
}


// 6

// 6 2 0
// LWLLLW

// 6 1 1
// LLWLLLLL

// 6 1 1
// LWLLWL

// 6 2 15
// LWLLCC

// 6 10 0
// CCCCCC

// 6 6 1
// WCCCCW
