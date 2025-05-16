#include<bits/stdc++.h>
#define MaxSize 1010

using namespace std;

typedef struct 
{
    char *ch;
    int top; 
    
}CharStack;

typedef struct
{
	int *num;
	int top;
}NumStack;

CharStack S;
NumStack St;

void InitCharStack(CharStack &S)//初始化"字符栈" 
{
    S.ch = (char *)malloc(MaxSize * sizeof(char));
    
    if (S.ch == NULL) 
    {
    
    	return;
	}
    S.top = -1;
    
    return;
}

void PushCharStack(CharStack &S, char c)//字符栈进栈 

{    
    if (S.top == MaxSize) 
    {    
        return;
    }
    S.top ++;
    * ++S.ch = c;
    
    return;
}

char PopCharStack(CharStack &S)//字符栈出栈 
{   
    if (S.top == -1)
    {
        exit(1);
    }
    S.top --;
    char c = *S.ch --;
    
    return c;
}

char GetStackTop(CharStack &S)//获取字符栈栈顶元素 
{
    char c = *S.ch;
    
    return c;
}

bool PriorJudge(char c1, char c2)//priority优先级 judge判断 
{
	if (c1 == '*' || c1 == '/') 
	   if (c2 == '+' || c2 == '-' || c2 == '(')
	      return true;
	if (c1 == '+' || c1 == '-')
	   if (c2 == '(') return true;
	   
	return false;
}

char *InfixToSuffex(char *a, char *b)//infix中缀 suffex后缀 
{
    fgets(a, MaxSize-1, stdin);//从输入流中读取字符串 
	cout << a << endl; 
    
    int t = strlen(a);
    
    int k = 0;
    
    for (int i = 0; i < t; ++ i)
    {
    	
    //	if (a[i] == '(')  printf("\n\n\n 666666 \n\n\n");
    	
        if (a[i] >= '0' && a[i] <= '9')
        {
        	b[k ++] = a[i];
            if (a[i+1] < '0' || a[i+1] > '9')
                b[k ++] = '#';
        }
        
        else if (a[i] == ' ' || a[i] == '=') continue;
            
        else
        {
            if(S.top == -1 || a[i] == '(') 
			    PushCharStack(S, a[i]);
            
            else if (a[i] == ')')
            {
                while (S.top != -1 && GetStackTop(S) != '(')
				    b[k ++] = PopCharStack(S);
				    
				if (S.top != -1) PopCharStack(S);
                    
            }
            
            else
            {
                while (S.top != -1 && !PriorJudge(a[i], GetStackTop(S)))
                    b[k ++] = PopCharStack(S);
                    
                PushCharStack(S, a[i]);
            }
        }
        
    } 
   
    b[k] = '\0';
    
    return b;
}

void InitNumStack(NumStack &St)//初始化"数组栈" 
{
	St.num = (int *)malloc(MaxSize * sizeof(int));
	St.top = -1;
	
	return;
}

void PushNumStack(NumStack &St, int n)//数字栈进栈 
{
	if (St.top == MaxSize) 
    {    
        return;
    }
    
	St.top ++;
	
	* ++St.num = n;
	
	return;
}

int PopNumStack(NumStack &St)//数字栈出栈 
{
	if (St.top == -1)
    {
        exit(1);
    }
    St.top --;
    int num = *St.num --;
    
    return num;
}

int CaculatValue(char *b, NumStack &St)//处理后缀表达式计算结果 
{
	InitNumStack(St);
	int t = strlen(b);
	int num = 0;
	
	for (int i = 0; i < t; ++ i)
	{
		if (b[i] >= '0' && b[i] <= '9')
		{
		    num = 10 * num + b[i] - '0';
		    if (b[i+1] == '#') PushNumStack(St, num), num = 0;
	    }
		
		else
		{
			if (b[i] == '#') continue;
			
			int n = PopNumStack(St);
			int m = PopNumStack(St);
			
			if (b[i] == '+') PushNumStack(St, m + n);
			
			else if (b[i] == '-') PushNumStack(St, m - n);
			
			else if (b[i] == '*') PushNumStack(St, m * n);
			
			else PushNumStack(St, m / n);
		}
		
	}
	
	return PopNumStack(St);
}

int main()
{
	InitCharStack(S);
    char a[MaxSize] = {0};
	char b[MaxSize] = {0};
	InfixToSuffex(a, b);
	int ans = CaculatValue(b, St);
    cout<<ans;
    return 0;
}
