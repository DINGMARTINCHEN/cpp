#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

// int f(ll n) 
// {
//     // ll n;
//     // cin>>n;
//     ll sum=0;
//     for(ll i=1;i<=n;i++)
//     {
//         for(ll j=1;j<=n;j++)
//         {
//             ll centre=(n+1)/2;
//             ll dis=abs(i-centre)+j-1;
//             sum+=(2*n-dis);
//         }
//     }
//     cout<<sum<<",";
//     return 0;
// }

int main()
{
    ll n;
    cin>>n;
    ll s1_centre=2*n;
    ll s1_1=s1_centre-(n-1)/2;
    ll s2_centre=s1_centre-n+1;
    ll s2_1=s2_centre-(n-1)/2;
    ll s1=(s1_centre+s1_1)*(n+1)/2-s1_centre;
    ll s2=(s2_centre+s2_1)*(n+1)/2-s2_centre;
    ll sum=(s1+s2)*n/2;
    cout<<sum;
}
// 8+9+10+9+8=44
// 11+12+13+14+13+12+11=86  
// 7*7*2-8=90                     n*n*2-(n+1)
// 7+8+9+8+7=39
// 6+7 +8+7+6=34
// 5 +6 + 7+ 6 +5=29
// 4 +5+  6+ 5 +4=24

// 3   39
// 5 +6 +5=16
// 4 +5 +4=13
// 3 +4 +3=10
// X =	19.25*4=77/4
// Y =	-88.5*4=-354/4
// Z =	131.25*4=525/4

