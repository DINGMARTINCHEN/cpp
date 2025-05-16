#include "iostream"
#include "malloc.h"
using namespace std;

typedef struct LinkNode {
	int child;
	struct LinkNode *nextchild;
} CNode;

typedef struct {
	char data;
	int parent;
	CNode *firstchild;
} Elemtype;

typedef struct {
	Elemtype *elems;
	int length;
} Tree;

void init_Tree(Tree &T) {
	int n;
	cin >> n;
	T.elems = (Elemtype *)malloc((n + 1) * sizeof(Elemtype));
	T.length = n ;
	for (int i = 1; i <= n; i++) {
		T.elems[i].firstchild = NULL;
		T.elems[i].parent = 0;
		T.elems[i].data = '\0';
	}
}

void create(Tree &T) {
	int p, c;
	CNode *q, *s;
	for (int i = 1; i <= T.length; i++) {
		cin >> T.elems[i].data;
	}
	for (int i = 1; i < T.length; i++) {
		cin >> p >> c;
		T.elems[c].parent = p;
		q = T.elems[p].firstchild;
		s = (CNode *)malloc(sizeof(CNode));
		s->child = c;
		s->nextchild = NULL;
		s->nextchild = q;
		T.elems[p].firstchild = s;
		//β�巨
	}
}

void BFSTraverse(Tree T) {
	//1.�����ڵ����
	//2.������в��գ�����һ��Ԫ�أ����ʸ�Ԫ�أ��������к�����ӣ�ת��2
	insertQueue(Q, 1);
	while (EmptyQueue(Q) != true) {
		deleteQueue(Q, x);
		visit(T, x);
		p = T.elems[x].firstchild;
		while (p != NULL) {
			insertQueue(Q, p->child);
			p = p->nextchild;
		}
	}
}

void preorderTraverse(Tree T, int x) {
	//�ȷ��ʸ��ڵ�
	//�����ȸ����������������
	visit(T, x);
	p = T.elems[x].firstchild;
	while (p != NULL) {
		preorderTraverse(T, p->child);
		p = p->nextchild;
	}
}

int main() {
	Tree T;
	init_Tree(T);
	create(T);
}