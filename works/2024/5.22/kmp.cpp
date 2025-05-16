#include <bits/stdc++.h>
  
using namespace std;
long long ne[9999999];
string s1,s2;
void getnextt(string s)
{
    long long k=-1,j=0;
    ne[0]=-1;
    while(j<s.size())
    {
        if(k==-1||s[j]==s[k])
        {
            j++;
            k++;
            if(s[j]!=s[k])ne[j]=k;
            else ne[j]=ne[k];
        }
        else k=ne[k];
    }
}
  
int kmp(string s1,string s2)
{
    getnextt(s2);
    int i=0,j=0;
    int ans=0;
    int len1=s1.size(),len2=s2.size();
    while(i<len1)
    {
        if(j==-1||s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else j=ne[j];
          
        if(j==len2) ans++;
    }
    return ans;
}
 
 int process(string a,string b)
{
    int sum=0;
    int pos=0;
    while(1)
    {
        int c=a.find(b,pos);
        if(c!=-1)
        {
            pos=c+1;
            sum++;
            break;
        }
        else{
            break;
        }
        if(pos>=b.size()-a.size()-1)
        {
            break;
        }
    }
}
 
int main()
{
    cin>>s1>>s2;
    long long ans=kmp(s1,s2);
    process(s1,s2);
    cout<<ans;
} 