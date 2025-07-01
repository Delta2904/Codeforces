// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 2 - Math
// Tags         : greedy/math/*800
// Problem      : 1834A - Unit Array (https://codeforces.com/contest/1834/problem/A)
// Date         : 22-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, pos = 0, neg = 0, sol = 0; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) pos++;
        else neg++;
    }

    while (neg > pos) {
        sol++;
        neg--; pos++;
    }

    if (neg % 2 == 1) {
        sol++;
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
