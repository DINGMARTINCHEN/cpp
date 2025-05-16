#include<bits/stdc++.h>
using namespace std;
#define ms(x, n) memset(x,n,sizeof(x));
typedef  long long LL;
const int inf = 1 << 30;
const int maxn = 1e6+10;

char T[maxn];
int nxt[maxn], M;
void getNext(){
    ms(nxt, 0);
    int i = 0, j = -1;
    nxt[0] = -1;
    while(i < M){
        if(j == -1 || T[i] == T[j])
            nxt[++i] = ++j;
        else j = nxt[j];
    }
}
int main() {
    while(scanf("%s",T) && T[0]!='.'){
        M = strlen(T);
        getNext();
        int len = M-nxt[M];

        if(nxt[M] == 0 || M%len != 0)
            cout << 1 << endl;
        else
            cout << M/len << endl;
    }
    return 0;
}