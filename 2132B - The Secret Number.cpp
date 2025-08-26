// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1043 (Div. 3)
// Problem      : 2132B - The Secret Number (https://codeforces.com/contest/2132/problem/B)
// Date         : 21-08-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> ans;
    for (int k = 1; k <= 18; k++) {
        ll d = 1;
        for (int i = 0; i < k; i++) d *= 10;
        d += 1;
        if (d > n) break;
            if (n % d == 0) {
            ans.push_back(n / d);
        }
    }
    if (ans.empty()) {
        cout << 0 << "\n";
    } else {
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}