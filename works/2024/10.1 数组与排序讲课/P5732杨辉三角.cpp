// https://www.luogu.com.cn/problem/P5732

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;//1-20
    long long a[25][25];
    memset(a,0,sizeof(a));//������a�����е�Ԫ��Ϊ0
    cin>>n;
    a[1][1]=1;//�±��1��ʼ
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=i;j++)
        {
    		a[i][j]+=a[i-1][j-1]+a[i-1][j];
            //�������Ҳ�У�����ʱ��
		}
	}
    // a[5][2]=a[4][1]+a[4][2]
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=i;j++)
        {
    		cout<<a[i][j]<<" ";
		}
        cout<<endl;
	}
}