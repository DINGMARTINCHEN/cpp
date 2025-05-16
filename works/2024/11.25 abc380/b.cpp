#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string a;
    getline(cin, a);
    a = a.substr(1, a.length() - 2);
    istringstream iss(a);
    string b;
    vector<int> lengths;
    
    while (getline(iss, b, '|')) {
        lengths.push_back(b.length());
    }
    
    for (size_t i = 0; i < lengths.size(); ++i) {
        if (i > 0) cout << ' ';
        cout << lengths[i];
    }
    
    return 0;
}