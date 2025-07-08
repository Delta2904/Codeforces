// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 3 - Mixed
// Tags         : greedy/strings/*900
// Problem      : 1107A - Digits Sequence Dividing (https://codeforces.com/problemset/problem/1107/A)
// Date         : 07-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    if (n == 2 && s[0] < s[1]) {
        cout << "YES\n" << "2\n" << s[0] << " " << s[1] << "\n";
    } else if (n > 2) {
        cout << "YES\n" << "2\n" << s[0] << " ";
        for (int i = 1; i < n; i++) {
            cout << s[i];
        } cout << "\n";
    } else {
        cout << "NO\n";
    }
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
