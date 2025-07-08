// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 3 - Mixed
// Tags         : geometry/greedy/implementation/*800
// Problem      : 1713A - Traveling Salesman Problem (https://codeforces.com/problemset/problem/1713/A)
// Date         : 07-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int mxX = 0, mxY = 0, mnX = 0, mnY = 0;
    
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        mxX = max(a, mxX);
        mxY = max(b, mxY);
        mnX = min(a, mnX);
        mnY = min(b, mnY);
    }

    cout << (mxX + mxY - mnX - mnY) * 2 << "\n";
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
