#include "malloc.h"
#include "iostream"
using namespace std;
typedef struct BTreeNode{
	char data;
	int ltag,rtag;
	struct BTreeNode *lchild,*rchild;
}BTNode,*BTree;
typedef struct{
	BTree *elems;
	BTree *top;
	int stacksize;
}Stack;
void init_Stack(Stack &S){
	S.elems=(BTree *)malloc(100*sizeof(BTree));
	S.top=S.elems;
	S.stacksize=100;
}
void push(Stack &S,BTree p){
	*(S.top)=p;
	S.top++;
}
void pop(Stack &S,BTree &p){
	S.top--;
	p=*(S.top);
}
void createBTree(BTree &BT){
	char ch;
	cin>>ch;
	if(ch=='#'){
		BT=NULL;
	}else{
		BT=(BTNode *)malloc(sizeof(BTNode));
		BT->data=ch;
		BT->ltag=0;
		BT->rtag=0;
		createBTree(BT->lchild);
		createBTree(BT->rchild);
	}
}
void preorder(BTree BT){
	if(BT!=NULL){
		cout<<BT->data<<" ";
		preorder(BT->lchild);
		preorder(BT->rchild);
	}
}
void preorder_non(BTree BT){
	Stack S;
	init_Stack(S);
//L1:	while(BT!=NULL){//		
//		push(S,BT);
//		BT=BT->lchild;
//	}
//	if(S.elems!=S.top){
//		pop(S,BT);
//		if(BT!=null){
//            cout<<BT->data;
//    }
//	}
	while(BT!=NULL||(S.elems!=S.top)){
		if(BT!=NULL){
			cout<<BT->data<<" ";
			push(S,BT->rchild);
			BT=BT->lchild;
		}else{
			pop(S,BT);
		}
	}
	cout<<endl;
}
void inorder(BTree BT){
	if(BT!=NULL){
		inorder(BT->lchild);
		cout<<BT->data<<" ";
		inorder(BT->rchild);
	}
}
void inorder_threading(BTree &BT){
	if(BT!=NULL){
		inorder(BT->lchild);
//		visit(BT);
		if(BT->lchild==NULL){
			BT->ltag=1;
			BT->lchild=pre;//假设pre是BT的前驱节点 
		}
		if(pre->rchild==NULL){
			pre->rtag=1;
			pre->rchild=BT;//假设next是BT的后继 
		} 
		pre=BT;
		inorder(BT->rchild);
	}
}
BTree pre;
BTree inorder_Thread(BTree &BT){
	BTree Thd;
	Thd=(BTNode *)malloc(sizeof(BTNode));
	Thd->lchild=BT;
	Thd->ltag=0;
	Thd->rtag=1;
	Thd->rchild=Thd;
	pre=Thd;
	if(BT!=NULL){
		inorder_threading(BT);
		pre->rtag=1;
		pre->rchild=Thd;
		Thd->rchild=pre;
	}
	return Thd;
}
void inorder_traverse(BTree Thd){
	BTree BT;
	BT=Thrd->lchild;
	while(BT->lchild!=Thrd){
		BT=BT->lchild;
	}
	visit(BT);
L1:	while(BT->ltag==1){
		BT=BT->rchild;
		visit(BT);
	}
	if(BT->rtag==0){
		p=BT->rchild;
		while(p->lchild!=BT){
			p=p->lchild;
		}
		BT=p;
		goto L1;
	}
}
int main(){
	BTree BT;
	createBTree(BT);
	preorder(BT);cout<<endl;
	preorder_non(BT);
}
 
