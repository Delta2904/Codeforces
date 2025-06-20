// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: strings/*900 - ThemeCP Level 2
// Problem      : 1606A - AB Balance (https://codeforces.com/contest/1606/problem/A)
// Date         : 19-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    
    if (s[0] == s[s.size() - 1]) {
        cout << s << "\n";
    } else {
        if (s[0] == 'a') {
            s[0] = 'b';
            cout << s << '\n';
        } else {
            s[0] = 'a';
            cout << s << '\n';
        }
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
