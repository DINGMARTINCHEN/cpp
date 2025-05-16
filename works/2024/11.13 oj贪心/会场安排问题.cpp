#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long
using namespace std;
typedef pair <int , int> PII;
const int N=200010;
int T,n,m;
PII a[N];
priority_queue<int,vector<int>,greater<int> >que;
int main()
{
	cin>>n;
	for(int i;i<=n;i++)
	cin>>a[i].first>>a[i].second;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(que.empty()) que.push(a[i].second);
		else{
		    int x=que.top();
		    if(a[i].first>=x)
			{
		    	que.pop();
		    	que.push(a[i].second);
		    
			
			}
			else que.push(a[i].second);	
		}
	}
	cout<<que.size();
	return 0;
 } 
