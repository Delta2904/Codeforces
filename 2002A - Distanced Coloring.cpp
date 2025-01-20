#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll m, ll k) {
    if (n <= k && m <= k) {
        cout << n * m << endl;
        return;
    } else if (k <= m && k <= n) {
        cout << k * k << endl;
        return;
    } else if (n <= k && m > k) {
        cout << n * k << endl;
        return;
    } else if (m <= k && n > k) {
        cout << m * k << endl;
        return;
    } else {
        cout << n * m << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;

        solve(n, m, k);
    }

    return 0;
}
