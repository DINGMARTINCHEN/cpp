//ACwing����е�831��
#include <bits/stdc++.h>

using namespace std;

const int N=100010,M=1000010;

int n, m;
int ne[N];
string s,p;

void get_Next(string s)		//����������ַ���s����Ԥ����õ�next����
{
	int j=0;
	ne[0]=0;	//��ʼ��
	for(int i=1;i<s.size();i++)
	{	//iָ��ָ����Ǻ�׺ĩβ��jָ��ָ�����ǰ׺ĩβ
		while(j>0 && s[i]!=s[j])	j=ne[j-1];	//ǰ��׺����ͬ��ȥ��jǰһλ������ǰ��׺
		if(s[i]==s[j])	j++;	//ǰ��׺��ͬ��jָ�����
		ne[i]=j;	//����next����
	}
}

int main()
{
	cin>>n>>p>>m>>s;
	get_Next(p);
	for(int i=0,j=0;i<m;i++)
	{	
		while (j>0 && s[i]!=p[j])	j=ne[j-1];
		if(s[i]==p[j])	j++;
		if(j==n)
		{
			cout<<i-n+1<<" ";
			j=ne[j-1];	
		}
	}
	return 0;
}


//����ģʽ��T���ִ�S��һ�γ��ֵ�λ���±꣬�Ҳ����򷵻�-1
int kmp(char *T, char* S){
    int len_T = strlen(T);
    int len_S = strlen(S);
    for(int i = 0,j = 0;i<len_T;i++)
	{
        while(j > 0 && T[i] != S[j]) j=ne[j-1];
        if(T[i] == S[j])	j++;
        if(j == len_S)	return i-len_S+1;
    }
    return -1;
}
 
//����ģʽ��T���ִ�S���ֵĴ������Ҳ����򷵻�0
int kmp(char *T, char* S){
    int sum = 0;
    int len_T = strlen(T);
    int len_S = strlen(S);
    for(int i = 0,j = 0;i<len_T;i++)
	{
        while(j > 0 && T[i] != S[j])	j=ne[j-1];
        if(T[i] == S[j])	j++;
        if(j == len_S)
		{
            sum++;
            j = ne[j-1];
        }
    }
    return sum;
}

