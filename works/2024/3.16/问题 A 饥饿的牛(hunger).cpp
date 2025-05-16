#include <bits/stdc++.h>
using namespace std;
const int maxm = 2005;
int dp[maxm];
struct food
{
    int x;
    int y;
    int total;
};
bool cmpare(food a , food b)
{
    return  a.y < b.y;
}
int main()
{
    int n;
    cin >> n;
    food s[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> s[i].x >> s[i].y;
        s[i].total = s[i].y - s[i].x + 1; //��������Ԫ�ظ���
    }
    sort(s,s+n,cmpare);
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = s[n-1].y ; j >= s[i].y ; j--)
            dp[j] = max(dp[j],dp[s[i].x-1] + s[i].total);
    }
    cout << dp[s[n-1].y];
    return 0;
}

