#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n - 2);
    for (int i = 0; i < n - 2; i++) cin >> a[i];

    for (int i = 0; i < n - 4; i++) {
        if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
