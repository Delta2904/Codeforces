#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    int max_a = *max_element(a.begin(), a.end());
    int max_b = *max_element(b.begin(), b.end());

    if (max_a >= max_b) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }

    if (max_b >= max_a) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
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
