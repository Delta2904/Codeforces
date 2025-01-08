#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isTprime(ll x) {
    if (x <= 1) return false;

    ll root = sqrt(x);
    if (root * root != x) return false;

    for (ll i = 2; i * i <= root; i++) {
        if (root % i == 0) return false;
    }

    return true; 

}

void solve(int n) {
    vector<ll> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (isTprime(x[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
