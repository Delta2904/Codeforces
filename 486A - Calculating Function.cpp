#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n) {
    ll sol;

    if (n % 2 == 0) {
        sol = n / 2;
    } else {
        sol = -(n + 1) / 2;
    }

    return sol;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}