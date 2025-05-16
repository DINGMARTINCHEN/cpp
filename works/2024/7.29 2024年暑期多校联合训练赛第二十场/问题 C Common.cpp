#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll a[][];
    a[0][0]=1;
    a[i][j]=t1*a[i-1][j]+t2*a[i][j-1]+t3*a[i-1][j-1];
    return 0;
}