#include <stdio.h>
int main()
{
    int n,i,j,t,a,b;
    int arr[100];     
    int sum[100][100],dp[100][100];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&arr[i]);         //�����ʼ��ÿ��λ�õ�ʯͷ����
    }
    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            if (i==j) {
                sum[i][j]=arr[i];     
            }
            else
                sum[i][j]=sum[i][j-1]+arr[j];
        }  
    }                                //�����i��j��ʯͷ�ܺ�
    for (i=0; i<n; i++) {
        dp[i][i]=0;
        if (i<n-1) {
            dp[i][i+1]=arr[i]+arr[i+1];  
        }
    }                     //��ͬһ��ʯͷ����������ʯͷ�ϲ���ֵ����
    for (t=2; t<=n; t++) {
        for (i=0; i<n-t; i++) {
            a=dp[i][i+t-1]+sum[i][i+t];
            b=dp[i][i]+dp[i+1][i+t]+sum[i][i+t];
            for (j=1; j<t-1; j++) {
                if (b>dp[i][i+j]+dp[i+j+1][i+t]+sum[i][i+t]) {
                    b=dp[i][i+j]+dp[i+j+1][i+t]+sum[i][i+t];
                }
            }
            if (a<=b) {
                dp[i][i+t]=a;
            }
            else
                dp[i][i+t]=b;
        }
    }            //���ձ��Ӹ��Խ��������μ���ķ��������������Ͻǵ�ֵ
    printf("%d",dp[0][n-1]);
    return 0;
}
