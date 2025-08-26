// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1043 (Div. 3)
// Problem      : 2132A - Homework (https://codeforces.com/contest/2132/problem/A)
// Date         : 21-08-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, m;
    string a, b, c;
    cin >> n >> a >> m >> b >> c;

    for (int i = 0; i < c.size(); i++) {
        if (c[i] == 'V') {
            string temp = a;
            a = b[i] + temp;
        } else {
            a += b[i];
        }
    }
    
    cout << a << '\n';
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