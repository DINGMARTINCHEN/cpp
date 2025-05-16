#include<bits/stdc++.h>
 
using namespace std;
 
typedef int DataType;
 
typedef struct
{
	DataType data[20];
	int top;	
}SqStack;
 
int InitStack(SqStack &S) // 初始化堆栈
{
	S.top=-1;
	return 1;
}
 
int StackEmpty(SqStack S) // 判断堆栈是否为空 
{
	return(S.top==-1?1:0); 
}
 
int StackFull(SqStack S) // 判断堆栈是否满了
{
	return(S.top==20-1?1:0); 
}
 
int Push(SqStack &S,DataType e) // 将元素e插入到栈中，作为新栈顶 
{
	if(StackFull(S))
	return 0; // 栈满
	S.top++; // 栈顶位置上移
	S.data[S.top]=e;
	return 1; 
}
 
int Pop(SqStack &S,DataType &e) // 若栈不为空，则删除栈顶元素 
{
	if(StackEmpty(S))
	return 0; // 栈空
	e=S.data[S.top];
	S.top--;
	return 1; 
}
 
DataType GetTop(SqStack S) // 若栈不为空，则取栈顶元素 
{
	DataType e;
	if(StackEmpty(S))
	return 0; // 栈空
	e=S.data[S.top]; // 取出数据，top不变
	return e; 
}
 
char Precede(char a,char b) // 比较两个算符的优先级 
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
 
int In(char ch) // 判断字符ch是否为算符
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
			case '<': // 栈顶算符优先级低
				Push(optr,(DataType)c);
				c=getchar();
				break;
			case '@': // 优先级相同，脱去括号
				Pop(optr,x);
				c=getchar();
				break;
			case '>': // 栈顶算符优先级高，退栈并将运算
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