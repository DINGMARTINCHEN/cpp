#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int mum=0;
    int rest=0;
    for(int i=0;i<12;i++)
    {
        cin>>a;
        int hundred=0;
        if(rest+300-a<0)//Ǯ������
        {
            cout<<-i-1;
            return 0;
        }
        else if(rest+300-a>=100)//��Ǯ
        {            
            hundred=((300+rest-a)/100)*100;
            mum+=hundred;
            rest+=(300-a-hundred);
        }
        else//����Ǯ
        {
            rest+=(300-a);
        }
        // cout<<"rest-"<<rest<<"-hundred-"<<hundred<<endl;
    }
    cout<<rest+mum*1.2;
}