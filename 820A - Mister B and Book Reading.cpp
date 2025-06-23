// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 2 - random
// Tags         : implementation/*900
// Problem      : 820A - Mister B and Book Reading (https://codeforces.com/contest/820/problem/A)
// Date         : 21-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;
    int sum = v0, i = 1;

    if (sum >= c) {
        cout << i << '\n';
        return;
    }

    while (sum < c) {
        sum -= l;
        if ((v0 + i * a) <= v1) {
            sum += v0 + a * i;
        } else {
            sum += v1;
        }

        if (sum >= c) {
            cout << i + 1 << "\n";
            return;
        }
        i++;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    /*
    int t; cin >> t;
    while (t--) {
        solve();
    }
    */

    solve();

    return 0;
}
