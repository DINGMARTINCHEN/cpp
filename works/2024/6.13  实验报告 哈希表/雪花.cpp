#include<bits/stdc++.h>

using namespace std;

const int N=19373;
const int M=100;
int a[6];
int l[N];
int Hash[N][M][6];
 
bool Judge(int *a, int *b)  //判断雪花形状是否相同（即可以将对应的棱角重合）
{  
    int i,k;  
    for(i=0;i<6;++i)
	{  
        //顺时针  
        for(k = 0;k<6;++k)
		{  
            if(b[k]!=a[(i+k)%6])  
                break;  
        }  
        if(k>=6)  
            return true;  
        //逆时针  
        for(k=0;k<6;++k)
		{  
            if(b[k]!=a[(i+6-k)%6])  
                break;  
        }  
        if(k>=6)  
            return true;  
    }  
    return false;  
}  
 
int main()
{
	int t,k;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		scanf("%d",&n);
		memset(l,0,sizeof(l));
		for(i=0;i<n;i++)
		{
			int sum=0;
			for(j=0;j<6;j++)
			{
				scanf("%d",&a[j]);		
				sum+=a[j];
			}
			int k;
			int index=sum%N;
			while(l[index]>=M)
			{
				index=(index+1)%N;
			}
			for(k=0;k<6;k++)
			{
				Hash[index][l[index]][k]=a[k];				
			}
			l[index]++;
		}
		bool flag=false;
		for(i=0;i<N;i++)
		{
			for(j=0;j<l[i]-1;j++)
			{
				for(k=j+1;k<l[i];k++)
				{
					flag=Judge(Hash[i][j],Hash[i][k]);
					if(flag)
					{
						printf("Twin snowflakes found.\n");
						break;
					}
				}
				if(flag)
				{
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(!flag)
		{
			printf("No two snowflakes are alike.\n");
		}
	}
	return 0;
}