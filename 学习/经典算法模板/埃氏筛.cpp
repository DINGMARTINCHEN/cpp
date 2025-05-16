//����ɸ������ɸ 
/*
һ������ɸ�Ķ���
����һ������n�����[1,n]֮�����������(����)(m~n֮������������޸ļ���)��
����������Ϊ����ɸ(������ɸѡ����)��
��������ɸ��(Eratosthenesɸ��)��ŷ��ɸ�ԣ�
����ɸ���ֽ���Eratosthenesɸ����һ���������ɸ������ɸ��˼���ǣ�
���е�����x�ı���2x��3x��...������������
������ǿ��Դ�2��ʼ��С����ɨ��ÿ����x������x�ı���2x....���Ϊ������
��ɨ�赽ĳ����yû�б����Ϊ��������ôy������������
Eratosthenesɸ���ĸ��Ӷ�ΪO(NloglogN)��Ч�ʷǳ��ӽ����ԡ�
����ΪEratosthenesɸ��ģ�壺
*/
/*
#include<iostream>//����ɸ O(nloglogn)
#include<cstdio>
#include<cstring>
using namespace std;
const int N=1e6+5;
int prime[N],p[N],tot;//primed�洢������pΪ������ǣ�tot�������� 
inline int era(int n){
	for(int i=1;i<=n;i++) p[i]=1;//��ʼ��Ƕ������� 
	memset(prime,0,sizeof(prime));//����������0 
	p[1]=p[0]=0;//1��0��Ǻ����������0�±� 
	for(int i=1;i<=n;i++){
		if(!p[i]) continue;//���Ϊ0��Ϊ���� 
		prime[++tot]=i;//prime[]�洢��[1,n]����������
		for(int j=i*2;j<=n;j+=i) p[j]=0;//ɸ��i�ı���j����:1*j������ 
	}
	return tot;
}
int main()
{
	int n;
	cin>>n;
	tot=era(n);
	for(int i=1;i<=tot;i++)
		printf("%d ",prime[i]);
	return 0;
}
*/

/*
��������ɸ��
����ɸ������:ĳЩ�������ظ���ǣ���30��Ϊ2 3 5�ظ���ǣ������˸��Ӷȡ�
���ÿ��������Ψһ�ر��һ�ξͺ��ˡ�
����ɸ��ͨ��:�Ӵ�С�����۳������ӵķ�����Ǻ�����
��30�ı�Ƿ�ʽΪ��30=15*2=10*3=6*5=5*3*2:
������˼·�ǣ������������ӿ�ʼ��Ǻ�������ֻ������������������ĺ�����
�����ĺ������ٱ�ǣ�����ع�ܽ���˰���ɸ���ظ�������⡣
ʵ�ַ�ʽΪ��
1.����ɨ��[2,n]��ÿһ����a
2.��û�б����Ϊ������˵��a����������ʱ��������
3.����ɨ��a*prime[j]<=n��ÿһ�����������a*prime[j]Ϊ������
�ұ�֤prime[j]Ϊa*prime[j]����С������(��ֻ��ע�����С�ĺ�������������)��
��ÿ������ֻ�ᱻ������С������ɸһ�Σ���������ɸ�ĸ��Ӷ�ΪO(N)��
����Ϊ����ɸ����ģ�壺
*/ 
//����ɸ-����ɸ 
#include<iostream>//����ɸ+����ɸO(n)
#include<cstdio>
#include<cstring>
using namespace std;
const int N=1e6+5;
int p[N],prime[N],tot;//p��ʼΪ0����ע������ 
inline int era_line(int n){
	int tot=0;
	for(int i=2;i<=n;i++){
		if(!p[i]) prime[++tot]=i;//�洢���� 
		for(int j=1;j<=tot,i*prime[j]<=n;j++){
			p[i*prime[j]]=1;//��Ǻ���,��ʱprime[j]�Ǻ���i*prime[j]����С������
			if(i%prime[j]==0) break;//ֻ��ע����prime[j]����ĺ�����ȷ��ÿ����ֻ���һ�� 
			//6��9:��i=3ʱ��j=1,prime[1]=2ʱ�����6��j=2�����9�������� 
		}//�ܽ᣺ÿ���һ������ʱ������ֻ��ע��:i*prime[tot]�ͽ����� 
	}
	return tot;
}
int main()
{
	int n;
	cin>>n;
	tot=era_line(n);
	for(int i=1;i<=tot;i++)
		printf("%d ",prime[i]);
	return 0;
}

