// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 5 - Mixed
// Tags         : greedy/implementation/*900
// Problem      : 1150B - Tiling Challenge (https://codeforces.com/contest/1150/problem/B)
// Date         : 27-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<string> board(n);
    for (int i = 0; i < n; ++i) cin >> board[i];

    const vector<pair<int,int>> d = {{0,0},{1,-1},{1,0},{1,1},{2,0}};

    for (int r = 0; r <= n - 3; ++r) {
        for (int c = 1; c <= n - 2; ++c) {
            bool ok = true;
            for (auto p : d) {
                int dr = p.first, dc = p.second;
                if (board[r+dr][c+dc] != '.') { ok = false; break; }
            }
            if (ok) {
                for (auto p : d) {
                    int dr = p.first, dc = p.second;
                    board[r+dr][c+dc] = '#';
                }
            }
        }
    }

    for (auto &row : board)
        if (row.find('.') != string::npos) { cout << "No\n"; return; }

    cout << "Yes\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //int t; cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}
