#include <bits/stdc++.h>
using namespace std;

void solve(int k) {
    if (k % 2 == 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        solve(k);
    }

    return 0;
}
