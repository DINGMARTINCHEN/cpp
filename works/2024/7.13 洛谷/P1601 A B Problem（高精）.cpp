#include <iostream>
#include <cstring>
using namespace std;
int A[100000],B[100000],C[10000000],temp=0,lena,lenb,lenc;
char a[1000000],b[10000000];//因为数组太大尽量都定义在main函数外面。 
int main(){
	cin>>a;
	cin>>b;
	lena=strlen(a) ;//计算长度 
	lenb=strlen(b);
	for(int i=0;i<lena;++i)
	A[i]=a[lena-1-i]-'0';\
	for(int i=0;i<lenb;++i)
	B[i]=b[lenb-1-i]-'0';
	lenc=lena>lenb?lena:lenb;//得到较长的一个数
	for(int i=0;i<lenc;++i) 
	{
		C[i]=A[i]+B[i]+temp;
		temp=C[i]/10;
		C[i]%=10;
	}
	if(temp!=0)//看最后是否temp为0。并进行分类处理 
	{
	C[lenc]=temp;
	for(int i=lenc;i>=0;--i)
	cout<<C[i];
	return 0;
	}
	for(int i=lenc-1;i>=0;--i)//先输出高位 c
	cout<<C[i];
	return 0;
}
