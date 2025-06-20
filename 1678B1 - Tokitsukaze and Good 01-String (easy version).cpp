// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: implementation/*800 - ThemeCP Level 2
// Problem      : 1678B1 - Tokitsukaze and Good 01-String (easy version) (https://codeforces.com/contest/1678/problem/B1)
// Date         : 19-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int sol = 0;

    for (int i = 0; i < n; i+=2) {
        if (s[i] != s[i + 1]) sol++;
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
