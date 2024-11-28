#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
    if (n % 2 == 0) {
        cout << n + (2 * k) << endl;
    } else {
        for (int i = 3; i <= n; i++) {
            if (n % i == 0) {
                cout << n + (i + (2 * (k - 1))) << endl;
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }

    return 0;
}
