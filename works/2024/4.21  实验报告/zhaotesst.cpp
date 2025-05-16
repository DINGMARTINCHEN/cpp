// #include "bits/stdc++.h"
// #define maxsize 1010
// using namespace std; 
// typedef struct 
// {
// 	char *ch;
// 	int top;
// }charstack;
// typedef struct
// {
// 	int *num;
// 	int top;
// }numstack;
// charstack s;
// numstack st;
// void initcharstack(charstack &s)
// {
// 	s.ch=(char *)malloc(maxsize*sizeof(char));
// 	if(s.ch==NULL)
// 	{
// 		cout<<"内存分配失败!"<<endl;
// 		return;
// 	}
// 	s.top=-1;
// 	return;
// }
// void pushcharstack(charstack &s,char c)
// {
// 	if(s.top==maxsize)
// 	{
// 		cout<<"栈已满!"<<endl;
// 		return;
// 	}
// 	s.top++;
// 	*++s.ch=c;
// 	return;
// }
// char popcharstack(charstack &s)
// {
// 	if(s.top==-1)
// 	{
// 		cout<<"栈为空!"<<endl;
// 		exit(1);
// 	}
// 	s.top--;
// 	char c=*s.ch--;
// 	return c;
// }
// char getstacktop(charstack &s)
// {
// 	char c=*s.ch;
// 	return c;
// }
// bool priorjudge(char c1,char c2)
// {
// 	if(c1=='*'||c1=='/') 
// 	   if(c2=='+'||c2=='-'||c2 =='(')
// 	      return true;
// 	if(c1=='+'||c1=='-')
// 	   if(c2=='(') return true;   
// 	return false;
// }
// char *infixtosuffex(char *a,char *b)
// {
// 	fgets(a,maxsize-1,stdin);//从输入流中读取字符串
// 	cout<<"输入的中缀表达式为:"<<endl;
// 	cout<<a<<endl;
// 	int t=strlen(a);
// 	int k=0;
// 	for(int i=0;i<t;++i)
// 	{
// 		if(a[i]>='0'&&a[i]<='9')
// 		{
// 			b[k++]=a[i];
// 			if(a[i+1]<'0'||a[i+1]>'9')
//                 b[k++]='#';
// 		}else if(a[i]==' '||a[i]=='=')
// 		{
// 			continue;
// 		}else
// 		{
// 			if(s.top==-1||a[i]=='(') 
// 			    pushcharstack(s,a[i]);
//             else if(a[i]==')')
//             {
//                 while(s.top!=-1&&getstacktop(s)!='(')
// 				    b[k++]=popcharstack(s);
// 				if (s.top!=-1) popcharstack(s);
//             }
//             else
//             {
//                 while(s.top!=-1&&!priorjudge(a[i],getstacktop(s)))
//                     b[k++]=popcharstack(s);
//                 pushcharstack(s,a[i]);
//             }
// 		}
// 	}
// 	b[k]='\0';
// 	return b;
// }
// void initnumstack(numstack &st)
// {
// 	st.num=(int *)malloc(maxsize*sizeof(int));
// 	st.top=-1;
// 	return;
// }
// void pushnumstack(numstack &st,int n)
// {
// 	if(st.top==maxsize)
// 	{
// 		cout<<"栈已满!"<<endl;
// 		return;
// 	}
// 	st.top++;
// 	*++st.num=n;
// 	return;
// }
// int popnumstack(numstack &st)
// {
// 	if(st.top==-1)
// 	{
// 		cout<<"NO"<<endl;
// 		exit(1);
// 	}
// 	st.top--;
// 	int num=*st.num--;
// 	return num;
// }
// int caculatvalue(char *b,numstack &st)
// {
// 	initnumstack(st);
// 	int t=strlen(b);
// 	int num=0;
// 	for (int i=0;i<t;++i)
// 	{
// 		if(b[i]>='0'&&b[i]<='9')
// 		{
// 		    num=10*num+b[i]-'0';
// 		    if(b[i+1]=='#') pushnumstack(st,num),num=0;
// 	    }
// 		else
// 		{
// 			if (b[i]=='#') continue;
// 			int n=popnumstack(st);
// 			int m=popnumstack(st);
// 			if(b[i]=='+') pushnumstack(st,m+n);
// 			else if(b[i]=='-') pushnumstack(st,m-n);
// 			else if(b[i]=='*') pushnumstack(st,m*n);
// 			else pushnumstack(st,m/n);
// 		}	
// 	}
// 	return popnumstack(st);
// }
// int main()
// {
// 	initcharstack(s);
// 	char a[maxsize]={0};
// 	char b[maxsize]={0};
// 	infixtosuffex(a,b);
// //	cout<<"后缀表达式如下:"<<endl; 
// //	cout<<b<<endl<<endl;
// 	int ans=caculatvalue(b,st);
// 	cout<<"表达式值为:"<<endl<<ans;
//     return 0;
// }
#include "bits/stdc++.h"
#define maxsize 1010
using namespace std; 
typedef struct 
{
	char *ch;
	int top;
}charstack;
typedef struct
{
	int *num;
	int top;
}numstack;
charstack s;
numstack st;
void initcharstack(charstack &s)
{
	s.ch=(char *)malloc(maxsize*sizeof(char));
	if(s.ch==NULL)
	{
		cout<<"内存分配失败!"<<endl;
		return;
	}
	s.top=-1;
	return;
}
void pushcharstack(charstack &s,char c)
{
	if(s.top==maxsize)
	{
		cout<<"栈已满!"<<endl;
		return;
	}
	s.top++;
	*++s.ch=c;
	return;
}
char popcharstack(charstack &s)
{
	if(s.top==-1)
	{
		cout<<"栈为空!"<<endl;
		exit(1);
	}
	s.top--;
	char c=*s.ch--;
	return c;
}
char getstacktop(charstack &s)
{
	char c=*s.ch;
	return c;
}
bool priorjudge(char c1,char c2)
{
	if(c1=='*'||c1=='/') 
	   if(c2=='+'||c2=='-'||c2 =='(')
	      return true;
	if(c1=='+'||c1=='-')
	   if(c2=='(') return true;   
	return false;
}
char *infixtosuffex(char *a,char *b)
{
	fgets(a,maxsize-1,stdin);//从输入流中读取字符串
	int t=strlen(a);
	int k=0;
	for(int i=0;i<t;++i)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			b[k++]=a[i];
			if(a[i+1]<'0'||a[i+1]>'9')
                b[k++]='#';
		}else if(a[i]==' '||a[i]=='=')
		{
			continue;
		}else
		{
			if(s.top==-1||a[i]=='(') 
			    pushcharstack(s,a[i]);
            else if(a[i]==')')
            {
                while(s.top!=-1&&getstacktop(s)!='(')
				    b[k++]=popcharstack(s);
				if (s.top!=-1) popcharstack(s);
            }
            else
            {
                while(s.top!=-1&&!priorjudge(a[i],getstacktop(s)))
                    b[k++]=popcharstack(s);
                pushcharstack(s,a[i]);
            }
		}
	}
	b[k]='\0';
	return b;
}
void initnumstack(numstack &st)
{
	st.num=(int *)malloc(maxsize*sizeof(int));
	st.top=-1;
	return;
}
void pushnumstack(numstack &st,int n)
{
	if(st.top==maxsize)
	{
		cout<<"栈已满!"<<endl;
		return;
	}
	st.top++;
	*++st.num=n;
	return;
}
int popnumstack(numstack &st)
{
	if(st.top==-1)
	{
		cout<<"NO"<<endl;
		exit(1);
	}
	st.top--;
	int num=*st.num--;
	return num;
}
int caculatvalue(char *b,numstack &st)
{
	initnumstack(st);
	int t=strlen(b);
	int num=0;
	for (int i=0;i<t;++i)
	{
		if(b[i]>='0'&&b[i]<='9')
		{
		    num=10*num+b[i]-'0';
		    if(b[i+1]=='#') pushnumstack(st,num),num=0;
	    }
		else
		{
			if (b[i]=='#') continue;
			int n=popnumstack(st);
			int m=popnumstack(st);
			if(b[i]=='+') pushnumstack(st,m+n);
			else if(b[i]=='-') pushnumstack(st,m-n);
			else if(b[i]=='*') pushnumstack(st,m*n);
			else pushnumstack(st,m/n);
		}	
	}
	return popnumstack(st);
}
int main()
{
	initcharstack(s);
	char a[maxsize]={0};
	char b[maxsize]={0};
	infixtosuffex(a,b);
	int ans=caculatvalue(b,st);
	cout<<ans;
    return 0;
}