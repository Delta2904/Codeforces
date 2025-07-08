// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1034 (Div. 3)
// Problem      : 2123C - Prefix Min and Suffix Max (https://codeforces.com/contest/2123/problem/C)
// Date         : 01-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, mn = INT_MAX, mx = INT_MIN; cin >> n;
    vector<int> a(n);
    vector<char> s(n, '0');
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        mn = min(mn, a[i]);
        if (mn == a[i]) s[i] = '1';
    }
    for (int i = n - 1; i >= 0; i--) {
        mx = max(mx, a[i]);
        if (mx == a[i]) s[i] = '1';
    }

    for (int i = 0; i < n; i++) cout << s[i];
    cout << "\n";
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