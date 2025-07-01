// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 1 - Mixed
// Tags         : constructive algorithms/greedy/*800
// Problem      : 1780A - Hayato and School (https://codeforces.com/problemset/problem/1780/A)
// Date         : 30-06-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even.push_back(i + 1);
        } else {
            odd.push_back(i + 1);
        }
    }

    if (even.size() >= 2 && odd.size() >= 1) {
        cout << "Yes\n";
        for (int i = 0; i < 2; i++) {
            cout << even[i] << " ";
        } 
        for (int i = 0; i < 1; i ++) {
            cout << odd[i] << " ";
        } cout << "\n";
        return;
    } else if (odd.size() >= 3) {
        cout << "Yes\n";
        for (int i = 0; i < 3; i ++) {
            cout << odd[i] << " ";
        } cout << "\n";
        return;
    } cout << "No\n";
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
