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
    sort(num,num+n);//����Ȼ����С��������
    
    for(i = 0;i < n;i++)
    {
        //���������ǰһ������ȣ���ô��������ֵĴ���Ϊǰһ�������ֵĴ�����1
        if(num[i]==num[i-1])
        {
            x[i] = x[i-1] + 1;
        }
        //����������ֵĴ���Ϊ1
        else
        {
            x[i] = 1;
        }
    }
    for(i = 0;i < n;i++)
    {
        if(num[i]!=num[i+1])
        //�����ͬ�����е����һ������������Ĵ���Ϊ���ճ��ִ���
        cout << num[i] << " " << x[i] << endl;
    }
	return 0;
}