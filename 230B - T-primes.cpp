#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> tPrimes;

void generateTprimes() {
    vector<bool> criba(1e6 + 1, true);
    criba[0] = criba[1] = false;

    for (ll i = 2; i * i <= 1e6; i++) {
        if (criba[i]) {
            for (ll j = i * i; j <= 1e6; j += i) {
                criba[j] = false;
            }
        }
    }

    for (ll i = 2; i <= 1e6; i++) {
        if (criba[i]) {
            ll tPrime = i * i;
            if (tPrime > 1e12) break;
            tPrimes.push_back(tPrime);
        }
    }
}

void solve(int n) {
    vector<ll> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (binary_search(tPrimes.begin(), tPrimes.end(), x[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    generateTprimes();
    solve(n);

    return 0;
}
