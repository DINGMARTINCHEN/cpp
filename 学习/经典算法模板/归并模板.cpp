#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+50;

int ans;
int n;
int a[N],b[N];

void mergesort(int l,int r)
{
    if(l==r)  
		return;
    int mid=(l+r)/2,i=l,j=mid+1,k=l;
    mergesort(l,mid);
    mergesort(mid+1,r);
    while(i<=mid&&j<=r)
    	if(a[i]<=a[j])
    		b[k++]=a[i++];
    	else
    		b[k++]=a[j++],ans+=mid-i+1;
    while(i<=mid)
    	b[k++]=a[i++];
    while(j<=r)
    	b[k++]=a[j++];
    for(int i=l;i<=r;i++)
    	a[i]=b[i];
} 