// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 5 - Mixed
// Tags         : constructive algorithms/implementation/*900
// Problem      : 2085A - Serval and String Theory (https://codeforces.com/contest/2085/problem/A)
// Date         : 27-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    if (s < reversed_s || (k >= 1 && *min_element(s.begin(), s.end()) != *max_element(s.begin(), s.end()))) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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
