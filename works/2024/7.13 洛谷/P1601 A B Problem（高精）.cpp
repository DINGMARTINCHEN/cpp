#include <iostream>
#include <cstring>
using namespace std;
int A[100000],B[100000],C[10000000],temp=0,lena,lenb,lenc;
char a[1000000],b[10000000];//��Ϊ����̫������������main�������档 
int main(){
	cin>>a;
	cin>>b;
	lena=strlen(a) ;//���㳤�� 
	lenb=strlen(b);
	for(int i=0;i<lena;++i)
	A[i]=a[lena-1-i]-'0';\
	for(int i=0;i<lenb;++i)
	B[i]=b[lenb-1-i]-'0';
	lenc=lena>lenb?lena:lenb;//�õ��ϳ���һ����
	for(int i=0;i<lenc;++i) 
	{
		C[i]=A[i]+B[i]+temp;
		temp=C[i]/10;
		C[i]%=10;
	}
	if(temp!=0)//������Ƿ�tempΪ0�������з��ദ�� 
	{
	C[lenc]=temp;
	for(int i=lenc;i>=0;--i)
	cout<<C[i];
	return 0;
	}
	for(int i=lenc-1;i>=0;--i)//�������λ c
	cout<<C[i];
	return 0;
}
