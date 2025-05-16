#include <stdio.h>
#include <math.h>
char k[1005];
bool sushu(long long a)
{
    if(a<3)
    return false;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        return false;
    }
    return true;
}
int main()
{
	int l,n,sum=0,i,s,shi=0;
	scanf("%d%d",&l,&n);
	scanf("%s",k);
	for(i=0;i<=l-n;i++){		
		sum=0;
		for(s=i;s<i+n;s++){     
			sum=sum*10+(k[s]-'0');  
		} 
		if(sushu(sum)==true){ 		
			shi=1;				
			for(s=i;s<i+n;s++){
				printf("%c",k[s]);
			}
			printf("\n");
			break;
		}
	}
	if(shi==0) printf("404\n");		
	return 0;
}