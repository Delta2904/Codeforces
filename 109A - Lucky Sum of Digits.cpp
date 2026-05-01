// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: Training
// Tags         : brute force/dp/*800
// Problem      : 109A - Lucky Sum of Digits (https://codeforces.com/contest/109/problem/A)
// Date         : 21-04-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s;

    while (n >= 0) {
        if (n % 7 == 0) {
            int remainingSeven = n / 7;
            while (remainingSeven--) s += '7';
            cout << s << '\n';
            return;
        } else {
            s += '4';
            n -= 4;
        }
    }

    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //int t; cin >> t;
    //while (t--) solve();

    solve();

    return 0;
}
