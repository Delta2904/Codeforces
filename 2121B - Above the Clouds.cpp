// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Codeforces Round 1032 (Div. 3)
// Problem      : 2121B - Above the Clouds (https://codeforces.com/contest/2121/problem/B)
// Date         : 17-06-2025
// Note         : Work with positions as they are key in this problem
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    string s;
    cin >> s;

    if (n == 3) {
        char a, b, c;
        a = s[0];
        b = s[1];
        c = s[2];

        if (b == a || b == c) {
            cout << "Yes\n";
            return;
        } else {
            cout << "No\n";
            return;
        }
    } else {
        string a, b, c;

        for (int i = 1; i <= n - 2; i++) {
            a = s.substr(0, i);
            b = s.substr(i, 1);
            c = s.substr(i + 1);

            if (a.find(b) != string::npos || c.find(b) != string::npos) {
                cout << "Yes\n";
                return;
            } 
        }

        cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
