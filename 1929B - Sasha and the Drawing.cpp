// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 1 - Mixed
// Tags         : constructive algorithms/greedy/math/*800
// Problem      : 1929B - Sasha and the Drawing (https://codeforces.com/problemset/problem/1929/B)
// Date         : 01-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    
    if (k <= ((2 * n) - 2) * 2) {
        cout << (k + 1) / 2 << "\n";
    } else {
        cout << (k / 2) + 1 << "\n";
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
