#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,s1,h2,m2,s2;
    cin>>h1>>m1>>s1>>h2>>m2>>s2;
    long long all=s1+s2+(m1+m2+(h1+h2)*60)*60;
    int s,m,h;
    s=all%60;
    m=((all-s)/60)%60;
    h=(all/(60*60))%24;
    cout << setw(2) << setfill('0') << h <<' '<<setw(2) << setfill('0') << m << ' ' << setw(2) << setfill('0') <<s;
}