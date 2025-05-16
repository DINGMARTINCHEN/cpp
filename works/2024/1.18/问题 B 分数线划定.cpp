#include <bits/stdc++.h>
using namespace std;
struct players
{
    long long num;
    int score;
};
bool compare(players a, players b)
{
    if (a.score > b.score)
    {
        return true;
    }
    else if (a.score == b.score && a.num < b.num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    players player[5009];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> player[i].num >> player[i].score;
    }
    sort(player, player + n, compare);
    int sum;
    sum = ceil(m * 1.5);
    cout << player[sum - 1].score << " " << sum << endl;
    for (int i = 0; i < sum; i++)
    {
        cout << player[i].num << " " << player[i].score << endl;
    }
    if (player[sum].score == player[sum - 1].score)
    {
        cout << player[sum].num << " " << player[sum].score << endl;
    }
}