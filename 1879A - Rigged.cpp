#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<pair<int, int>> a(n - 1);
    int s, e; cin >> s >> e;

    for (int i = 0; i < n - 1; i++) cin >> a[i].first >> a[i].second;

    for (int i = 0; i < n - 1; i++) {
        if (s <= a[i].first && e <= a[i].second) {
            cout << "-1\n";
            return;
        }
    }

    cout << s << "\n";
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
