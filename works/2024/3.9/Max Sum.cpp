#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int sum=0;
        int max=-9999,temp=1;
        int end=0,start=0;
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            sum+=a;
            if(max<sum)
            {
                max=sum;
                end=j+1;
                start=temp;
            }
            if (sum < 0)  
            {  
                sum = 0;
                temp = j+2;  
            }  
        }
        cout<<"Case "<<i+1<<":"<<endl;
        cout<<max<<" "<<start<<" "<<end<<endl;
        if(i!=t-1)
        {
            cout<<endl;
        }
    }
}