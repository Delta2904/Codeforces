// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: Training
// Tags         : brute force/implementation/*1000
// Problem      : 379A - New Year Candles (https://codeforces.com/contest/379/problem/A)
// Date         : 16-04-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    int hours = 0, leftover = 0;

    while (true) {
        hours += a;
        leftover += a;
        a = leftover / b;
        leftover %= b;

        if (leftover < b && a == 0) break;
    }

    cout << hours << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //int t; cin >> t;
    //while (t--) solve();

    solve();

    return 0;
}
