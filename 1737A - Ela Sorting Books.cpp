// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 3 - Mixed
// Tags         : greedy/implementation/strings/*900
// Problem      : 1737A - Ela Sorting Books (https://codeforces.com/problemset/problem/1737/A)
// Date         : 07-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string str, ans = ""; cin >> str;
    vector <int> count_char(26, 0);
    for (char c: str) count_char[c - 'a']++;
    
    for (int i = 0; i < min(25, n/k); i++) {
        while (k - ans.size() > count_char[i]) {
            ans.push_back(i + 'a');
        }
    }

    char c = 'a' + min(n / k, 25);
    while (k > ans.size()) {
        ans += c;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
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
