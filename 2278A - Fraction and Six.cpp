// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1131 (Div. 3)
// Problem      : 2278A - Fraction and Six (https://codeforces.com/contest/2278/problem/A)
// Date         : 31-10-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    unordered_map<char, int> count;
    bool S = false;
    bool I = false;
    bool X = false;

    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    for (int i = 0; i < m; i++) {
        count[b[i]]--;
    }

    for (auto it : count) {
        if (it.first == 's' && it.second == 1) {
            S = true;
        } else if (it.first == 'i' && it.second == 1) {
            I = true;
        } else if (it.first == 'x' && it.second == 1) {
            X = true;
        } else if (it.second != 0) {
            cout << "NO\n";
            return;
    }
}

    if (S && I && X) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}