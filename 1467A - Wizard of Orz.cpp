// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 4 - Mixed
// Tags         : constructive algorithms/greedy/math*/900
// Problem      : 1467A - Wizard of Orz (https://codeforces.com/problemset/problem/1467/A)
// Date         : 19-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s;
    int a = 8;
    s += '9';

    for (int i = 2; i <= n; i++) {
        s += to_string(a);
        a++;
        if (a == 10) a = 0;
    }

    cout << s << "\n";
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
