#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, longest = 1, current = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i < n; i++) {
        if (a[i - 1] == a[i]) {
            current++;
            longest = max(longest, current);
        } else {
            current = 1;
        }
    }

    cout << n - longest << endl;
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
