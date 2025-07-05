// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: ThemeCP Level 2 - Mixed
// Tags         : constructive algorithms/greedy/math/*800
// Problem      : 1353A - Most Unstable Array (https://codeforces.com/problemset/problem/1353/A)
// Date         : 02-07-2025
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

const int n = 1e6;
vector<int> a(n + 1);

vector<vector<int>> st;
vector<int> lg;

void precalc() {
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        a[i] = *max_element(s.begin(), s.end()) - *min_element(s.begin(), s.end());
    }
}

void build_sparse_table() {
    int sz = a.size();
    int K = 20;
    st.assign(K, vector<int>(sz));
    lg.assign(sz + 1, 0);

    for (int i = 2; i <= sz; i++) {
        lg[i] = lg[i/2] + 1;
    }

    for (int i = 0; i < sz; i++) {
        st[0][i] = i;
    }

    for (int k = 1; (1 << k) <= sz; k++) {
        for (int i = 0; i + (1 << k) <= sz; i++) {
            int x = st[k-1][i];
            int y = st[k-1][i + (1 << (k-1))];
            st[k][i] = (a[x] >= a[y] ? x : y);
        }
    }
}

int query(int l, int r) {
    int z = lg[r - l + 1];
    int x = st[z][l];
    int y = st[z][r - (1 << z) + 1];
    return (a[x] >= a[y] ? x : y);
}

void solve() {
    int l, r;
    cin >> l >> r;
    cout << query(l, r) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precalc();
    build_sparse_table();

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
