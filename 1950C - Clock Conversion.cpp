// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 2 - Math
// Tags         : implementation/math/*800
// Problem      : 1950C - Clock Conversion (https://codeforces.com/contest/1950/problem/C)
// Date         : 22-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;

    if (s[0] == '0') {
        if (s[1] == '0') {
            s[0] = '1';
            s[1] = '2';
            cout << s << " AM\n";
        } else {
            cout << s << " AM\n";
        }
    } else if (s[0] == '1') {
        if (s[1] == '0' || s[1] == '1') {
            cout << s << " AM\n";
        } else {
            if (s[1] == '2') {
                cout << s << " PM\n";
            } else {
                int num = stoi(s.substr(0,2));
                num -= 12;
                if (num >= 10) {
                    cout << num << s.substr(2) << " PM\n";
                } else {
                    cout << "0" << num << s.substr(2) << " PM\n";
                }
            }
        }
    } else {
        int num = stoi(s.substr(0,2));
        num -= 12;
        if (num >= 10) {
            cout << num << s.substr(2) << " PM\n";
        } else {
            cout << "0" << num << s.substr(2) << " PM\n";
        }
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
