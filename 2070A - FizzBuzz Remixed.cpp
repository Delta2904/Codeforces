#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n) {
    ll fizzBuzzRemixed = 0;

    if (n == 0) {
        cout << "1\n";
        return;
    } else if (n == 1) {
        cout << "2\n";
        return;
    } else if (n == 2) {
        cout << "3\n";
        return;
    } else if (n == 15) {
        cout << "4\n";
        return;
    }
    
    fizzBuzzRemixed += (n / 15) * 3;
    ll temp15 = n % 15;
    for (int i = 1; i <= temp15; i++) {
        if (i % 3 == i % 5) fizzBuzzRemixed++;
    }

    cout << fizzBuzzRemixed + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        solve(n);
    }

    return 0;
}
