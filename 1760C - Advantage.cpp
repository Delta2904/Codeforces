// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: data structures/implementation/sortings/*800 - ThemeCP Level 2
// Problem      : 1760C - Advantage (https://codeforces.com/contest/1760/problem/C)
// Date         : 18-06-2025
// Note         : Read carefully all the inputs so that you understand them
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<ll> s(n);
    ll max1 = -1, max2 = -1;
    int cnt_max1 = 0;
    for (int i = 0; i < n; i++) { 
        cin >> s[i];
        if (s[i] > max1) {
            max2 = max1;
            max1 = s[i];
            cnt_max1 = 1;
        } else if (s[i] == max1) {
            cnt_max1++;
        } else if (s[i] > max2) {
            max2 = s[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == max1) {
            ll other = (cnt_max1 > 1) ? max1 : max2;
            cout << s[i] - other << " ";
        } else {
            cout << s[i] - max1 << " ";
        }
    }
    cout << "\n";
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
