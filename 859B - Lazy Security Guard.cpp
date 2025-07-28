// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 5 - Mixed
// Tags         : brute force/geometry/math/*1000
// Problem      : 859B - Lazy Security Guard (https://codeforces.com/contest/859/problem/B)
// Date         : 27-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    int a, b;
    a = sqrt(n);
    b = (n + a - 1) / a;

    cout << 2 * (a + b) << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //int t; cin >> t;
    //while (t--) 
    solve();
    return 0;
}
