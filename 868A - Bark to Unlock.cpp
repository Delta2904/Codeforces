// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: Training
// Tags         : brute force/implementation/strings/*900
// Problem      : 868A - Bark to Unlock (https://codeforces.com/problemset/problem/868/A)
// Date         : 06-01-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n; cin >> n;
    int l = 0, r = 0;

    for (int i = 0; i < n; i++) {
        string temp; cin >> temp;
        if (s[0] == temp[1]) l = 1;
        if (s[1] == temp[0]) r = 1;
        if (s == temp) {
            l = 1; r = 1;
        }
    }

    if (l + r == 2) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //int t; cin >> t;
    //while (t--) solve();

    solve();

    return 0;
}
