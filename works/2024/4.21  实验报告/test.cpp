#include<bits/stdc++.h>
 
using namespace std;
 
typedef int DataType;
 
typedef struct
{
	DataType data[20];
	int top;	
}SqStack;
 
int InitStack(SqStack &S) // ��ʼ����ջ
{
	S.top=-1;
	return 1;
}
 
int StackEmpty(SqStack S) // �ж϶�ջ�Ƿ�Ϊ�� 
{
	return(S.top==-1?1:0); 
}
 
int StackFull(SqStack S) // �ж϶�ջ�Ƿ�����
{
	return(S.top==20-1?1:0); 
}
 
int Push(SqStack &S,DataType e) // ��Ԫ��e���뵽ջ�У���Ϊ��ջ�� 
{
	if(StackFull(S))
	return 0; // ջ��
	S.top++; // ջ��λ������
	S.data[S.top]=e;
	return 1; 
}
 
int Pop(SqStack &S,DataType &e) // ��ջ��Ϊ�գ���ɾ��ջ��Ԫ�� 
{
	if(StackEmpty(S))
	return 0; // ջ��
	e=S.data[S.top];
	S.top--;
	return 1; 
}
 
DataType GetTop(SqStack S) // ��ջ��Ϊ�գ���ȡջ��Ԫ�� 
{
	DataType e;
	if(StackEmpty(S))
	return 0; // ջ��
	e=S.data[S.top]; // ȡ�����ݣ�top����
	return e; 
}
 
char Precede(char a,char b) // �Ƚ�������������ȼ� 
{
	char z;
	if((b=='+')||(b=='-')||(b=='*')||(b=='/')||(b=='(')||(b==')')||(b=='@'))
	switch(a)
	{
		case '+':
		case '-':
			if((b=='*')||(b=='/')||(b=='('))
			    z='<';
			else
			    z='>';break;
		case '*':
		case '/':
			if(b=='(')
			    z='<';
			else
			    z='>';break;
		case '(':
			if (b=='@')
			    z='E';
		    else if(b==')')
		        z='@';
		    else z='<';
		    break;
		case ')':
			if(b=='(')
			    z='E';
			else
				z='>';
			break;
		case '@':
			if(b=='@')
			    z='@';
			else if(b==')')
			    z='E';
			else z='<';break;
	}
	else z='E';
	return(z);
}
 
int In(char ch) // �ж��ַ�ch�Ƿ�Ϊ���
{
	int i,flag=0;
	char op[7]={'+','-','*','/','(',')','@'};
	for(i=0;i<7;i++)
	{
		if(ch==op[i])
		{
			flag=1;break;
		}
    }
    return flag;
}
 
DataType Operate(DataType a,char theta,DataType b)
{
	DataType z;
	switch(theta)
	{
		case '+':z=a+b;break;
		case '-':z=a-b;break;
		case '*':z=a*b;break;
		case '/':z=a/b;break;	
	}
	return(z);
}
 
int CaculateExpression()
{
	SqStack optr,opnd;
	DataType x,theta,a,b,s;
	char c;
	c=getchar();
	InitStack(optr);
	Push(optr,(DataType)'@');
	InitStack(opnd);
	
	while(c!='@' || (char)GetTop(optr)!='@')
	{
		if(!In(c))
		{
			s=c-'0'; 
			Push(opnd,(DataType)s);
			c=getchar();
		}
		else
		switch(Precede((char)GetTop(optr),c))
		{
			case '<': // ջ��������ȼ���
				Push(optr,(DataType)c);
				c=getchar();
				break;
			case '@': // ���ȼ���ͬ����ȥ����
				Pop(optr,x);
				c=getchar();
				break;
			case '>': // ջ��������ȼ��ߣ���ջ��������
				Pop(optr,theta);
				Pop(opnd,b);
				Pop(opnd,a);
				Push(opnd,Operate(a,(char)theta,b));
			    break;
			case 'E':printf("NO");exit(1);
		}
	}
	return GetTop(opnd);
}
 
int main()
{
	printf("%d\n",CaculateExpression());
	return 0;	
}