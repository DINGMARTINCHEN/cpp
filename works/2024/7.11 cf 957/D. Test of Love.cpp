#include<bits/stdc++.h>
using namespace std;
string a;

// int jump(int flag,string a,int n,int m,int k)
// {
//     for(long long i=flag+1;i<n;i++)
//     {
//         if(a[i]=='L'&&i-flag<m)
//         {
//             flag=i;
//         }
//     }
//     return flag;
// }

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long n,m,k;
        cin>>n>>m>>k;
        cin>>a;
        bool f=0;
        int flag=0;
        while(flag!=n)
        {
            if(f==1)
            {
                break;
            }
            cout<<flag<<"----";
            if((a[flag]=='L'||flag==0)&&m!=0)//�ڰ��ϻ�ԭľ��   �ж��ܲ�����
            {
                // flag=jump(flag,a,n,m,k);
                for(long long i=flag+1;i<n;i++)
                {
                    if(a[i]=='L'&&m!=0)//����
                    {
                        if(i-flag<=m)
                        {
                            flag=i;//���������ԭľ��
cout<<flag<<"000000";
                        }
                        else if(n-flag<m)//��������
                        {
                            f=1;
                            break;
cout<<flag<<"111111";
                        }
                        else//��������ԭľ�ϣ�������
                        {
                            flag+=m;
                            break;
cout<<flag<<"22222";
                        }
                    }
                }
            }
            else//swim
            {
                k--;
                flag++;
cout<<flag<<"333333";
            }
            if(f==1)
            {
                break;
            }
            if(a[flag]=='C')
            {
                cout<<"NO"<<endl;
                f=1;
                break;
            }
            if(k<0)
            {
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES"<<endl;
    }
}
// 6
// 6 2 0
// LWLLLW


// 6 1 1
// LWLLLL


// 6 1 1
// LWLLWL


// 6 2 15
// LWLLCC
// 6 10 0
// CCCCCC
// 6 6 1
// WCCCCW


// 1��ֱ������ԭľ����������
// 2��ֱ������ˮ������Ӿ
