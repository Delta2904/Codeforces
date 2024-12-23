#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    set<char> a;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            a.insert(s[i]);
        }
    }

    cout << a.size() << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}