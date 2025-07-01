// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 2 - Math
// Tags         : implementation/math/*800
// Problem      : 1326B - Maximums (https://codeforces.com/contest/1834/problem/A)
// Date         : 22-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int maxi = 0;
    
    for (int i = 0; i < n; i++) {
        cout << a[i] + maxi << " ";
        maxi = max(maxi, a[i] + maxi);
    }

    cout << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    /*
    int t; cin >> t;
    while (t--) {
        solve();
    }
    */

    solve();

    return 0;
}
