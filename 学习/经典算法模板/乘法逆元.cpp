//*���ϴ��a*b/c ����ģ

/*
����С����2^(p-1)%p=1  //a^(p-1) ��1 (mod p)

����С����(Fermat's little theorem)�������е�һ����Ҫ������1636�������������Ϊ�� ����p����������gcd(a,p)=1����ô a(p-1)��1��mod p����
��������a��������p����������a,p����(������ֻ��һ����Լ��1)��
��ôa��(p-1)�η�����p�����������1��

�������ݼ���˵���ǣ�a^(p-1) ��1 (mod p)
����Ԫ������ͬ����a �õ� a^(p-2) ��1/a (mod p)
����д1/a Ӧ����a^(p-2) �� inv(a) (mod p)

 *�õ���ʽ��inv(a) = a^(p-2) (mod p).
ʹ�������� p������������gcd(a,p) = 1.(p,a����)
*/
typedef long long ll;
using namespace std;
int mod=100000;

ll qpow(ll a,ll b,ll p)
{
    ll tmp = 1;
    a=a%p;
    while(b)
    {
        if(1&b) tmp = tmp*a%p;
        a = a*a%p;
        b>>=1;
    }
    return tmp%p;
}
ll inv(ll a,ll p) //*����С��������Ԫ
{
    return qpow(a,p-2,p);
}

//*����:��n*(n+1)*(2*n+1)/6 ��mod=998244353��ģ(1<=n<=1e9)


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>
#include <string>
#include <iomanip>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <functional>
#define int long long 
using namespace std;
typedef pair<int, int> pii;
const int N = 1e6 + 10;
int MOD = 998244353;
long long mul_mod(long long a, long long b, long long mod)
{
    long long res = 0;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res + a) % mod;
        }
        a = (a * 2) % mod;
        b /= 2;
    }
    return res;
}

// ���� (n * (n + 1) * (2 * n + 1) / 6) % MOD
long long calculate(long long n) {
    // ���� n * (n + 1)
    long long term1 = mul_mod(n, n + 1, MOD);
    // ���� 2 * n + 1
    long long term2 = (2 * n + 1) % MOD;
    // ���� n * (n + 1) * (2 * n + 1)
    long long product = mul_mod(term1, term2, MOD);

    // ���� product / 6
    // ���� 6 �� MOD ���ʣ�����ʹ�ó˷���Ԫ
    long long inv6 = 166374059; // 6 �� MOD �µ���Ԫ
    long long result = mul_mod(product, inv6, MOD);

    return result;
}
void solve()
{
	int k;
	cin >> k;
	//int ans;
	//int mod = 998244353;
	//ans = ((k % mod) * ( (k + 1) % mod ) * ( (2 * k + 1)) % mod ) / 6;
    int ans = calculate(k);
	cout << ans << "\n";
}
signed main()
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

