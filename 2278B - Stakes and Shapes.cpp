// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderon (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1131 (Div. 3)
// Problem      : 2278B - Stakes and Shapes (https://codeforces.com/contest/2278/problem/B)
// Date         : 31-10-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;


void solve() {
    int x, y, z; cin >> x >> y >> z;

    if (x >= y && x >= z) {
        for (int i = 0; i < x + y + z; i++) {
            cout << "P";
        }
    } else if (y >= x && y >= z) {
        for (int i = 0; i < x + y + z; i++) {
            cout << "R";
        }
    } else if (z >= x && z >= y) {
        for (int i = 0; i < x + y + z; i++) {
            cout << "S";
        }
    } 
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}