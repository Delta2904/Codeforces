// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1044 (Div. 2)
// Problem      : 2133A - Redstone (https://codeforces.com/contest/2133/problem/A)
// Date         : 24-08-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    int n; cin >> n;
    map<int, int> a;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }

    for (auto &x : a) {
        if (x.second >= 2) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}