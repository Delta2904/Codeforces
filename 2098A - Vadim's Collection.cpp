// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 4 - Mixed
// Tags         : brute force/greedy/*800
// Problem      : 2098A - Vadim's Collection (https://codeforces.com/problemset/problem/2098/A)
// Date         : 19-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    string sol;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (10 - i - 1<= s[j] - '0') {
                sol += s[j];
                s[j] = '\0';
                break;
            }
        }
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
