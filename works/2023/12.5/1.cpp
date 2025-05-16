#include "iostream"
#include "cstring"
#include "malloc.h"
#define INIT_SIZE  100
#define INC 10
using namespace std;
// void union(SqList &L)
typedef struct{
	int num;
	int score;
}Stu;
typedef struct{
	Stu *elem;
	int length;//Ԫ�ظ��� 
	int listSize;//�洢�ռ��С 
}SqList;
bool init_SqList(SqList &SL){
	SL.elem=(Stu *)malloc(INIT_SIZE*sizeof(Stu));
	if(SL.elem==NULL){
		return false;
	}
	SL.listSize=INIT_SIZE;
	SL.length=0;
	return true;
} 
bool insert_SqList(SqList &SL,int i,Stu s){
	Stu *newbase,*p,*q;
	if(SL.length>=SL.listSize){
		newbase=(Stu *)realloc(SL.elem,(SL.listSize+INC)*sizeof(Stu));
		if(newbase==NULL){			
			return false;
		} 
		SL.elem=newbase;
		SL.listSize+=INC;
	}
	
	q=SL.elem+i-1;
	for(p=SL.elem+SL.length;p>=q;p--){
		*(p+1)=*p;
	}
	(*q).num=s.num;
	(*q).score=s.score;
	SL.length++;
	return true;
} 
void traverse(SqList SL){
	for(int i=0;i<SL.length;i++){
		cout<<SL.elem[i].num<<" "<<SL.elem[i].score<<endl;
	}
}
bool delete_SqList(SqList &SL,int i,Stu &s){
	Stu *p,*q;
	if(i<1||i>SL.length){
		cout<<"error!";
		return false;
	}
	if(SL.length<=0){
		cout<<"error!";
		return false;
	}
	p=SL.elem+i-1;
	s.num=(*p).num;
	s.score=(*p).score;
	/*
	for(q=p;q<SL.elem+SL.length;q++){
		*q=*(q+1);		
	}
	
    for(q=SL.elem+SL.length;q>=p;q++)
	{
		*q=*(q-1);
	}
	*/
	SL.length--;
	return true;
}
bool getElem(SqList SL,int i,Stu &s){
	if(i<1||i>SL.length){
		cout<<"error!";
		return false;
	}
	s.num=SL.elem[i-1].num;
	s.score=SL.elem[i-1].score;
	return true;
}
bool getprior(SqList SL,int i,Stu &s){
	//
}
bool getnext(SqList SL,int i,Stu &s){
	//
}
bool locate(SqList SL,Stu s,int &pos){//��һ����=s��λ�� 
	int i;
	for(i=0;i<SL.length;i++){
		if(SL.elem[i].score<=s.score){
			break;
		}
	} 
	pos=i+1;
}
int main() {
	int n;
	Stu s;
	bool status;
	SqList SL;
    cin>>n;
    status=init_SqList(SL);
    if(!status){
    	cout<<"error!";
    	return 0;//���̹��� 
	}
	int pos;
	for(int i=0;i<n;i++){
		cin>>s.score;
		s.num=i+1;
		locate(SL,s,pos);
		status=insert_SqList(SL,pos,s);
		if(status==false){
    		cout<<"error!";
    		return 0;//���̹��� 
		}
	}
	traverse(SL);
	cout<<endl;
//	delete_SqList(SL,1,s);
//	traverse(SL);
//	cout<<endl;
//	cout<<s.num<<" "<<s.score;
//	cout<<endl<<endl;
//	getElem(SL,2,s);
//	cout<<s.num<<" "<<s.score;
}
/*
���ݴ���  ����----�㷨---�����   ����
1.������ô��֯---���㴦��----���ϣ�set)�����Խṹ�����Ա�
�����ã�����������һ������ ���������������ֲ�ķ�֧�ṹ��ͼ 
2.����㷨 


1.1 ˳���SqList 
*/

