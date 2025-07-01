// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 1 - Random
// Tags         : implementation/*800
// Problem      : 1618B - Missing Bigram (https://codeforces.com/contest/1618/problem/B)
// Date         : 25-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> s(n - 2);
    for (int i = 0; i < n; i++) cin >> s[i];
    string ans;

    for (int i = 0; i < n - 3; i++) {
        if (s[i][1] != s[i + 1][0]) {
            ans.push_back(s[i][0]);
            ans.push_back(s[i + 1][0]);
        }
    }

    if (s.size() != n - 1) {
        
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
