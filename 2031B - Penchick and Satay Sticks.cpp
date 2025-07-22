// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 4 - Mixed
// Tags         : brute force/greedy/sortings/*900
// Problem      : 2031B - Penchick and Satay Sticks (https://codeforces.com/problemset/problem/2031/B)
// Date         : 19-07-2025
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

    for (int i = 0 ; i < n - 1; i++) {
        if (a[i] == i + 1) continue;
        else if (a[i] == i + 2 && a[i + 1] == i + 1) {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        else {
            cout << "No\n";
            return;
        }
        
    }

    cout << "Yes\n";
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
