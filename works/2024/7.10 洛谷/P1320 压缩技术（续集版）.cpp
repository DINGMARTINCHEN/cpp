// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char a,b;
//     cin>>b;
//     int sum=0;
//     int aa[99999];
//     int k=0;
//     while(cin>>a)
//     {
//         if(a==b)
//         {
//             sum++;
//         }
//         else
//         {
//             aa[k]=sum;
//             k++;
//             sum=0;
//         }
//         b=a;
//     }
//     cout<<sqrt(k)<<endl;
//     for(int i=0;i<sqrt(k);i++)
//     {
//         cout<<aa[i]<<" ";
//     }

// }
#include <bits/stdc++.h>//luogu福利
using namespace std;

char a,b='0';//注意了：一定是赋值为'0'；
int n,ans[1000001],zz=1;//zz是指针的意思，我用来存储第几位

int main()
{
 while(cin>>a)
 {
 	n++;
 	if(a==b)
 		ans[zz]++;
 	else
 		ans[++zz]++,//等效于：zz=zz+1;ans[zz]++
 		b=a;//上面用 , 不用 ; 的原因是我没有打{ }
 }
 cout<<sqrt(n);//平方根，用到了<cmath>或者是<math.h>，也就是一行的行数
 for(int i=1 ; i<=zz ; i++)
     cout<<" "<<ans[i];
}