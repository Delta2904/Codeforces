#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> a) {
    int m = 1;
    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) == 5 || abs(a[i] - a[i + 1]) == 7) {
            continue;
        } else {
            m = 0;
            break;
        }
    }

    if (m == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        solve(n, a);
    }

    return 0;
}