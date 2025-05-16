#include <iostream>

using namespace std;

const int N = 1010;

int n;
int a[N][N], f[N][N];

int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= i; j ++ )
			cin >> a[i][j];
	
	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= i; j ++ )
			f[i][j] = a[i][j] + max(f[i - 1][j], f[i- 1][j - 1]);
	
	int maxn = 0;
	for (int i = 1; i <= n; i ++ ) maxn = max(maxn, f[n][i]);

    cout << maxn << endl;
    
    return 0;
}
