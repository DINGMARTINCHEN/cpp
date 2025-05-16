��ջ
#include "bits/stdc++.h"
#define maxsize 100
using namespace std; 
typedef struct stack
{
	int data[maxsize];
	int top;
}sqstack;
void initstack(sqstack &l)
{
	l.top=-1;
}
bool empty(sqstack &l)
{
	if(l.top==-1)
	{
		return true;
	}else
	{
		return false;
	}
}
//��ջ
void push(sqstack &l,int x)
{
	if(l.top==maxsize-1)
	{
		cout<<"ջ��"<<endl; 
		return;
	}
	l.data[++l.top]=x;
}
//��ջ
void pop(sqstack &l,int &x)
{
	if(l.top==-1)
	{
		cout<<"ջ��"<<endl;
		return;
	}
	x=l.data[l.top--];
}
//��ջ��Ԫ��
int gettop(sqstack l)
{
	if(l.top==-1)
	{
		cout<<"ջ��"<<endl;
        return -1;
	}else
	{
		cout<<l.data[l.top];
	}
}
//����ջ
void printstack(sqstack l)
{
	while(l.top!=-1)
	{
		cout<<l.data[l.top--]<<" ";
	}
	cout<<endl;
}
//����ջ
void destroystack(sqstack &l)
{
	l.top=-1;
}
//�ж�ջ�Ƿ�ǿ�
bool isempty(sqstack &l)
{
	if(l.top==-1)
	{
		return true;
	}else
	{
		return false;
	}
}
//��ջ�ĳ���
int length(sqstack l)
{
	int x=0; 
	while(l.top!=-1)
	{
		x++;
	}
	return x;
}



ջ�ı��ʽ��ֵ��
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
		cout<<"�ڴ����ʧ��!"<<endl;
		return;
	}
	s.top=-1;
	return;
}
void pushcharstack(charstack &s,char c)
{
	if(s.top==maxsize)
	{
		cout<<"ջ����!"<<endl;
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
		cout<<"ջΪ��!"<<endl;
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
	fgets(a,maxsize-1,stdin);//���������ж�ȡ�ַ���
	cout<<"�������׺���ʽΪ:"<<endl;
	cout<<a<<endl;
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
		cout<<"ջ����!"<<endl;
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
//	cout<<"��׺���ʽ����:"<<endl; 
//	cout<<b<<endl<<endl;
	int ans=caculatvalue(b,st);
	cout<<"���ʽֵΪ:"<<endl<<ans;
    return 0;
}
���У�
#include "bits/stdc++.h"
#define maxsize 100
using namespace std;
typedef struct queue
{
	int data[maxsize];
	int front;
	int rear; 
}sqqueue;
//��ʼ�����У�����һ���ն���
void initqueue(sqqueue &q)
{
	q.rear=q.front=0;
}
//�����п�
bool isempty(sqqueue q)
{
	if(q.rear==q.front)
	{
		return true;
	}else
	{
		return false;
	}
}
//�������� 
bool isfull(sqqueue q)
{
	if(q.rear==maxsize)
	{
		return true;
	}else
	{
		return false;
	}
}
//���
void enqueue(sqqueue &q,int x) 
{
    if(isfull(q))
    {
    	cout<<"������"<<endl;
	}else
	{
		q.data[q.rear]=x;
		q.rear++;
	}
}
//����
void dequeue(sqqueue &q)
{
	if(isempty(q))
	{
		cout<<"���п�"<<endl;
	}else
	{
		q.front++;
	}
}
//��ȡ��ͷԪ��
void gethead(sqqueue q)
{
	if(isempty(q))
	{
		cout<<"���п�"<<endl;
	}
	else
	{
		cout<<q.data[q.front];
	}
}
//��ȡ��ǰ����
int length(sqqueue q)
{
	int x=0; 
	for(int i=0;i<=q.rear;i++)
	{
		x++;
	}
	return x;
}
���ӣ�
#include "bits/stdc++.h"
#define maxsize 100
using namespace std;
typedef struct queue
{
	int data[maxsize];
	int front;
	int rear; 
}sqqueue;
//��ʼ�����У�����һ���ն���
void initqueue(sqqueue &q)
{
	q.rear=q.front=0;
}
//�����п�
bool isempty(sqqueue q)
{
	if(q.rear==q.front)
	{
		return true;
	}else
	{
		return false;
	}
}
//�������� 
bool isfull(sqqueue q)
{
	if((q.rear+1)%maxsize==q.front)
	{
		return true;
	}else
	{
		return false;
	}
}
//���
void enqueue(sqqueue &q,int x) 
{
    if(isfull(q))
    {
    	cout<<"������"<<endl;
	}else
	{
		q.data[q.rear]=x;
		q.rear=(q.rear+1)%maxsize;
	}
}
//����
void dequeue(sqqueue &q)
{
	if(isempty(q))
	{
		cout<<"���п�"<<endl;
	}else
	{
		q.front=q.data[q.front];
	}
}
//��ȡ��ͷԪ��
void gethead(sqqueue q)
{
	if(isempty(q))
	{
		cout<<"���п�"<<endl;
	}
	else
	{
		cout<<q.data[q.front];
	}
}
//��ȡ��ǰ����
int length(sqqueue q)
{
	return (q.rear+maxsize-q.front)%maxsize;
}