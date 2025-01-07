#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    string s;
    cin >> s;

    size_t pos = s.find("...");
    if (pos != string::npos) {
        cout << 2 << endl;
    } else {
        int pCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                pCount++;
            }
        }

        if (pCount == 0) {
            cout << 0 << endl;
        } else {
            cout << pCount << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
