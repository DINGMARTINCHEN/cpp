// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;

// int f(int a)
// {
//     int sum=1;
//     if(a>1)
//     {
//         for(int i=1;i<=a/2;i++)
//         {
//             sum+=f(i);
//         }
//     }
//     return sum;
// }

// void process(int n)
// {
//     cout<<f(n);
// }

// // int sum=1;

// // void f(int n)
// // {
// //     for(int i=1;i<=n/2;i++)
// //     {
// //         if(i>=1)
// //         {
// //             sum++;
// //             f(i);
// //         }
// //     }
// // }



// signed main() 
// {

//     // int n;
//     // cin>>n;
//     // f(n);
//     // cout<<sum;
//     int n;
//     while(scanf("%lld",&n) != EOF) 
//     {
//         process(n);
//     }
//     return 0;
// }
#include "bits/stdc++.h"
using namespace std;
int a[1001];
int b(int x)
{
    int c=1;
    if(a[x]>0)
    {
        return a[x];
    }
    for(int j=1;j<=x/2;j++)
    {
        c+=b(j);
    }
    a[x]=c;
    return c;
}
int main()
{
    int d;
    // cin>>d;
    // cout<<b(d);
    while(scanf("%d",&d)!=EOF)
    {
        // memset(a,0,sizeof(a));
        // a[1]=1;
        cout<<b(d)<<endl;
    }
    return 0; 
}