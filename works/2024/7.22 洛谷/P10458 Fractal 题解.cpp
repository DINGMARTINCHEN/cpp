#include<bits/stdc++.h>
using namespace std;
char mp[730][730];
void f(int n, int x, int y) {
	//递归边界
	if (n == 1) {
		mp[x][y]='X';
	} else {
		int m = pow(3, n - 2);
		//递归5个位置 
		f(n - 1, x, y);
		f(n-1, x+2*m, y);
		f(n - 1, x , y + 2 * m);
		f(n - 1, x + m, y + m);
		f(n-1,x+2*m,y+2*m);
	}
}
int main() {
	int n ;
	while (1) {
		cin >> n;
		if(n==-1) return 0;
		int c=pow(3, n - 1);
		 //初始化
		memset(mp,' ',sizeof(mp));
		f(n, 0, 0);
		for (int i = 0; i < c; i++) 
        {
			for(int j=0; j< c; j++) 
            {
                printf("%c",mp[i][j]);
            }
			cout<<endl;
		}
		cout <<'-'<<endl;
	}
	return 0;
}