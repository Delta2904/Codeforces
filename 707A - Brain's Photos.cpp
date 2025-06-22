// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: implementation/*800 - ThemeCP Level 2
// Problem      : 707A - Brain's Photos (https://codeforces.com/contest/707/problem/A)
// Date         : 18-06-2025
// Note         : Read carefully all the inputs so that you understand them
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m) {
    for (int i = 0; i < n * m; ++i) {
        char c; cin >> c;
        if (c == 'C' || c == 'M' || c == 'Y') {
            cout << "#Color\n";
            return;
        }
    }
    cout << "#Black&White\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    /*int t; cin >> t;
    while (t--) {
        
    }*/

    int n, m; cin >> n >> m;
    solve(n, m);

    return 0;
}
