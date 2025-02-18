#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    string s;
    cin >> s;
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (s[i] == s[i + 1] && i <= n - 2) total +=2;
            else if (s[i] == s[i + 2] && i <= n - 3) total +=1;
        }
    }

    cout << total << "\n";
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
