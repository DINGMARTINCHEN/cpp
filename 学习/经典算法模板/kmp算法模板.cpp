//ACwing题库中的831题
#include <bits/stdc++.h>

using namespace std;

const int N=100010,M=1000010;

int n, m;
int ne[N];
string s,p;

void get_Next(string s)		//这个函数对字符串s进行预处理得到next数组
{
	int j=0;
	ne[0]=0;	//初始化
	for(int i=1;i<s.size();i++)
	{	//i指针指向的是后缀末尾，j指针指向的是前缀末尾
		while(j>0 && s[i]!=s[j])	j=ne[j-1];	//前后缀不相同，去找j前一位的最长相等前后缀
		if(s[i]==s[j])	j++;	//前后缀相同，j指针后移
		ne[i]=j;	//更新next数组
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


//返回模式串T中字串S第一次出现的位置下标，找不到则返回-1
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
 
//返回模式串T中字串S出现的次数，找不到则返回0
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

