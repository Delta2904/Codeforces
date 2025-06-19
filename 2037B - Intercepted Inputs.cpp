// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: greedy/implementation/*800 - ThemeCP Level 1
// Problem      : 2037B - Intercepted Inputs (https://codeforces.com/contest/2037/problem/B)
// Date         : 19-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; cin >> k;
    vector<int> a(k);
    map<int, int> freq;
    int target = k - 2;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    for (int i = 1; i <= sqrt(target); i++) {
        if (target % i) continue;

        int n = i;
        int m = target / i;

        if (n == m) {
            if (n <= k && freq[n] >= 2) {
                cout << n << ' ' << m << '\n';
                return;
            }
        } else {
            if (n <= k && m <= k && freq[n] && freq[m]) {
                cout << n << ' ' << m << '\n';
                return;
            }
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
