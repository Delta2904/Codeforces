#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (a[0] == a[1]) {
        if (a[1] == a[2]) {
            for (int i = 2; i < n; i++) {
                if (a[i - 1] != a[i]) {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        } else {
            cout << 3 << "\n";
        }
    } else {
        if (a[1] == a[2]) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
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
