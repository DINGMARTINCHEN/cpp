#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b,a;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();i++)
    {
        a[i]=toupper(a[i]);
    }
    for(int i=0;i<b.size();i++)
    {
        b[i]=toupper(b[i]);
    }
    a=' '+a+' ';
    b=' '+b+' ';
    // int c=b.find(a);
    // cout<<a<<"---"<<b<<"----"<<c<<endl;
    // if(c==-1)
    // {
    //     cout<<c;
    //     return 0;
    // }
    // int sum=0;
    // while(b.find(a)!=-1)
    // {
    //     sum++;
    // }
    if (b.find(a)==string::npos){
        cout<<-1<<endl;
    }
    //����ҵõ�
    else {
        int alpha=b.find(a);
        int beta=b.find(a),s=0;//��������ʼ��Ϊ0
        while (beta!=string::npos){
            ++s;//������
            beta=b.find(a,beta+1);
        }
        cout<<s<<" "<<alpha<<endl;//�����һ�����ܹ��м���
    }
    return 0;

    // cout<<sum<<" "<<c;
}