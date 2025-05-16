#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> monsters(n);
    for (int i = 0; i < n; i++) {
        cin >> monsters[i];
    }

    int rounds = 0;
    while (!monsters.empty()) {
        rounds++;
        // 小红的全体打击
        for (auto &monster : monsters) {
            monster--;
        }
        // 队友1的单体打击
        auto max_it = max_element(monsters.begin(), monsters.end());
        if (max_it!= monsters.end()) {
            (*max_it)--;
        }
        // 队友2的范围攻击
        max_it = max_element(monsters.begin(), monsters.end());
        if (max_it!= monsters.end()) {
            (*max_it)--;
        }
        if (max_it!= monsters.begin()) {
            (*(max_it - 1))--;
        }
        // 移除已死亡的怪物
        monsters.erase(remove_if(monsters.begin(), monsters.end(), [](int x) { return x <= 0; }), monsters.end());
    }

    cout << rounds << endl;
    return 0;
}
