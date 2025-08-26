// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1043 (Div. 3)
// Problem      : 2132C1 - The Cunning Seller (easy version) (https://codeforces.com/contest/2132/problem/C1)
// Date         : 21-08-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<ll,ll>> pow3(25);

void precompute_pow3 () {
    pow3[0].first = 1;
    pow3[0].second = 3;
    for (ll i = 1; i < 25; i++) pow3[i].first = pow3[i - 1].first * 3LL;
    for (ll i = 1; i < 25; i++) pow3[i].second = pow3[i + 1].first + (i * pow3[i - 1].first);
}

void solve() {
    ll n, res = 0; cin >> n;

    int k = 0;
        while (n > 0) {
            ll ak = (n % 3);
            n /= 3;
            if (ak) {
                res += ak * pow3[k].second;
            }
            k++;
        }

        cout << res << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_pow3();
    int t; cin >> t;
    while (t--) solve();

    return 0;
}