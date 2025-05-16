#include<bits/stdc++.h>
using namespace std;
char s[257];
int main()
{   int k,c=0,i;
    cin>>s>>k;
    while(k--)
    {   for(i=c;s[i]&&s[i]<=s[i+1];++i);
        while(s[i]) s[i]=s[i+1],++i;
        while(s[c]=='0') ++c;
    }
    if(s[c]) cout<<s+c;
    else cout<<"0";
    return 0;
}

