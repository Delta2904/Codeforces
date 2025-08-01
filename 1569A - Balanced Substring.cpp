// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: implementation/*800 - ThemeCP Level 2
// Problem      : 1569A - Balanced Substring (https://codeforces.com/contest/1569/problem/A)
// Date         : 18-06-2025
// Note         : You need to keep in mind the complexity of the solution
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; string s;
    cin >> n >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            cout << i + 1 << " " << i + 2 << "\n";
            return;
        }
    }

    cout << "-1 -1\n";
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
