#include<stdio.h>
#include <algorithm>
#include<iostream>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<queue>
#include<deque>
#include<ctype.h>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<algorithm>
#define ll long long
#define INF 0x3f3f3f3f
using namespace std;
 
bool a[10005];
int main()
{
    memset(a,0,sizeof(a));
    int n,k;
    scanf("%d %d",&n,&k);
 
    int m=k,ans=0;
    for(int i=0;i<n;i++)
    {
        int b;
        scanf("%d",&b);
 
        if(a[b]==0)
        {
            a[b]=1;
            m--;
 
        }
        if(m==0)
        {
            ans++;
            memset(a,0,sizeof(a));
            m=k;
        }
    }
 
    printf("%d\n",++ans);
 
    return 0;
}
