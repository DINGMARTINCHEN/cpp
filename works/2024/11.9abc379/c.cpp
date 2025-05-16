#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
struct dot
{
    ll x, c;
};

bool cmp(dot a, dot b)
{
    return a.x < b.x;
}
void sol()
{
    ll n, m;
    cin >> n >> m;
    vector<dot> arr(m + 1);
    ll sum = 0;

    for (int i = 1; i <= m; i++)
        cin >> arr[i].x;

    for (int i = 1; i <= m; i++)
    {
        cin >> arr[i].c;
        sum += arr[i].c;
    }

    // �ж��Ƿ�Ϸ�
    if (sum != n)
    {
        cout << -1 << endl;
        return;
    }
    sort(arr.begin() + 1, arr.end(), cmp);
    // ����ǰ׺��
    ll now_tot = 0;
    for (int i = 1; i <= m; i++)
    {
        if (now_tot < arr[i].x - 1) // �������ǰ׺��С��x-1��˵��ǰ���ʯ�Ӹ��ǲ���x-1
        {
            cout << -1 << endl;
            return;
        }
        now_tot += arr[i].c;
    }
    // ����
    ll ans = n * (0 + n - 1) / 2; // ����n��ʯ�Ӷ���1λ��,���۾���0+1+2+3+...+n-1
    for (int i = 1; i <= m; i++)
        ans -= (arr[i].x - 1) * arr[i].c; // ��ȥʵ��λ��*ʯ������

    cout << ans << endl;
}
int main()
{
    sol();
    return 0;
}
