#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll k) {
    if (n % 2 == 0 || k == 1) {
        cout << "YES\n";
    } else if (n % 2 != 0 && k % 2 != 0 && k <= n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        solve(n, k);
    }

    return 0;
}
