#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll k) {
    if (k <= ((n + 1) / 2)) {
        cout << (k * 2) - 1 << endl;    
    } else {
        if (n % 2 == 0) {
            cout << (k - (n / 2)) * 2 << endl;
        } else {
            cout << (k - ((n / 2) + 1)) * 2 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    solve(n, k);

    return 0;
}
