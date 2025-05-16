
 //：随机排列的数组1-N满足： a[i]*a[j]<=i*j+2025 
 //  i，    j   序号   1 2 3 4
 //  a[i]，a[j] 数组   1 2 3 4
 //   a[i]*a[j]<=i*j+2025 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tmp=0; 
	for(int i=2025;i>=1;i--)//i是数组，求出来的是位置 
	{
//		cout<<i<<"    "<<fixed<<setprecision(20)<<sqrt(i*i-2025)<<"     ceil"<<ceil(sqrt(i*i-2025))<<endl;
        cout<<i<<"        "<<2025-ceil(sqrt(i*i-2025))-tmp<<"   "<<ceil(sqrt(i*i-2025))<<endl;
        tmp++;
	}
	cout<<1013*1013<<" "<<1012*1012<<endl;
	int ans=1;
	for(int i=1;i<=45;i++)
	{
		ans*=i;
	}
	cout<<ans%1000000007;
 } 
