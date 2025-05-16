#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

vector<int> add(string s1, string s2) {
    vector<int> c;
    int t = 0;
    int i = s1.size() - 1, j = s2.size() - 1;
    while (i >= 0 || j >= 0 || t) {
        int temp = t;
        if (i >= 0) {
            temp += s1[i] - '0';
            i--;
        }
        if (j >= 0) {
            temp += s2[j] - '0';
            j--;
        }
        c.push_back(temp % 10);
        t = temp / 10;
    }
    return c;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> c = add(s1, s2);
    reverse(c.begin(), c.end()); // 反转结果以便正序输出
    for (int num : c) {
        cout << num;
    }
    return 0;
}
