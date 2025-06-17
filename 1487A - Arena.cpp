// 😺 Codeforces | ThemeCP Training 😺
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: implementation/sortings - ThemeCP Level 3
// Problem      : 1487A - Arena (https://codeforces.com/contest/1487/problem/A)
// Date         : 16-06-2025
// Note         : This was easy as it only require you to understand how to sort correctly
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int count = 0;

    sort(a.begin(), a.end(), greater<int>());

    for (int j = 0; j < n; j++) {
        if (a[j] > a[n - 1]) {
            count++;
        }
    }

    cout << count << "\n";
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
