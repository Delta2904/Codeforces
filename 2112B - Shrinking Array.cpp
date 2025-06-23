// Codeforces | Contest Mode
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// Contest      : Educational Codeforces Round 180 (Rated for Div. 2)
// Problem      : 2112B - Shrinking Array (https://codeforces.com/contest/2112/problem/B)
// Date         : 23-06-2025
//
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    bool beautiful = false;
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (abs(a[i] - a[i - 1]) <= 1) beautiful = true;
    }

    if (beautiful) cout << "0\n";
    else {
        for (int i = 1; i < n - 1; i++) {
            int mini = min(a[i], a[i - 1]);
            int maxi = max(a[i], a[i - 1]);

            if (mini - 1 <= a[i + 1] && a[i + 1] + 1 <= maxi + 1) {
                cout << "1\n";
                return;
            } 
        }
        reverse(a.begin(), a.end());
        for (int i = 1; i < n - 1; i++) {
            int mini = min(a[i], a[i - 1]);
            int maxi = max(a[i], a[i - 1]);

            if (mini - 1 <= a[i + 1] && a[i + 1] + 1 <= maxi + 1) {
                cout << "1\n";
                return;
            } 
        }
        cout << "-1\n";
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
