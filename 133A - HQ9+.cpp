#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s; 
    cin >> s;
    bool HQ9 = false;

    for (size_t i = 0; i < s.size(); i++) {
        if (33 <= s[i] && 126 >= s[i]) {
            if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
                HQ9 = true;
            } else {
                continue;
            }
        } else {
            cout << "NO" << endl;
            return;
        }
    }

    HQ9 ? cout << "YES" << endl : cout << "NO" << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
