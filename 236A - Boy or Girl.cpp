#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    set<char> bog;
    for (int i = 0; i < s.size(); i++) {
        bog.insert(s[i]);
    }

    if (bog.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    solve(s);

    return 0;
}