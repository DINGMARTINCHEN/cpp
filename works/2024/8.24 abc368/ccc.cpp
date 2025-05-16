#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=i;
        int sum=0,t=1;
        while(a>0)
        {
            if(t%3==0)
            {
                a-=3;
            }
            else
            {
                a--;
            }
            sum++;
            t++;
        }
        fstream f;
	f.open("data1.txt",ios::out|ios::app);
	//输入你想写入的内容 
	f<<i<<"   "<<sum<<";"<<endl;
    }
    return 0;
}