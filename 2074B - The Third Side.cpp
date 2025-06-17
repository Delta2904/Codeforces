// 😺 Codeforces | ThemeCP Training 😺
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: geometry/greedy/math - ThemeCP Level 3
// Problem      : 2074B - The Third Side (https://codeforces.com/contest/2074/problem/B)
// Date         : 16-06-2025
// Note         : Need to understand a bit better how the priority queue works
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    priority_queue<int, vector<int>, greater<int>> a;
    int d;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push(x);
    }

    if (a.size() == 1) {
        cout << a.top() << "\n";
        return;
    } else {
        while (a.size() >= 2) {
            int b, c;
            b = a.top();
            a.pop();
            c = a.top();
            a.pop();
            d = b + c - 1;
            a.push(d);
        }
        cout << a.top() << "\n";
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
