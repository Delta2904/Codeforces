// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: math/*900 - ThemeCP Level 3
// Problem      : 2094C - Brr Brrr Patapim (https://codeforces.com/contest/2094/problem/C)
// Date         : 17-06-2025
// Note         : This was easy as it only require you to understand how to sort correctly
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<vector<int>> G(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> G[i][j];

    vector<int> perm(2 * n + 1, -1);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            perm[i + j + 2] = G[i][j];
        }
    }

    set<int> s;
    for (int i = 2; i <= 2 * n; ++i) {
        s.insert(perm[i]);
    }

    int missing = -1;
    for (int i = 1; i <= 2 * n; ++i) {
        if (s.find(i) == s.end()) {
            missing = i;
        }
    }

    cout << missing << " ";
    for (int i = 2; i <= 2 * n; ++i) {
        cout << perm[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}
