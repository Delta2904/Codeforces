// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: Training
// Tags         : brute force/implementation/strings/*900
// Problem      : 271A - Beautiful Year (https://codeforces.com/problemset/problem/271/A)
// Date         : 01-05-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve(int y) {
    for (int i = y + 1; i <= INT_MAX; i++) {
        int a = i / 1000;
        int b = (i / 100) % 10;
        int c = (i / 10) % 10;
        int d = i % 10;

        if (a == b || a == c || a == d || b == c || b == d || c == d) {
            continue;
        } else {
            cout << i << '\n';
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y;
    cin >> y;

    solve(y);

    return 0;
}
