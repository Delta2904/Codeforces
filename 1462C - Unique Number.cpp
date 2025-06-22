// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: brute force/greedy/math/*900 - ThemeCP Level 3
// Problem      : 1462C - Unique Number (https://codeforces.com/contest/1462/problem/C)
// Date         : 20-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x; cin >> x;

    if (x < 10) {
        cout << x << "\n";
        return;
    } else if (x <= 45) {
        string s;
        int accum = 0;

        for (int i = 9; i > 0; i--) {
            if (accum + i <= x) {
                s.append(to_string(i));
                accum += i;
            }

            if (x == accum) break;
        }

        reverse(s.begin(), s.end());
        cout << s << "\n";
        return;
    } else {
        cout << "-1\n";
        return;
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
