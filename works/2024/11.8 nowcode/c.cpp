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
        // С���ȫ����
        for (auto &monster : monsters) {
            monster--;
        }
        // ����1�ĵ�����
        auto max_it = max_element(monsters.begin(), monsters.end());
        if (max_it!= monsters.end()) {
            (*max_it)--;
        }
        // ����2�ķ�Χ����
        max_it = max_element(monsters.begin(), monsters.end());
        if (max_it!= monsters.end()) {
            (*max_it)--;
        }
        if (max_it!= monsters.begin()) {
            (*(max_it - 1))--;
        }
        // �Ƴ��������Ĺ���
        monsters.erase(remove_if(monsters.begin(), monsters.end(), [](int x) { return x <= 0; }), monsters.end());
    }

    cout << rounds << endl;
    return 0;
}
