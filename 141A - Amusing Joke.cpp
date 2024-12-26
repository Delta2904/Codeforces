#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string master, string s) {
    sort(master.begin(), master.end());
    sort(s.begin(), s.end());

    if (master.size() == s.size()) {
        for (size_t i = 0; i < s.size(); i++) {
            if (master[i] != s[i]) {
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

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    solve(s1 + s2, s3);

    return 0;
}
