// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: brute force/implementation/*800 - ThemeCP Level 1
// Problem      : 888A - Local Extrema (https://codeforces.com/contest/888/problem/A)
// Date         : 19-06-2025
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
    int sol = 0;

    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i + 1] < a[i]) sol++;
        else if (a[i - 1] > a[i] && a[i + 1] > a[i]) sol++;
    }

    cout << sol << "\n";
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
