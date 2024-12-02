#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ones = 0, sol = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int max_val = *max_element(a.begin(), a.end());
    vector<int> freq(max_val + 1, 0);
    for (int i = 0; i < n; i++) freq[a[i]]++;
    vector<pair<int, int>> c;
    for (int i = 0; i <= max_val; i++) {
        if (freq[i] > 0) {
            c.emplace_back(i, freq[i]);
        }
    }

    sort(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++) {
        if (c[i].second == 1) {
            ones++;
        }
    }

    sol += 2 * ceil( ones / 2.0 );
    sol += c.size() - ones;

    cout << sol << endl;

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}