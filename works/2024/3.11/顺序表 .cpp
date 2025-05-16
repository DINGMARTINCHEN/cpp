#include "bits/stdc++.h"
#include <malloc.h>
using namespace std;
typedef int Elemtype;
typedef struct ListType
{
	Elemtype *elems;
	int length;
	int listsize;
}SqList;
bool init_List(SqList &SL)
{
	SL.elems=(Elemtype *)malloc(100*sizeof(100));
	if(SL.elems)
	{
		SL.length=0;
		SL.listsize=100;
		return true;
	}else
	{
		return false;
	}
}
void clear_List(SqList &SL)
{
	SL.length=0;
}
void destory_List(SqList &SL)
{
	free(SL.elems);
	SL.length=0;
	SL.listsize=0;
}
bool getElem(SqList &SL,int i,Elemtype &e)
{
	if(i<0||i>SL.length-1||SL.length==0)
	{
		return false;
	}else
	{
		e=SL.elems[i];
	}
}
bool insert_Elem(SqList &SL,int i,Elemtype e)
{
	// Elemtype newbase;
	Elemtype newbase1,newbase2;
	if(i<-1||i>SL.length)
	{
		return false;
	}
	if(SL.length>=SL.listsize)
	{
		SL.elems=(Elemtype *)realloc(SL.elems,(100)*sizeof(Elemtype));
		SL.listsize+=10;
	}
	for(int j=i+1;j<SL.length;j++)
	{
		if(j==i+1)
		{
			newbase1=SL.elems[j];
			SL.elems[j]=SL.elems[i];
		}else
		{
			newbase2=SL.elems[j];
			SL.elems[j]=newbase1;
			newbase1=newbase2;
		}
	}
	SL.elems[i]=e;
	SL.length++;
	return true;
}
bool delete_Elem(SqList &SL,int i,Elemtype e)
{
	if(i<-1||i>SL.length)
	{
		return false;
	}
	for(int j=i;j<SL.length-1;j++)
	{
		SL.elems[j]=SL.elems[j+1];
	}
	SL.length--;
	return true;
}
bool locate(SqList SL,Elemtype e)
{
	for(int i=0;i<SL.length;i++)
	{
		if(SL.elems[i]==e)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	
}