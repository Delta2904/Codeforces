#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    pair<int, int> team1;
    pair<int, int> team2;

    cin >> team1.first >> team2.first >> team1.second >> team2.second;

    if (team1.first < team2.first && team2.second < team1.second) {
        cout << "NO" << endl;
        return;
    } else if (team2.first < team1.first && team1.second < team2.second) {
        cout << "NO" << endl;
        return;
    }



    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
