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
// ���������̥��ѹ��ֵ�������е����ֵ�����һ��������ֵ�ڣ����Ҷ�������ϵͳ�趨����ͱ���̥ѹ����˵�������������������
// �������һ����̥��ѹ��ֵ�������е����ֵ��������ֵ�����ߵ���ϵͳ�趨����ͱ���̥ѹ���򲻽�Ҫ����������Ҫ��������©������̥��׼ȷλ�ã�
// �����������������������̥��ѹ��ֵ�������е����ֵ��������ֵ�����ߵ���ϵͳ�趨����ͱ���̥ѹ���򱨾�Ҫ����������̥��
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