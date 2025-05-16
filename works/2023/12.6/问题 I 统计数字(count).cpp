// #include<bits/stdc++.h>
// using namespace std;
// long long a[99999]={0};
// int main()
// {
//     long long n,b;
//     long long max=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>b;
//         a[b]++;
//         if(b>max)
//         {
//             max=b;
//         }
//     }
//     for(long long int i=0;i<=max;i++)
//     {
//         if(a[i]!=0)
//         {
//             cout<<i<<" "<<a[i]<<endl;
//         }
//     }
// }
#include <iostream>
#include <algorithm>
using namespace std;
int num[200005],x[200005];
int main() 
{
    int n,i,j,k;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin >> num[i];
    }
    sort(num,num+n);//将自然数从小到大排序
    
    for(i = 0;i < n;i++)
    {
        //若这个数与前一个数相等，那么这个数出现的次数为前一个数出现的次数加1
        if(num[i]==num[i-1])
        {
            x[i] = x[i-1] + 1;
        }
        //否则该数出现的次数为1
        else
        {
            x[i] = 1;
        }
    }
    for(i = 0;i < n;i++)
    {
        if(num[i]!=num[i+1])
        //输出相同的数中的最后一个数，这个数的次数为最终出现次数
        cout << num[i] << " " << x[i] << endl;
    }
	return 0;
}