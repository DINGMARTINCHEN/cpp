#include "malloc.h"
#include <iostream>
using namespace std;

typedef struct LinkNode {
	int child;
	int parent;
	struct linkNode *nextchild;
} CLNode;

typedef struct {
	char data;
	struct LinkNode *firstchild;
} Elemtype;

typedef struct {
	Elemtype *elems;
	int length;
} CLTree;

void init_PTree(CLTree &T) {
	int x;
	cin >> x;
	T.elems = (Elemtype *)malloc((x + 1) * sizeof(Elemtype));
	T.length = x;
	for (int j = 1; j <= T.length; j++) {
		T.elems[j].firstchild = NULL;
	}
}

void create(CLTree &T) {
	int p, c;
	struct LinkNode *q;
	for (int i = 1; i <= T.length; i++) {
		cin >> T.elem
		s[i].data;
	}
	for (int i = 1; i < T.length; i++) {
		cin >> p >> c;
		q = (struct LinkNode *)malloc(sizeof(CLNode));
		q->child = c;
		q->nextchild = NULL;
		q->nextchild = T.elems[p].firstchild;
		T.elems[p].firstchild = q;
	}
}

void traverse(CLTree T) {
	CLNode q;
	for (int j = 1; j <= T.length; j++) {
		cout << T.elems[j].data << " ";
		q = T.elems[j].firstchild;
		while (q != NULL) {
			cout << q->child << " ";
			q = q->nextchild;
		}
		cout << endl;
	}
}

int main() {
	CLTree CLT;
	init_PTree(CLT);
	create(CLT);
	traverse(CLT);

}
