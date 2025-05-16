#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n)
{    
    int r;    
    if (m<n) 
    {        
        swap(m,n);   
    }    
    while((m%n)!=0)   
    {        
        r=m%n;        
        m=n;        
        n=r;    
    }   
    return n;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        int flag=0;
        cin>>a;
        int max=0;
        for(int j=a-1;j;j--)
        {
            if(max<gcd(j,a)+j)
            {
                max=gcd(j,a)+j;
                flag=j;
            }
        }
        cout<<flag<<endl;
    }
}