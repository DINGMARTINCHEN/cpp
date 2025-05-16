#include<stdio.h>
int main()
{
    char num[200001];//i为总长    j为第一个0位置     k 
    int a,i=0,j,k,sum=0,num0=0,sum1=0;
    while(~scanf("%s",num))
    {
        for(i=0;num[i]!='\0';i++)
        {
            if(num0==0&&num[i]=='0')
            {
                j=i;
                num0++;
            }
        }
        if(num0==0)
        {
            printf("%d",i);
        }
        for(k=0;k<j;k++)
        {
            num[i+k]=num[k];
        }
        for(k=j;k<i+j;k++)
        {
            if(num[k]=='1')
            {
                sum+=1;
            }
            else
            {
                if(sum>sum1)
                {
                    sum1=sum;
                }
                sum=0;
            }
        }
        printf("%d\n",sum1);
        sum=0;
    }
    return 0;
}