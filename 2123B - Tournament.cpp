// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1034 (Div. 3)
// Problem      : 2123B - Tournament (https://codeforces.com/contest/2123/problem/B)
// Date         : 01-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, j, k; cin >> n >> j >> k;
    vector<int> a;
    a.push_back(0);
    int strength, mx = -1;
    for (int i = 1; i <=n; i++) {
        int x; cin >> x; a.push_back(x);
        if (i == j) strength = a[i];
        mx = max(mx, x);
    }

    if (k == 1) {
        if (strength == mx) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    } else {
        cout << "Yes\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
