// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: brute force/constructive algorithms/math/*800 - ThemeCP Level 3
// Problem      : 1851A - Escalator Conversations (https://codeforces.com/contest/1851/problem/A)
// Date         : 20-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k, H; cin >> n >> m >> k >> H;
    int sol = 0;
    
    for (int i = 0; i < n; i++) {
        int h, diff;
        cin >> h;
        diff = abs(H - h);

        if (H != h && diff % k == 0 && (diff / k) <= m - 1) sol++;
    }

    cout << sol << "\n";
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
