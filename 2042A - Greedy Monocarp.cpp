#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, sol = 0, total = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        total += a[i];

        if (total == k) {
            cout << 0 << endl;
            return;
        } else if (total > k) {
            total -= a[i];
            break;
        }
    }

    cout << k - total << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}