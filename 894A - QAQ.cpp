// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: Training
// Tags         : brute force/dp/*800
// Problem      : 894A - QAQ (https://codeforces.com/contest/894/problem/A)
// Date         : 16-04-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'Q') {
            for (int j = i; j < s.size(); j++) {
                if (s[j] == 'A') {
                    for (int k = j; k < s.size(); k++) {
                        if (s[k] == 'Q') sum++;
                    }
                }
            }
        }
    }

    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //int t; cin >> t;
    //while (t--) solve();

    solve();

    return 0;
}
