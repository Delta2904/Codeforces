// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: brute force/greedy/sortings/*800 - ThemeCP Level 2
// Problem      : 1734A - Select Three Sticks (https://codeforces.com/contest/1734/problem/A)
// Date         : 19-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int mini = INT_MAX;
    
    for (int i = 1; i < n - 1; i++) {
        mini = min((a[i] - a[i - 1]) + (a[i + 1] - a[i]), mini);
    }
    
    cout << mini << "\n";
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
