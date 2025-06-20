// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: implementation/math/strings/*800 - ThemeCP Level 2
// Problem      : 2000A - Primary Task (https://codeforces.com/contest/2000/problem/A)
// Date         : 19-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; s = to_string(n);

    if (s.size() <= 2) {
        cout << "No\n"; 
        return; 
    }
    
    if (s[0] == '1' && s[1] == '0') {
        if (s.size() == 3) {
            if (s[2] == '0' || s[2] == '1') {
                cout << "No\n"; 
                return;
            } else {
                cout << "Yes\n";
                return;
            }
        } else {
            if (s[2] == '0') {
                cout << "No\n"; 
                return;
            } else {
                cout << "Yes\n";
                return;
            }
        }
    } else cout << "No\n";
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
