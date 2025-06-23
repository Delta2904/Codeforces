// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 2 - Math
// Tags         : math/*800
// Problem      : 1255A - Changing Volume (https://codeforces.com/contest/1255/problem/A)
// Date         : 22-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    int sol = 0;

    if (a == b) {
        cout << "0\n";
        return;
    } else {
        int diff = abs(b - a);

        while (diff) {
            if (diff >= 5) {
                sol += diff / 5;
                diff = diff % 5;
                
            } else if (diff >= 2) {
                sol += diff / 2;
                diff = diff % 2;
            } else {
                diff--; sol++;
            }
        }
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
