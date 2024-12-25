#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n) {
    ll sol = 1;
    
    while (n > 3) {
        sol *= 2;
        n /= 4;
    }

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        solve(n);
    }

    return 0;
}
