#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int n, x;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s.push(x);
        while (s.size() >= 2) {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            if (a != b) {
                s.push(b);
                s.push(a);
                break;
            } else {
                s.push(a + 1);
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}
