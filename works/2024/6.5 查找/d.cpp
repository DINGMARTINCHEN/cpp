#include <bits/stdc++.h>
  
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=2e6+50;
 
int n,k;
int a[N];
 
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=k;i++) cout<<a[i]<<" ";
}