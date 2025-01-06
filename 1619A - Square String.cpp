#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
    if (s.size() % 2 == 0) {
        int i = 0;
        for (size_t j = s.size() / 2; j < s.size(); j++) {
            if (s[i] == s[j]) {
                i++;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    } else {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        solve(s);
    }

    return 0;
}
