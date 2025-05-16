#include <stdio.h>
int main()
{
    int n,i,j,t,a,b;
    int arr[100];     
    int sum[100][100],dp[100][100];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&arr[i]);         //储存初始的每个位置的石头数量
    }
    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            if (i==j) {
                sum[i][j]=arr[i];     
            }
            else
                sum[i][j]=sum[i][j-1]+arr[j];
        }  
    }                                //计算从i到j的石头总和
    for (i=0; i<n; i++) {
        dp[i][i]=0;
        if (i<n-1) {
            dp[i][i+1]=arr[i]+arr[i+1];  
        }
    }                     //把同一堆石头和相邻两堆石头合并的值计算
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
    }            //按照表格从副对角线往依次计算的方法，最后求出右上角的值
    printf("%d",dp[0][n-1]);
    return 0;
}
