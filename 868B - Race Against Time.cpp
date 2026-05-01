// Codeforces | ThemeCP Training
//   /\_/\      Author: Emiliano Calderón (MangoFI)
//  ( o.o )     Github: github.com/Delta2904
//   > ^ <      Codeforces: codeforces.com/profile/MangoFI
//
// ThemeCP Level: Training
// Tags         : brute force/implementation/strings/*900
// Problem      : 868B - Race Against Time (https://codeforces.com/problemset/problem/868/B)
// Date         : 25-04-2026
// 
// "We are stardust trying to understand the cosmos,
//  with the patience and agility of a cat in the night."
//     — Inspired by Carl Sagan & feline wisdom

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    double pos_h, pos_m, pos_s;
    bool in = true, out = true;

    pos_h = h % 12;
    pos_h += m / 60.0;
    pos_h += s / 3600.0;

    pos_m = m / 5.0;
    pos_m += s / 3600.0;

    pos_s = s / 5.0;

    t1 = t1 % 12;
    t2 = t2 % 12;

    if (t1 > t2) swap(t1,t2);

    vector<double> hands = {pos_h, pos_m, pos_s};
    for (int i = 0; i < 3; i++) {
        if (hands[i] < t2 && hands[i] > t1) in = false;
        if (hands[i] > t2 || hands[i] < t1) out = false;
    }

    if (in || out) cout << "Yes\n";
    else cout << "No\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //int t; cin >> t;
    //while (t--) solve();

    solve();

    return 0;
}
