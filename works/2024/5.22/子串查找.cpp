#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int sum=0;
    int pos=0;
    while(1)
    {
        int c=a.find(b,pos);
        if(c!=-1)
        {
            pos=c+1;
            sum++;
        }
        else{
            break;
        }
        if(pos>=b.size()-a.size()-1)
        {
            break;
        }
    }
    cout<<sum;
}