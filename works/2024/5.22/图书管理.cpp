#include<bits/stdc++.h>
using namespace std;

char op[10];
char book[400];
int n;
const int mod1=1e6+3,mod2=1e6+9,p1=71,p2=79,N=30005;
int tot=0,nxt[N],eend[N],poi[mod1+5];

void insert(int x,int y)
{
	nxt[++tot]=poi[x];
	poi[x]=tot;
	eend[tot]=y;	
}
void find(int x,int y)
{
	for( register int i=poi[x];i;i=nxt[i])
		{
			if(eend[i]==y)
				{
					printf("yes\n");
					return;
				}
			
		}
	printf("no\n");
	return;
}

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%s",op);
		gets(book);
		int l=strlen(book);
		int s1=0,s2=0;
		for(register int i=0 ;i<l;i++){
			
			s1=(s1*p1+book[i])%mod1;

			s2=(s2*p2+book[i])%mod2; 
		}
		if(op[0]=='a')
		{	
			insert(s1,s2);				
		}
		else
		{
			find(s1,s2);	
		}
	}		
	return 0;
}
