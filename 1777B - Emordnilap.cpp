// 😺 Codeforces | ThemeCP Training 😺
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: combinatorics/greedy/math - ThemeCP Level 3
// Problem      : 1777B - Emordnilap (https://codeforces.com/contest/1777/problem/B)
// Date         : 16-06-2025
// Note         : Need to practice more on math theory for combinatronics 
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> fact(10e5);
const int MOD = 1e9+7;

void factorial() {
    fact[0] = 1;
    for (int i = 1; i < 10e5; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
}

void solve(int n) {
    ll res = fact[n];
    res = (res * n) % MOD;
    res = (res * (n-1)) % MOD;

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    factorial();

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
