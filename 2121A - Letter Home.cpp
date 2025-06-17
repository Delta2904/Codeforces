// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1032 (Div. 3)
// Problem      : 2121A - Letter Home (https://codeforces.com/contest/2121/problem/A)
// Date         : 17-06-2025
// Note         : Place more attention to the limits, read the problem twice
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int s) {
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    if (x[0] < s && s < x[n - 1]) {
        int l, r;
        l = s - x[0];
        r = x[n - 1] - s;

        cout << 2 * min(l, r) + max(l, r) << "\n";
    } else {
        int m = max(s - x[0], x[n - 1] - s);
        cout << m << "\n";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        solve(n, s);
    }

    return 0;
}
